#include <stdio.h>

int main() {

int numerosecreto = 9;
int chute;
int acertou = (chute == numerosecreto);

	printf("Bem-vindo ao jogo de adivinhação!\n");
	printf("Insira o seu chute abaixo: \n");
	scanf("%d", &chute);
	printf("O seu chute foi %d ", chute);

	if(acertou){
		printf("parabéns, está correto!\n");
	}
	else{

		if(chute>numerosecreto){
			printf("e o seu palpite foi maior que o  número secreto!\n");
		}
		if(chute<numerosecreto){
			printf("e  o seu palpite foi menor que o  número secreto!\n");
		} 
	}

}