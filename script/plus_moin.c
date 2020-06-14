#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void plus_moins(int choix_joueur, int valeur_a_touver)
{
	int x = 0;
	do
	{	
		printf("Essaie encore : "); scanf("%d",&choix_joueur);
		if(choix_joueur == valeur_a_touver)
		{
			printf("BINGO\n");
		}
		
		else if(choix_joueur < valeur_a_touver)
		{
			printf("PLUS\n");
		}

		else
		{
			printf("MOINS\n");
		}
	}while(choix_joueur != valeur_a_touver);	
}

int main()
{
	srand(time(NULL));
	int nbr_secret = rand()%11;
	int choix;
	//int resultat = 0;
	printf("deviner un nombre compris entre 0 et 10 : "); plus_moins(choix, nbr_secret);
	printf("\n");
	return 0;
}