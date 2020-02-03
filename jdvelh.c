#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int poJoueur = 10;
int ptdVie = 100;
typedef struct chapitre{
	char description[200];
	int index;
	int gainOr;
	int gainPointDeVie;
	int id[3];
	
}chapitre;




void dest(chapitre * vardest){
	printf(" %s\n",(*vardest).description);
	printf("PO que tu gagnes: %d\n",(*vardest).gainOr);
		if((poJoueur + (*vardest).gainOr>=0)){
			poJoueur+=(*vardest).gainOr;
		};
	printf("Pts de vie que tu gagnes: %d\n",(*vardest).gainPointDeVie );
		if(ptdVie + (*vardest).gainPointDeVie <0 && ptdVie + (*vardest).gainPointDeVie>=100){
			ptdVie + (*vardest).gainPointDeVie;
		};
	printf("Possibilites de destination: %d %d\n",(*vardest).id[0],(*vardest).id[1]);
}





int main(){

	chapitre chapitre1 = {"NEW CHAPTER: Tu debutes ton aventure, pour t'aider, le dirigeant de la ville comme a chaque aventurier qui debute t'offre 50 PO",1,50,5,{2,3}};
	chapitre chapitre2 = {"NEW CHAPTER: Pour devenir plus fort tu decides de t'entrainer, tu participes a des combats et tu gagnes 100PO mais tu perds un peu devie !",2,100,-25,{3,4}};
	chapitre chapitre3 = {"NEW CHAPTER: Un gros combat t'attend, tu le vaincs et remporte 1000PO mais tu perds un peu de vie !",3,1000,-40,{4,2}};
	chapitre chapitre4 = {"NEW CHAPTER: Tu as envie d'un peu de repos, tu te diriges vers les nuages moelleux de la ville.",4,0,15,{2,3}};



//Choix destination


int choix = 0;
int decision = 0;


while(ptdVie>=0){
	printf("Ou veux tu aller ? (1),(2),(3),(4)\n");
	scanf("%d",&choix);
		switch(choix){

			case 1 : 
				dest(&chapitre1);
					printf("Ou veux tu aller desormais ?\n");
					scanf("%d",&choix);
				if (choix==4){
						printf("Tu ne peux te rendre a ce chapitre, choisis en un autre\n");
						scanf("%d",&choix);
				}
				if (choix==2){
					printf("Tu dois t'inscrire à ses combats, cela coûte 5PO, Veux tu t'inscrire ? (1) oui (2) non\n");
					scanf("%d",&decision);
					if (decision==1 && poJoueur>=5){
						dest(&chapitre2);
						poJoueur-=5;
					}
					else{
						printf("Choisis une autre destination.\n");
						scanf("%d",&choix);
					}
				}
			break;

			case 2 :
				dest(&chapitre2);
					printf("Ou veux tu aller desormais ?\n");
					scanf("%d",&choix);
					if (choix==1){
						printf("Tu ne peux te rendre a ce chapitre, choisis en un autre\n");
						scanf("%d",&choix);
					}
					if (choix==3){
						printf("Tu as besoin d'un groupe pour tuer ce boss, les engager va te couter 30PO, Veux tu y aller ? (1) oui (2) non\n");
						scanf("%d",&decision);
						if (decision==1 && poJoueur>=30){
							dest(&chapitre3);
							poJoueur-=30;
					}
					else{
						printf("Choisis une autre destination.\n");
						scanf("%d",&choix);
					}
					if (choix==4){
						printf("L'acces aux nuages coute 15PO, Veux tu y aller ? (1) oui (2) non\n");
						scanf("%d",&decision);
						if (decision==1 && poJoueur>=15){
							dest(&chapitre4);
							poJoueur-=15;
					}
					else{
						printf("Choisis une autre destination.\n");
						scanf("%d",&choix);
					}

			break;

			case 3 :
				dest(&chapitre3);
					printf("Ou veux tu aller desormais ?\n");
					scanf("%d",&choix);
					if (choix==1){
						printf("Tu ne peux te rendre a ce chapitre, choisis en un autre\n");
						scanf("%d",&choix);
					}
					if (choix==4){
						printf("L'acces aux nuages coute 15PO, Veux tu y aller ? (1) oui (2) non\n");
						scanf("%d",&decision);
						if (decision==1 && poJoueur>=15){
							dest(&chapitre4);
							poJoueur-=15;
					}
					else{
						printf("Choisis une autre destination.\n");
						scanf("%d",&choix);
					}
					if (choix==2){
					printf("Tu dois t'inscrire à ses combats, cela coûte 5PO, Veux tu t'inscrire ? (1) oui (2) non\n");
					scanf("%d",&decision);
					if (decision==1 && poJoueur>=5){
						dest(&chapitre2);
						poJoueur-=5;
					}
					else{
						printf("Choisis une autre destination.\n");
						scanf("%d",&choix);
					}
					
			break;
			case 4 :
				dest(&chapitre4);
					printf("Ou veux tu aller desormais ?\n");
					scanf("%d",&choix);
					if (choix==1){
						printf("Tu ne peux te rendre a ce chapitre, choisis en un autre\n");
						scanf("%d",&choix);
					}
					if (choix==2){
					printf("Tu dois t'inscrire à ses combats, cela coûte 5PO, Veux tu t'inscrire ? (1) oui (2) non\n");
					scanf("%d",&decision);
					if (decision==1 && poJoueur>=5){
						dest(&chapitre2);
						poJoueur-=5;
					}
					else{
						printf("Choisis une autre destination.\n");
						scanf("%d",&choix);
					}
					if (choix==3){
						printf("Tu as besoin d'un groupe pour tuer ce boss, les engager va te couter 30PO, Veux tu y aller ? (1) oui (2) non\n");
						scanf("%d",&decision);
						if (decision==1 && poJoueur>=30){
							dest(&chapitre3);
							poJoueur-=30;
					}
					else{
						printf("Choisis une autre destination.\n");
						scanf("%d",&choix);
					}
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























	
