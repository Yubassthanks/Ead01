/*9. O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da 
tabelinha, que j� � um sucesso na sua loja de 1,99. Voc� foi contratado para desenvolver o programa que 
monta a tabela de pre�os de p�es, de 1 at� 50 p�es, a partir do pre�o do p�o informado pelo usu�rio, 
conforme o exemplo abaixo:
Pre�o do p�o: R$ 0.18
Panificadora P�o de Ontem - Tabela de pre�os
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
	
	printf("Panificadora P�o de Ontem - Tabela de pre�os\n");
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
	



