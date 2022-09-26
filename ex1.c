#include <stdio.h>
#include <locale.h>
/*1. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento 
diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo 
regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo 
excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule 
o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor 
da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso = -1, excesso = 0, multa = 0;
		
	while(peso < 0 || peso > 32767)	{
	        printf("Quantidade de peixe em Kg:");
        	scanf("%f", &peso);
	}if (peso <= 50){
		
				printf("\n O peso está no regulamento.");
	return 0;			
	}else{
		excesso = peso - 50;
		multa = excesso * 4;
			printf("excesso : %.3f",excesso);
			printf("multa: %.2f", multa);
	}
			printf("\nJoão excedeu %.2f quilos sua multa será de R$ %.2f",excesso, multa);

}			
	
	


		

		
		

	


