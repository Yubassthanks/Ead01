#include <stdio.h>
#include <locale.h>

/*6. Faça um programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do 
saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 
5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se 
preocupar com a quantidade de notas existentes na máquina.
Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 
50, uma nota de 5 e uma nota de 1;
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 
50, quatro notas de 10, uma nota de 5 e quatro notas de 1.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor, nota0, nota1, nota2, nota3 , nota4;
	
	printf("Digite o valor que você deseja sacar. Valor mínimo: R$10,00. Valor máximo: R$600,00\n");
	scanf("%i", &valor);

	if(valor < 10 || valor > 600) {
			printf("Valor de saque inválido");
		
	}else{
			nota4 = valor / 100;
			valor -= nota4 * 100;
			nota3 = valor / 50;
			valor -= nota3 * 50;
			nota2 = valor / 10;
			valor -= nota2 * 10;
			nota1 = valor / 5;
			valor -= nota1 * 5;
			nota0 = valor;				
				
		if(nota4 > 0) 
			printf("\n %d notas de R$100", nota4);
		if(nota3 > 0) 
			printf("\n %d notas de R$50", nota3);	
		if(nota2 > 0) 
				printf("\n %d notas de R$10", nota2);
		if(nota1 > 0) 
				printf("\n %d notas de R$5", nota1);
		if(nota0 > 0) 
				printf("\n %d notas de R$1", nota0);
		}
}

	
	



