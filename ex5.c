/*Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. 
O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes 
situações:
• Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o 
programa não deve fazer pedir os demais valores, sendo encerrado;
• Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e 
encerre o programa;
• Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao 
usuário;
• Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário*/

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
					printf("\n As raizes serão iguais a %.2f", raiz1);		
		
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
		printf("\nEssa nao é uma equação do segundo grau!");
		printf("\nTente novamente!");
		printf ("\nMas dessa vez experimente adotar um valor para A diferente de 0");
	
	
		}
					
			
			
	}			
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

