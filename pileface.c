#include "pileface.h"

int main (int argc, char *argv[]){
	long argent;
	long mise, cotedelaPiece, coteChoisi, argentGagner;
	long finGame;

	printf("\n         ** Bienvenue dans le jeu Pile ou Face **");
	printf("\n\n Le jeu où vous allez perdre de l'argent, ou pas !!");
	printf("\n Combien d'argent voulez vous mettre pour jouer ? \n");
	scanf("%ld", &argent);

	while (argent>0){
		printf("\n\n Vous avez %ld€ pour jouer", argent);
		printf("\n Combien misez vous ? \n");
		scanf("%ld", &mise);

		if (mise<=0){
			printf("\n\n Votre mise doit être supérieur à 0€, Faut pas avoir peur de perdre de l'argent");
			printf("\n Alors, combien voulez vous miser ? \n");
			scanf("%ld", &mise);
		}
		else{
			if (mise>argent){
				printf("\n\n Vous avez pas assez d'argent pour miser autant");
				printf("\n Alors, combien voulez vous miser ? \n");
				scanf("%ld", &mise);
			}
			else{
				printf("\n Vous avez misé %ld€ pour cette partie", mise);
			}
		}

		printf("\n\n Quel coté de la pièce misez vous ?");
		printf("\n 1 pour Pile et 2 pour Face \n");
		scanf("%ld", &coteChoisi);

		srand(time(NULL));
		cotedelaPiece = (rand()% (2-1+1))+1;

		printf("\n Lancer de la pièce");
		printf("\n La pièce est tombée du coté %ld", cotedelaPiece);

		if (cotedelaPiece == coteChoisi){
			printf("\n Vous avez gagnez, Bravo");
			argent = argent + (mise * 2);
			argentGagner = mise * 2;
			printf("\n Vous avez gagné %ld€", argentGagner);
		}
		else{
			printf("\n Vous avez perdu, pour une prochaine fois");
			argent = argent - mise;
			printf("\n\n Il vous reste %ld€", argent);
		}

		if (argent>0){
			printf("\n\n Vous avez encore de l'argent, voulez vous continuer à jouer ?");
			printf("\n 1 pour continuer et 2 pour arrêter \n");
			scanf("%ld", &finGame);

			if (finGame == 1){
			}
			else{
			printf("\n Vous avez arrêter de jouer avec %ld€ \n", argent);
			printf("\n         ** Au revoir, merci d'avoir jouer **\n");
			exit(EXIT_SUCCESS);
			}
		}
		else{
			printf("\n\n Vous n'avez plus d'argent, vous avez perdu");
		}
	}

	printf("\n         ** Au revoir, merci d'avoir jouer **");

	return 0;
}