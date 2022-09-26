#include <stdio.h>
#include <locale.h>

/*Faça um Programa
que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5%
para o sindicato, faça um programa que nos dê:

Salario bruto: 
iR:
INSS:
SINDICATO:
Salário líquido:
*/



int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario,salariob, salariol, hora, ir, inss, sind;
	
	
		printf("digite seu salário por hora:");
		scanf("%f", &salario);
		printf("Digite a carga horária trabalhada:");
		scanf("%f", &hora);
		
		//Process
		salariob = salario * hora;
					
		ir = salariob * 11 / 100;
		inss = salariob * 8 / 100;
		sind = salariob * 5 / 100;
		
		printf("Salario bruto: R$%.1f", salariob);
		
		
		
	
	return 0;
	
	
	




}
