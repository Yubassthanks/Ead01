#include <stdio.h>
#include <locale.h>

/*6. Fa�a um programa para um caixa eletr�nico. O programa dever� perguntar ao usu�rio a valor do 
saque e depois informar quantas notas de cada valor ser�o fornecidas. As notas dispon�veis ser�o as de 1, 
5, 10, 50 e 100 reais. O valor m�nimo � de 10 reais e o m�ximo de 600 reais. O programa n�o deve se 
preocupar com a quantidade de notas existentes na m�quina.
Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 
50, uma nota de 5 e uma nota de 1;
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece tr�s notas de 100, uma nota de 
50, quatro notas de 10, uma nota de 5 e quatro notas de 1.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor, nota0, nota1, nota2, nota3 , nota4;
	
	printf("Digite o valor que voc� deseja sacar. Valor m�nimo: R$10,00. Valor m�ximo: R$600,00\n");
	scanf("%i", &valor);

	if(valor < 10 || valor > 600) {
			printf("Valor de saque inv�lido");
		
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

	
	



