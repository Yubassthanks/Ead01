/*10. O Sr. Manoel Joaquim expandiu seus neg�cios para al�m dos neg�cios de 1,99 e agora possui uma 
loja de conveni�ncias. Fa�a um programa que implemente uma caixa registradora rudimentar. O programa 
dever� receber um n�mero desconhecido de valores referentes aos pre�os das mercadorias. Um valor zero 
deve ser informado pelo operador para indicar o final da compra. O programa deve ent�o mostrar o total da 
compra e perguntar o valor em dinheiro que o cliente forneceu, para ent�o calcular e mostrar o valor do 
troco. Ap�s esta opera��o, o programa dever� voltar ao ponto inicial, para registrar a pr�xima compra. A 
sa�da deve ser conforme o exemplo abaixo:
Lojas Tabajara
Produto 1: R$ 2.20
Produto 2: R$ 5.80
Produto 3: R$ 0
Total: R$ 9.00
Dinheiro: R$ 20.00
Troco: R$ 11.00
-------- AT� A PR�XIMA ------
Lojas Tabajara
Produto 1: R$ 2.20*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float valor = 0, i, soma, dinheiro, troco;
	int produto;
	printf("Por favor indique quantos produtos voc� comprou. ");
	scanf("%d", &produto);
	for (i = 0 ; i < produto; i++){
		printf("Valor do produto [%1.f]: ", i);
		scanf("%f", &valor);
		soma = soma + valor;
	}
	printf("O valor final ficou de R$%.2f.", soma);
	while(dinheiro < soma){
		printf("\nInforme a quantia que ir� pagar: ");
		scanf("%f", &dinheiro);
		printf("Digite um valor igual ou maior que a soma!");
		}
			troco = dinheiro - soma;
		printf("Seu troco � de R$%.2f", troco);
		}
		
