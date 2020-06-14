#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void plus_moins(int choix_joueur, int valeur_a_touver)
{
	int nbr_de_choix = 3;
	int i = 0;

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

		i++;
	}while(choix_joueur != valeur_a_touver && i <= nbr_de_choix);

	printf("DOmmage\n");	
}

int main()
{
	srand(time(NULL));
	int nbr_secret = rand()%100;
	int choix;
	char FACILE = "1";
	printf("============== BIEN VENNUE DANS LE JEUX PLUS MOINS ==============\n\n");
	printf("\t\tCHOISISER LE NIVEAU DE JEUX : \n\n");
	printf("\n");

	//int resultat = 0;
	printf("deviner un nombre compris entre 0 et 10 : "); plus_moins(choix, nbr_secret);
	printf("\n");
	return 0;
}