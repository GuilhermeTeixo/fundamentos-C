#include <stdio.h>

int main() {

int numerosecreto = 9;
int chute;
int acertou = (chute == numerosecreto);

	printf("Bem-vindo ao jogo de adivinhação!\n");	

	for(int i=1; i<=3; i++){
	
		printf("Insira o seu chute abaixo: \n");
		scanf("%d", &chute);
		printf("O seu chute foi %d ", chute);
		printf("\nEssa foi a sua tentativa %d de 3!", i);

		if(acertou){
			printf("parabéns, está correto!\n");
		}
		else{

			if(chute>numerosecreto){
				printf("\nO seu palpite foi maior que o número secreto!\n");
			}
			else {
				printf("\nO seu palpite foi menor que o número secreto!\n");
			} 
		}
	}
}