/*Fa�a um programa que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o:
"Telefonou para a v�tima?"
"Esteve no local do crime?""
"Mora perto da v�tima?"
"Devia para a v�tima?"
J� trabalhou com a v�tima?" O programa deve no final emitir 
uma classifica��o sobre a participa��o da pessoa no crime.
Se a pessoa responder positivamente a 2 quest�es ela deve 
ser classificada como "Suspeita", entre 3 e 4 como "C�mplice" 
e 5 como "Assassino". Caso contr�rio, ele ser� classificado 
como "Inocente".
'''*/
#include <stdio.h>
#include <locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
	char resp;
    int conta = 0;
    
    printf("Responda as perguntas com S para sim ou N para n�o.");
    
    printf("\nTelefonou para a v�tima?\n");
    scanf("%c",&resp);
	getchar();
    if(resp == 'S'|| resp == 's')
        conta++;
    
    
    printf("\nEsteve no local do crime?\n");
    scanf("%c",&resp);
    getchar();
    if(resp == 'S'|| resp == 's')
        conta++;
    
    
    printf("\nMorava perto da v�tima?\n");
    scanf("%c",&resp);
    getchar();
	if(resp == 'S'|| resp == 's')
        conta++;
    
    
    printf("\nDevia para a v�tima?\n");
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
    	printf("C�mplice!");
	else
		printf("Assassino!");
}

