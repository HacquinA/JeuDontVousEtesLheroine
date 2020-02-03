#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


struct chapitre{
	char description[70];
	int gainOr;
	int gainPointDeVie;
	int id;
	
};

typedef struct chapitre chapitre;



int choix = 0;
int deplacement =0; 



int main(){

	chapitre chapitre1 = {"Debut de l aventure",50,5,1};
	chapitre chapitre2 = {"De nouvelles techniques",50,5,2};
	chapitre chapitre3 = {"Le combat final",50,5,3};





	printf("Bonjour aventurier, aujourd'hui tu peux te rendre a Celestia (1) ou a Jibourg (2)\n");
	scanf("%d",&choix);

	if(choix==1){
		printf("Felicitation tu as atteint Celestia, proite de leurs nuages moelleux !\n");
	}
	if (choix==2){
		printf("Felicitation tu as atteint Fribourg, profite de leurs delicieux ramens !\n");
	}

	
	printf("Si tu veux changer de destination alors tape (3)\n");
	scanf("%d",&choix);
	if (choix==3);
	{
		printf("Tu as decide de change de zone, ou veux tu aller desormais ? tu peux te rendre a Celestia (1) ou a Jibourg (2)\n");
			scanf("%d",&choix);
		if(choix==1){
		printf("Felicitation tu as atteint Celestia, profite de leurs nuages moelleux !\n");
		}
		if (choix==2){
			printf("Felicitation tu as atteint Fribourg, profite de leurs delicieux ramens !\n");
		}


	}























	return 0;
}