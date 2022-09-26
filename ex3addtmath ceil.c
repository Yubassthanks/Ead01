#include <stdio.h>
#include <locale.h>
#include <math.h>
/*3. Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros 
quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros 
quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, 
que custam R$ 25,00.Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços 
em 2 situações:
a. comprar apenas latas de 18 litros;
b. comprar apenas galões de 3,6 litros;*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float area, litro, qlg, qlp, vglg, vglp, rp, rg;

	printf("informe a área em metros quadrados que será pintado:");
	scanf("%f", &area);
	
	//process
	
	litro = ceil( area / 6);
	qlg = ceil(litro / 18);
	vglg = ceil(qlg * 80);
	qlp = ceil(area / 3.6);
	vglp = ceil (qlp * 25);
	
		 
		
	printf("\n Quantidade de litros necessários: %.f", litro);
	printf("\n Quantidade de latas de 18 litros: %.f e valor gasto : R$ %.2f", qlg, vglg);
	printf("\n Quantidade de latas de 3,6 litros: %.f e valor gasto: %.2f.",qlp,vglp);
	}


