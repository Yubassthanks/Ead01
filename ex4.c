/*4. As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe 
contrataram para desenvolver o programa que calcular� os reajustes. Fa�a um programa que recebe o 
sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
o sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
o sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
o sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
o sal�rios de R$ 1500,00 em diante : aumento de 5%
� Ap�s o aumento ser realizado, informe na tela:
o o sal�rio antes do reajuste;
o o percentual de aumento aplicado;
o o valor do aumento;
o o novo sal�rio, ap�s o aumento.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, p1,p2,p3,p4,s1,s2,s3,s4;
			
			
			printf("\n\n");
	printf("Digite seu sal�rio: R$ ");
	scanf("%f", &salario);
	
		printf("\nSal�rio antes do reajuste : R$ %.2f",salario);
	
		if(salario <= 280 && salario >0){
			printf("\nAumento percentual de 20%%");
		}else if(salario > 280 && salario <= 700){
			printf("\nAumento percentual de 15%%");
		}else if(salario > 700 && salario <= 1500){
			printf("\nAumento percentual de 10%%");
		}else if(salario > 1500){
			printf("\nAumento percentual de 5%%");
		}else{
			printf("Sal�rio inv�lido");
		}
		
		p1 = salario * 0.20;
		p2 = salario * 0.15;
		p3 = salario * 0.10;
		p4 = salario * 0.05;
		
		if(salario <= 280 && salario >0){
			printf("\nAumento salarial: R$ %.2f",p1);
		}else if(salario > 280 && salario <= 700){
			printf("\nAumento salarial: R$ %.2f", p2);
		}else if(salario > 700 && salario <= 1500){
			printf("\nAumento salarial: R$ %.2f",p3);
		}else if(salario > 1500){
			printf("\nAumento salarial: R$ %.2f",p4);
		}else{
			printf("Sal�rio inv�lido");
		}	
		
		s1 = salario + p1;
		s2 = salario + p2;
		s3 = salario + p3;
		s4 = salario + p4;
		
			if(salario <= 280 && salario >0){
			printf("\nSal�rio final: R$ %.2f",s1);
		}else if(salario > 280 && salario <= 700){
			printf("\nSal�rio final: R$ %.2f", s2);
		}else if(salario > 700 && salario <= 1500){
			printf("\nSal�rio final: R$ %.2f",s3);
		}else if(salario > 1500){
			printf("\nSal�rio final: R$ %.2f",s4);
		}else{
			printf("Sal�rio inv�lido");
		}	
}
