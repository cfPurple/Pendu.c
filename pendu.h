#ifndef PENDU_H
#define PENDU_H

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

#define TAILLE_MAX 30

void printPendu(nbrErreur)
{
	switch(nbrErreur)
	{
		case 10:printf("\n\n\n\n\n\n\n\n\n\n\n=================");
		break;

		case 9:printf("\n\n  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 8:printf("\n\n  ||========\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 7:printf("\n\n  ||========\n");
				printf("  || /\n");
				printf("  ||/\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 6:printf("\n\n  ||========\n");
				printf("  || /    |\n");
				printf("  ||/     |\n");
				printf("  ||      |\n");
				printf("  || \n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 5:printf("\n\n  ||========\n");
				printf("  || /    |\n");
				printf("  ||/     |\n");
				printf("  ||      |\n");
				printf("  ||      O\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 4:printf("\n\n  ||========\n");
				printf("  || /    |\n");
				printf("  ||/     |\n");
				printf("  ||      |\n");
				printf("  ||      O\n");
				printf("  ||      |\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 3:printf("\n\n  ||========\n");
				printf("  || /    |\n");
				printf("  ||/     |\n");
				printf("  ||      |\n");
				printf("  ||      O\n");
				printf("  ||     /|\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 2:printf("\n\n  ||========\n");
				printf("  || /    |\n");
				printf("  ||/     |\n");
				printf("  ||      |\n");
				printf("  ||      O\n");
				printf("  ||     /|\\ \n");
				printf("  ||\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 1:printf("\n\n  ||=======\n");
				printf("  || /   |\n");
				printf("  ||/    |\n");
				printf("  ||     |\n");
				printf("  ||     O\n");
				printf("  ||    /|\\ \n");
				printf("  ||    /\n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;

		case 0:printf("\n\n  ||========\n");
				printf("  || /    |\n");
				printf("  ||/     |\n");
				printf("  ||      |\n");
				printf("  ||      O\n");
				printf("  ||     /|\\ \n");
				printf("  ||     / \\ \n");
				printf("  ||\n");
				printf("  ||\n");
				printf("==================");
				break;
	}
}

#endif