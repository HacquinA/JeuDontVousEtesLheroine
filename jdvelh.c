#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int poJoueur = 0;
int ptdVie = 0;
typedef struct chapitre{
	char description[200];
	int gainOr;
	int gainPointDeVie;
	int id[3];
	
}chapitre;




void dest(chapitre * vardest){
	printf("Description: %s\n",(*vardest).description);
	printf("PO que tu gagnes: %d\n",(*vardest).gainOr);
		poJoueur += (*vardest).gainOr;
	printf("Pts de vie que tu gagnes: %d\n",(*vardest).gainPointDeVie );
		ptdVie += (*vardest).gainPointDeVie;
	printf("Possibilites de destination: %d %d\n",(*vardest).id[0],(*vardest).id[1]);
}





int main(){

	chapitre chapitre1 = {"NEW CHAPTER: Tu debutes ton aventure, pour t'aider, le dirigeant de la ville comme à chaque aventurier qui debute t'offre 50 PO",50,5,{2,3}};
	chapitre chapitre2 = {"NEW CHAPTER: Pour devenir plus fort tu decides de t'entrainer, tu participes a des combats et tu gagnes 100PO",100,5,{1,3}};
	chapitre chapitre3 = {"NEW CHAPTER: Un gros combat t'attend, tu le vaincs et remporte 1000PO",1000,5,{1,2}};


//Choix destination


int choix = 0;




while(ptdVie>=0){
	printf("ou veux tu aller ? (1) ,(2) ou(3)\n");
	scanf("%d",&choix);
		switch(choix){

			case 1 : 
				dest(&chapitre1);
			break;

			case 2 :
				dest(&chapitre2);
			break;

			case 3 :
				dest(&chapitre3);
			break;
		};
}



	/*printf("Bonjour aventurier, aujourd'hui tu peux te rendre a Celestia (1) ou a Fribourg (2)\n");
	scanf("%d",&choix);

	if(choix==1){
		printf("Felicitation tu as atteint Celestia, proite de leurs nuages moelleux !\n");

	}
	if (choix==2){
		printf("Felicitation tu as atteint Fribourg, profite de leurs delicieux ramens !\n");
	} */

// deplacement 
		/*printf("Tu change de destination ou veux tu aller? \n");
		scanf("%d",&choix);
			if(choix==1){
			printf("Felicitation tu as atteint Celestia, profite de leurs nuages moelleux !\n");
			}
			if (choix==2){
				printf("Felicitation tu as atteint Fribourg, profite de leurs delicieux ramens !\n");
			}*/




return 0;
}























	
