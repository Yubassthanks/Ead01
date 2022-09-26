/*10. O Sr. Manoel Joaquim expandiu seus negócios para além dos negócios de 1,99 e agora possui uma 
loja de conveniências. Faça um programa que implemente uma caixa registradora rudimentar. O programa 
deverá receber um número desconhecido de valores referentes aos preços das mercadorias. Um valor zero 
deve ser informado pelo operador para indicar o final da compra. O programa deve então mostrar o total da 
compra e perguntar o valor em dinheiro que o cliente forneceu, para então calcular e mostrar o valor do 
troco. Após esta operação, o programa deverá voltar ao ponto inicial, para registrar a próxima compra. A 
saída deve ser conforme o exemplo abaixo:
Lojas Tabajara
Produto 1: R$ 2.20
Produto 2: R$ 5.80
Produto 3: R$ 0
Total: R$ 9.00
Dinheiro: R$ 20.00
Troco: R$ 11.00
-------- ATÉ A PRÓXIMA ------
Lojas Tabajara
Produto 1: R$ 2.20*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float valor = 0, i, soma, dinheiro, troco;
	int produto;
	printf("Por favor indique quantos produtos você comprou. ");
	scanf("%d", &produto);
	for (i = 0 ; i < produto; i++){
		printf("Valor do produto [%1.f]: ", i);
		scanf("%f", &valor);
		soma = soma + valor;
	}
	printf("O valor final ficou de R$%.2f.", soma);
	while(dinheiro < soma){
		printf("\nInforme a quantia que irá pagar: ");
		scanf("%f", &dinheiro);
		printf("Digite um valor igual ou maior que a soma!");
		}
			troco = dinheiro - soma;
		printf("Seu troco é de R$%.2f", troco);
		}
		
