#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void plus_moins(int choix_joueur, int valeur_a_touver, int nbr_de_choix)
{
	int i = 0;

	while(choix_joueur != valeur_a_touver && i < nbr_de_choix)
	{	
		scanf("%d",&choix_joueur);
		if(choix_joueur == valeur_a_touver)
		{
			printf("\n\n+*+*++*+*+*+*+*++*+**+ BINGO *+***+*+*+*+*+*+*+*+++*\n");
		}
			
		else if(choix_joueur < valeur_a_touver)
		{
			printf("PLUS\n");
			printf("Essaie encore : ");
		}

		else if(choix_joueur > valeur_a_touver)
		{
			printf("MOINS\n");
			printf("Essaie encore : ");
		}
		else
		{
			printf("\n DOmmage\n");
		}
		i++;
	}
}

int main()
{
	srand(time(NULL));
	int nbr_secret = rand()%100;
	int choix = 0;
	int niveau = 0;
	int niveau_jeux = 0;
	
	printf("\n============== BIEN VENNUE DANS LE JEUX PLUS MOINS ==============\n\n");
	printf("\t\t CHOISISER LE NIVEAU DE JEUX : \n\n");
	printf("\t 1. FACILE \n \t 2. MOYEN \n \t 3. DIFFICILE \n\n");
	printf("INSERER LE NUMERO DU NIVEAU DE JEUX : "); scanf("%d",&niveau);
	
	switch(niveau)
	{
		case 1:
			niveau_jeux = 100;
			printf("\n\t vous avez choisi le niveau 1 \n\n");
			break;

		case 2:
			niveau_jeux = 25;
			printf("\n\t vous avez choisi le niveau 2 \n\n");
			break;

		case 3:
			niveau_jeux = 10;
			printf("\n\t vous avez choisi le niveau 3\n\n");
			break;

		default:
			printf("\n\t Vous deviez choisir le niveau entre 1 et 3 \n\n");
			break;
	}

	//int resultat = 0;
	printf("Deviner un nombre compris entre 0 et 100 : "); plus_moins(choix, nbr_secret, niveau_jeux);
	printf("\n");
	return 0;
}