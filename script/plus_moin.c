#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//#include<conio.h>
//#include<windows.h>
#include<unistd.h>
// PRPJET FAIT PAR :
//					 NTUMBABU TSHITEYA JOAS
///////////////////////////////////////////////////////////////////////////////////
/////////////// FONCTION DU  MONDE JOUEUR UN /////////////////////////////

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
			printf("[ %d ] Essaie encore : ",i+1);
		}

		else if(choix_joueur > valeur_a_touver)
		{
			printf("MOINS\n");
			printf("[ %d ] Essaie encore : ",i+1);
		}
		//else
		//{
		//	printf("\n DOmmage\n");
		//}
		i++;
	}
}
//////////////////////////////////////////////////////////////////////////////////
/// SElection de nieveau des jeux et fonction principale du mode un joueur ////// 

void main_plus_moins_un_joueur()
{
	srand(time(NULL));
	int nbr_secret = rand()%100;
	int choix = 0;
	int niveau = 0;
	int niveau_jeux = 0;
	
	printf("\t=================================================================\n");
	printf("\t=================================================================\n");
	printf("\t=================================================================\n");
	printf("\t=================================================================\n");
	printf("\n\t============== BIEN VENNUE DANS LE MODE UN JOUEUR ==============\n\n");
	printf("\t\t CHOISISER LE NIVEAU DE JEUX : \n\n");
	printf("\t 1. FACILE \n \t 2. MOYEN \n \t 3. DIFFICILE \n\n");
	printf("  INSERER LE NUMERO DU NIVEAU DE JEUX : "); scanf("%d",&niveau);
		
	switch(niveau)
	{
		case 1:
			niveau_jeux = 100;
			printf("\n\t VOUS AVEZ CHOISI LE NIVEAU 1 \n\n");
			break;

		case 2:
			niveau_jeux = 25;
			printf("\n\t VOUS AVEZ CHOISI LE NIVEAU 2 \n\n");
			break;

		case 3:
			niveau_jeux = 10;
			printf("\n\t VOUS AVEZ CHOISI LE NIVEAU 3\n\n");
			break;

		default:
			printf("\n\t VOUS DEVIEZ CHOISIR LE NIVEAU ENTRE 1 ET 3 \n\n");
			break;
	}
	//int resultat = 0;
	printf("TROUVEZ LE NOMBRE MYSTERE COMPRIS ENTRE 0 ET 100 : "); plus_moins(choix, nbr_secret, niveau_jeux);
	printf("\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////// fonction de du monde deux joueur joueur 1//////////////////////////////////

void plus_moins_deux_joueur_1(int essaie, int nbr_j_2, int nbr_j1, int resultat1)
{
	int i = 0;
	//int resultat = 0;
	resultat1 = nbr_j1;

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
			printf("[ %d ] Essaie encore : \n",i+1);
			resultat1 = resultat1 - 1;

		}

		else if(essaie > nbr_j_2)
		{
			printf("MOINS\n");
			printf("[ %d ] Essaie encore : \n\n",i+1);
			resultat1 = resultat1 -1;
		}
		//else
		//{
		//	printf("\n DOmmage\n");
		//}
		i++;
	}
	printf("SCORE FINAL = %d \n",resultat1);
}
////////////////////////////////////////////////////////////////////////////////////////
///////////////////fonction de du monde deux joueur joueur 1///////////////////////////

void plus_moins_deux_joueur_2(int essaie, int nbr_j_1, int nbr_j_2, int resultat2)
{
	int i = 0;
	resultat2 = 0;
	resultat2 = nbr_j_2;

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
			resultat2 = resultat2 - 1;

		}

		else if(essaie > nbr_j_2)
		{
			printf("MOINS\n");
			printf("[ %d ] Essaie encore : \n\n",i+1);
			resultat2 = resultat2 -1;
		}
		//else
		//{
		//	printf("\n DOmmage\n");
		//}
		i++;
	}
	printf("SCORE FINAL = %d \n",resultat2);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////fonction principale du mode deux joueur/////////////////////////

void main_plus_moins_deux_joueur()
{
	int joueur_1 = 0;
	int joueur_2= 0;
	int tour = 0;
	int essaie = 0;
	int res_1 = 0;
	int res_2 = 0;
	char JOUEUR1[10] = " ";
	char JOUEUR2[10] = " ";

	srand(time(NULL));
	int nbr_min_max = rand()%100;

	
	printf("\t=================================================================\n");
	printf("\t=================================================================\n");
	printf("\t=================================================================\n");
	printf("\t=================================================================\n");
	printf("\t=================================================================\n");	
	printf("\t============== BIEN VENNUE DANS LE MODE DEUX JOUEUR =============\n\n");

	printf("JOUEUR 1 ENTRE VOTRE NOM : ");scanf("%s",JOUEUR1);
	printf("\n");
	printf("JOUEUR 2 ENTRE VOTRE NOM : ");scanf("%s",JOUEUR2);
	printf("\n");

	printf("INSERERER LE NOMBRE DES TOUR : ");scanf("%d",&tour); 
	printf("\n");

	for(int i = 0; i < tour; i++)
	{	
		printf(" %s TAPEZ UN NOMBRE DES COUPS MINIMUM MAXIMUM POUR %s : ",JOUEUR1, JOUEUR2); scanf("%d",&joueur_1);
		printf("\n");
		printf(" %s TROUVEZ LE NOMBRE MYSTERE PLACER ENTRE 0 ET 100 EN SEULEMENT %d ESSAIE : ",JOUEUR2, joueur_1); plus_moins_deux_joueur_1(essaie, nbr_min_max, joueur_1, res_1);
		
		printf("\n\n");

		printf(" %s TAPEZ LE NOMBRE DES COUPS MINIMUM MAXIMUM POUR %s : ",JOUEUR2, JOUEUR1); scanf("%d",&joueur_2);
		printf("\n");
		printf(" %s TROUVEZ LE NOMBRE MYSTERE PLACER ENTRE 0 ET 100 EN SEULEMENT %d ESSSAIE : ",JOUEUR1 ,joueur_2); plus_moins_deux_joueur_2(essaie, nbr_min_max, joueur_2, res_2);
		printf("\n\n");
	}

	if(res_1 == res_2)
	{
		printf(" Vous etes egalite avec un score de %d et %d \n",res_1, res_2);
	}
	else if(res_1 > res_2)
	{
		printf(" %s a gagner avec un score de %d contre %d\n",JOUEUR1,res_1,res_2);
	}
	else
	{
		printf(" %s a gagner avec un score de %d contre %d\n",JOUEUR2,res_2,res_1);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
/////////////// selection des niveau page d'aceuille  fonction principale /////////////////////
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
	printf("\t========================= ");scanf("%d",&choix_mode);

	switch(choix_mode)
	{
		case 1:
			break;

		case 2:
			break;
		default:
			printf("\n\tvous devriez choisir entre 1 ou 2 \n\n");
			exit(0);
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
