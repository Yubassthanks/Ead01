/*Fa�a um programa que calcule as ra�zes de uma equa��o do segundo grau, na forma ax2 + bx + c. 
O programa dever� pedir os valores de a, b e c e fazer as consist�ncias, informando ao usu�rio nas seguintes 
situa��es:
� Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo grau e o 
programa n�o deve fazer pedir os demais valores, sendo encerrado;
� Se o delta calculado for negativo, a equa��o n�o possui raizes reais. Informe ao usu�rio e 
encerre o programa;
� Se o delta calculado for igual a zero a equa��o possui apenas uma raiz real; informe-a ao 
usu�rio;
� Se o delta for positivo, a equa��o possui duas raiz reais; informe-as ao usu�rio*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a,b,c, delta, raiz1,raiz2;
	
	printf("Digite um valor para a");
	scanf("%f",&a);
	printf("Digite um valor para b");
	scanf("%f",&b);
	printf("Digite um valor para c");
	scanf("%f",&c);
	
		if (a != 0){
			delta = (b*b) - 4*a*c;
				if (delta == 0){
					raiz1 = ( -b + sqrt (delta))	 / (2*a);
					printf("\n O delta deu 0");
					printf("\n As raizes ser�o iguais a %.2f", raiz1);		
		
		}else if(delta > 0){
					raiz1 = (-b + sqrt (delta))	/ (2*a);
					raiz2 = (-b + sqrt (delta)) / (2*a);
	
		
			printf("\nO delta eh MAIOR que 0(zero)!");
			printf("\nA primeira raiz eh igual a: %.2f",raiz1);
			printf("\nA segunda raiz eh igual a: %.2f",raiz2);
			
	}else { 
	    printf("\nDelta menor que 0(zero)!\n");
	    printf("\nNao existe raizes reais");
		}
		
	}else {
		printf("\nEssa nao � uma equa��o do segundo grau!");
		printf("\nTente novamente!");
		printf ("\nMas dessa vez experimente adotar um valor para A diferente de 0");
	
	
		}
					
			
			
	}			
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

