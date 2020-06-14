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

void plus_moins_un_joueur()
{
	srand(time(NULL));
	int nbr_secret = rand()%100;
	int choix = 0;
	int niveau = 0;
	int niveau_jeux = 0;
	
	printf("\n============== BIEN VENNUE DANS LE MODE UN JOUEUR ==============\n\n");
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
}

void plus_moins_deux()
{

}

void plus_moins_deux_joueur()
{
	//srand(time(NULL));
	//int nbr_secret = rand()%100;
	int joueur_1 = 0;
	int joueur_2= 0;
	int nbr_secret;
	int choix = 0;
	//int niveau = 0;
	int niveau_jeux = 0;
	
	printf("\n============== BIEN VENNUE DANS LE MODE DEUX JOUEUR ==============\n\n");
	
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
	printf("Deviner un nombre compris entre 0 et 100 : ");
}

int main()
{
	int choix_mode = 0;
	printf("\t=================================================================\n");
	printf("\t============== BIEN VENNUE DANS LE JEUX PLUS MOINS ==============\n");
	printf("\t==                                                             ==\n");
	printf("\t==              CHOISISER LE NOMBRE DE JOUEUR                  ==\n");
	printf("\t==         INSERER LE NUMERO DES NOMBRES DE JOUEUR             ==\n");
	printf("\t==                                                             ==\n");
	printf("\t==                 1. MODE UN JOUEUR                           ==\n");
	printf("\t==                 2. MODE DEUX JOUEUR                         ==\n");
	printf("\t==                                                             ==\n");
	printf("\t==                                                             ==\n");
	printf("\t====================== ");scanf("%d",&choix_mode);                                                        
	printf("\t=================================================================\n");

	switch(choix_mode)
	{
		case 1:
			break;

		case 2:
			printf("vous avez choisi le mode 2 JOUEUR \n");
			break;
		default:
			printf("vous deviez choisir 1 ou 2 \n");
			break;
	}

	if(choix_mode == 1)
	{	
		plus_moins_un_joueur();
	}
	else
	{
		plus_moins_deux_joueur();
	}
	return 0;	
}