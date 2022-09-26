/*4. As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe 
contrataram para desenvolver o programa que calculará os reajustes. Faça um programa que recebe o 
salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
o salários até R$ 280,00 (incluindo) : aumento de 20%
o salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
o salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
o salários de R$ 1500,00 em diante : aumento de 5%
• Após o aumento ser realizado, informe na tela:
o o salário antes do reajuste;
o o percentual de aumento aplicado;
o o valor do aumento;
o o novo salário, após o aumento.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, p1,p2,p3,p4,s1,s2,s3,s4;
			
			
			printf("\n\n");
	printf("Digite seu salário: R$ ");
	scanf("%f", &salario);
	
		printf("\nSalário antes do reajuste : R$ %.2f",salario);
	
		if(salario <= 280 && salario >0){
			printf("\nAumento percentual de 20%%");
		}else if(salario > 280 && salario <= 700){
			printf("\nAumento percentual de 15%%");
		}else if(salario > 700 && salario <= 1500){
			printf("\nAumento percentual de 10%%");
		}else if(salario > 1500){
			printf("\nAumento percentual de 5%%");
		}else{
			printf("Salário inválido");
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
			printf("Salário inválido");
		}	
		
		s1 = salario + p1;
		s2 = salario + p2;
		s3 = salario + p3;
		s4 = salario + p4;
		
			if(salario <= 280 && salario >0){
			printf("\nSalário final: R$ %.2f",s1);
		}else if(salario > 280 && salario <= 700){
			printf("\nSalário final: R$ %.2f", s2);
		}else if(salario > 700 && salario <= 1500){
			printf("\nSalário final: R$ %.2f",s3);
		}else if(salario > 1500){
			printf("\nSalário final: R$ %.2f",s4);
		}else{
			printf("Salário inválido");
		}	
}
