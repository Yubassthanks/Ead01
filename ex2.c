#include <stdio.h>
#include <locale.h>

/*Fa�a um Programa
que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. 
Calcule e mostre o total do seu sal�rio no referido m�s,
sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5%
para o sindicato, fa�a um programa que nos d�:

Salario bruto: 
iR:
INSS:
SINDICATO:
Sal�rio l�quido:
*/



int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario,salariob, salariol, hora, ir, inss, sind;
	
	
		printf("digite seu sal�rio por hora:");
		scanf("%f", &salario);
		printf("Digite a carga hor�ria trabalhada:");
		scanf("%f", &hora);
		
		//Process
		salariob = salario * hora;
					
		ir = salariob * 11 / 100;
		inss = salariob * 8 / 100;
		sind = salariob * 5 / 100;
		
		printf("Salario bruto: R$%.1f", salariob);
		
		
		
	
	return 0;
	
	
	




}
