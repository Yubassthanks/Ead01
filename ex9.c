/*9. O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da 
tabelinha, que já é um sucesso na sua loja de 1,99. Você foi contratado para desenvolver o programa que 
monta a tabela de preços de pães, de 1 até 50 pães, a partir do preço do pão informado pelo usuário, 
conforme o exemplo abaixo:
Preço do pão: R$ 0.18
Panificadora Pão de Ontem - Tabela de preços
1 - R$ 0.18
2 - R$ 0.36
...
50 - R$ 9.0*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float i = 1;
	int tab= 50;
	
	printf("Panificadora Pão de Ontem - Tabela de preços\n");
	;
	
	for (i > 1; i <=50; i++){
		if(i < 10)
			printf("Produto:  %1.f - R$%5.2f", i, 0.18 * i);
		else		
			printf("Produto: %1.f - R$%5.2f", i, 0.18 * i);
		if(tab == i){
			printf("\n");
			tab += 10;
		}else{
			printf("\t");
			}
		}
	}
	



