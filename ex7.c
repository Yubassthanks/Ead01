/*Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
"Telefonou para a vítima?"
"Esteve no local do crime?""
"Mora perto da vítima?"
"Devia para a vítima?"
Já trabalhou com a vítima?" O programa deve no final emitir 
uma classificação sobre a participação da pessoa no crime.
Se a pessoa responder positivamente a 2 questões ela deve 
ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" 
e 5 como "Assassino". Caso contrário, ele será classificado 
como "Inocente".
'''*/
#include <stdio.h>
#include <locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
	char resp;
    int conta = 0;
    
    printf("Responda as perguntas com S para sim ou N para não.");
    
    printf("\nTelefonou para a vítima?\n");
    scanf("%c",&resp);
	getchar();
    if(resp == 'S'|| resp == 's')
        conta++;
    
    
    printf("\nEsteve no local do crime?\n");
    scanf("%c",&resp);
    getchar();
    if(resp == 'S'|| resp == 's')
        conta++;
    
    
    printf("\nMorava perto da vítima?\n");
    scanf("%c",&resp);
    getchar();
	if(resp == 'S'|| resp == 's')
        conta++;
    
    
    printf("\nDevia para a vítima?\n");
    scanf("%c",&resp);
    getchar();
    if(resp == 'S'|| resp == 's')
        conta++;
    
    printf("\nTrabalhou com a vitima?\n");
    scanf("%c",&resp);
    getchar();
	if(resp == 'S'|| resp == 's')
        conta++;
	
    
    if(conta < 2)
        printf("\nLiberado!");
  	else if( conta == 2)
  		printf("Suspeita!");
  	else if(conta < 5)
    	printf("Cúmplice!");
	else
		printf("Assassino!");
}

