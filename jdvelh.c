#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int choix = 0;



int main(){
	printf("Bonjour aventurier, aujourd'hui tu peux te rendre à Celestia (1) ou a Jibourg (2)\n");
	scanf("%d",&choix);

	if(choix==1){
		printf("Felicitation tu as atteint Celestia, proite de leurs nuages moelleux !\n");
	}
	if (choix==2){
		printf("Felicitation tu as atteint Fribourg, profite de leurs delicieux ramens !\n");
	}
























	return 0;
}