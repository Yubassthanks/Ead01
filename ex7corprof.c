#include <Stdio.h>
#include <locale.h>
//OUTRO EXEMPLO DE EXERCICIO 7

int main(){
	setlocale(LC_ALL, "Portuguese");
	int p1 = -1,p2 = -1,p3 = -1,p4 = -1,p5 = -1;
	
	
		while(p1 < 0 || p1 > 1){
			printf("Telefonou para a vítima? 0.não, 1.sim\n");
			scanf("%d", &p1);
		}
		while(p2 < 0 || p2 > 1){
			printf("Esteve no local do crime? 0.não, 1.sim\n");
			scanf("%d", &p2);
		}	
		while(p3 < 0 || p3 > 1){
			printf("Mora perto da vítima? 0.não, 1.sim\n");
			scanf("%d", &p3);
		}	
		while(p4 < 0 || p4 > 1){
			printf("Devia para a vítima? 0.não, 1.sim\n");
			scanf("%d", &p4);
		}	
		while(p5 < 0 || p5 > 1){
			printf("Já trabalhou com a vítima? 0.não, 1.sim\n");
			scanf("%d", &p5);
		}	
		int total = p1 + p2 + p3 + p4 + p5;
	
		if(total < 2)
			printf("\nLiberado!");
		else if( total < 3)
			printf("\nSuspeito!");
		else if( total < 5)
			printf("\nCúmplice!");
		else 
			printf("\nCriminoso!!!");	

}

