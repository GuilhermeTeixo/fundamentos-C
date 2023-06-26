#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {

int numerosecreto = 9;
int chute;

	printf("Bem-vindo ao jogo de adivinhação!\n");	

	for(int i=1; i<=NUMERO_DE_TENTATIVAS; i++){

		printf("Essa é a sua tentativa %d de %d!\n", i, NUMERO_DE_TENTATIVAS);
		printf("Insira o seu chute abaixo: \n");
		scanf("%d", &chute);
				
		int acertou = (chute == numerosecreto);

		if(acertou){
			printf("Parabéns, você acertou!\n");
			break;
		}
		else{

			if(chute>numerosecreto){
				printf("O seu chute foi maior que o número secreto!\n");
			}
			else {
				printf("O seu chute foi menor que o número secreto!\n");
			} 
		}
	}
	printf("Fim de jogo!\n");
	return;
}