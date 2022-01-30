#include"pendu.h"

int getNbrMot(FILE* fichier)
{	
	int caractereActuel = 0;
	int nbr = 1;

	do
		{
			caractereActuel = fgetc(fichier);//on lit le caractere
			if(caractereActuel == '\n')
			nbr++;
		}while(caractereActuel != EOF);//on continue tant que fgetc n'a pas retourne EOF(fin de fichier)

		rewind(fichier);

		return nbr;
}

char* getMotMystere()
{
	char* mot;
	int nbrMot;
	int r;

	mot = malloc(sizeof(char) * TAILLE_MAX);

	FILE* fichier = NULL;
	fichier = fopen("bibliotheque.txt", "r");
	if(fichier == NULL)
	{
		printf("imposible d'ouvrir le ficher bibliotheque.txt");
	}

	nbrMot = getNbrMot(fichier);

	srand(time(NULL));
	r = rand() % nbrMot;
	
	do
	{
		fgets(mot, TAILLE_MAX, fichier);
		r--;

	}while(r >= 0);
	
	fclose(fichier);
	return mot;
}

int rejouer()
{
	char choix;

	printf("Voulez vous rejouer? y/n\n");
	choix = getchar();
	while(getchar() != '\n') ;

	if(choix == 'n')
	{
		printf("\nAu revoir !\n\n");
		return 0;
	}
	else if(choix == 'y')
	{
		printf("\nEt c'est reparti !\n\n");
		return 1;
	}
	else
	{
		printf("\nChoix invalide\n");
		printf("Au revoir !\n\n");
		return 0;
	}
}

int verMot(char* motMystere, char* motJoueur, int nbrLettre)
{
	int p;
	p = 0; 

	while(motMystere[p] == motJoueur[p])
	{
			p++;
	}

	if(p == nbrLettre - 1)
	{
		printf("\n\nBRAVO, tu as trouvé\n\n");
		printf("Le mot mystere etait %s \n", motMystere);
		return 0;
	}
	else
		return 1;
}

int verErreur(int nbrErreur, char* motMystere)
{
	if(nbrErreur == 0)
	{
		printf("\nC'est perdu :( T'es pas tres bon...\n");
		printf("Le mot mystere etait %s \n", motMystere);
		return 0;
	}
	else
		return 1;
}

void jeu()
{
	char* motMystere;
	char* motJoueur;
	char* motVerif;
	int i = 0;
	int nbrLettre;
	char carJoueur;
	int nbrErreur = 11;

	motMystere = malloc(sizeof(char) * TAILLE_MAX);
	motJoueur = malloc(sizeof(char) * TAILLE_MAX);
	motVerif = malloc(sizeof(char) * TAILLE_MAX);

	do
	{
		printf("|||||||||||||||||||||||||||||||||\n");
		printf("|||     Jeu du pendu tmtc     |||\n");
		printf("|||||||||||||||||||||||||||||||||\n\n\n");

		motMystere = getMotMystere();
		nbrLettre = strlen(motMystere);
		while(i <= nbrLettre - 1)
		{
			if(i < nbrLettre - 1)
				motJoueur[i] = '_';
			if(i == nbrLettre - 1)
				motJoueur[i] = '\0';

			i++;
		}
		i = 0;

		printf("\nle mot mystere contient %d lettres\n", nbrLettre);

		do
		{
			memcpy(motVerif, motJoueur,sizeof(char) * nbrLettre);

			printf("\n %s \n\n", motJoueur);
			printf("choisis ta lettre bo male :");

			carJoueur = getchar();
			while(getchar() != '\n') ;
		
			while(i < nbrLettre - 1)
			{
				if(carJoueur == motMystere[i] || carJoueur == motMystere[i] + 32)
				{
					motJoueur[i] = motMystere[i];
					printPendu(nbrErreur);
				}
				i++;
			}
			i = 0;

			while(motJoueur[i] == motVerif[i])
			{
				if(i == nbrLettre)
				{
					nbrErreur--;
					printPendu(nbrErreur);
					printf("\n////Il vous reste %d erreur(s)////\n", nbrErreur);
				}
				i++;
			}
			i = 0;

		}while(verMot(motMystere, motJoueur, nbrLettre) == 1 && verErreur(nbrErreur, motMystere) == 1);
		nbrErreur = 11;
	}while(rejouer());
}

int main(int argc, char **argv)
{
	jeu();

	return 0;
}