#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// PRPJET FAIT PAR :
//					 NTUMBABU TSHITEYA JOAS
///////////////////////////////////////////////////////////////////////////////////
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
			printf("[ %d ] Essaie encore : ",i);
		}

		else if(choix_joueur > valeur_a_touver)
		{
			printf("MOINS\n");
			printf("[ %d ] Essaie encore : ",i);
		}
		else
		{
			printf("\n DOmmage\n");
		}
		i++;
	}
}
//////////////////////////////////////////////////////////////////////////////////
void main_plus_moins_un_joueur()
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
//////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
void plus_moins_deux_joueur_1(int essaie, int nbr_j_2, int nbr_j1)
{
	int i = 0;
	int resultat = 0;
	resultat = nbr_j1;

	while(essaie != nbr_j_2 && i < nbr_j1)
	{	
		scanf("%d",&essaie);

		if(essaie == nbr_j_2)
		{
			printf("\n\n+*+*++*+*+*+*+*++*+**+ BINGO *+***+*+*+*+*+*+*+*+++*\n\n");
			//res = resultat + nbr_j1;
		}
			
		else if(essaie < nbr_j_2)
		{
			printf("PLUS\n");
			printf("[ %d ] Essaie encore : ",i+1);
			resultat = resultat - 1;

		}

		else if(essaie > nbr_j_2)
		{
			printf("MOINS\n");
			printf("[ %d ] Essaie encore : \n\n",i+1);
			resultat = resultat -1;
		}
		else
		{
			printf("\n DOmmage\n");
		}
		i++;
	}
	printf("SCORE FINAL = %d \n",resultat);
}
////////////////////////////////////////////////////////////////////////////////////////
void plus_moins_deux_joueur_2(int essaie, int nbr_j_1, int nbr_j_2)
{
	int i = 0;
	int resultat = 0;
	resultat = nbr_j_2;

	while(essaie != nbr_j_1 && i < nbr_j_2)
	{	
		scanf("%d",&essaie);

		if(essaie == nbr_j_1)
		{
			printf("\n\n+*+*++*+*+*+*+*++*+**+ BINGO *+***+*+*+*+*+*+*+*+++*\n\n");
		}
			
		else if(essaie < nbr_j_2)
		{
			printf("PLUS\n");
			printf("[ %d ] Essaie encore : ",i+1);
			resultat = resultat - 1;

		}

		else if(essaie > nbr_j_2)
		{
			printf("MOINS\n");
			printf("[ %d ] Essaie encore : \n\n",i+1);
			resultat = resultat -1;
		}
		else
		{
			printf("\n DOmmage\n");
		}
		i++;
	}
	printf("SCORE FINAL = %d \n",resultat);
}
/////////////////////////////////////////////////////////////////////////////////////////////////
void main_plus_moins_deux_joueur()
{
	int joueur_1 = 0;
	int joueur_2= 0;
	int tour = 0;
	int essaie = 0;

	srand(time(NULL));
	int nbr_min_max = rand()%100;

		
	printf("\n============== BIEN VENNUE DANS LE MODE DEUX JOUEUR ==============\n\n");

	printf("Inserer le nombre des tour : ");scanf("%d",&tour); 
	printf("\n");

	for(int i = 0; i < tour; i++)
	{	
		printf("JOUEUR 1 placer le nombre des coups minimum maximum pour JOUEUR 2 : "); scanf("%d",&joueur_1);
		printf("\n");
		printf("Joueur 2 Deviner le nombre placer entre 0 et 100 en seulement %d essaie: ",joueur_1); plus_moins_deux_joueur_1(essaie, nbr_min_max, joueur_1);
		
		printf("\n\n");

		printf("JOUEUR 2 placer le nombre des coups minimum maximum pour JOUEUR 1 : "); scanf("%d",&joueur_2);
		printf("\n");
		printf("Joueur 1 Deviner le nombre placer entre 0 et 100 en seulement %d essaie: ",joueur_2); plus_moins_deux_joueur_2(essaie, nbr_min_max, joueur_2);
		printf("\n");
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
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
		main_plus_moins_un_joueur();
	}
	else
	{
		main_plus_moins_deux_joueur();
	}
	return 0;	
}
/*switch(niveau)
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
	}*/