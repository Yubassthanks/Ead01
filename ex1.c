#include <stdio.h>
#include <locale.h>
/*1. Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento 
di�rio de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo 
regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo 
excedente. Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes) e calcule 
o excesso. Gravar na vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel multa o valor 
da multa que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso = -1, excesso = 0, multa = 0;
		
	while(peso < 0 || peso > 32767)	{
	        printf("Quantidade de peixe em Kg:");
        	scanf("%f", &peso);
	}if (peso <= 50){
		
				printf("\n O peso est� no regulamento.");
	return 0;			
	}else{
		excesso = peso - 50;
		multa = excesso * 4;
			printf("excesso : %.3f",excesso);
			printf("multa: %.2f", multa);
	}
			printf("\nJo�o excedeu %.2f quilos sua multa ser� de R$ %.2f",excesso, multa);

}			
	
	


		

		
		

	


