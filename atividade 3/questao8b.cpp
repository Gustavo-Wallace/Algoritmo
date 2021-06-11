#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int novoProduto;
	char produto[20];//, novoProduto;
	float precoAntigo, precoNovo;
	
	do{
		system("cls");
		
		printf("Digite o nome do produto:\n");
		scanf("%s", &produto);
		printf("Digite preço antigo de %s:\n",produto);
		scanf("%f", &precoAntigo);
		
		precoNovo=precoAntigo*1.1;
		
		system("cls");
		
		printf("Nome do Produto: %s\n", produto);
		printf("Novo Preço do produto: R$ %.2f\n\n", precoNovo);
		
		//printf("Deseja verificar outro produto?\nDigite S caso queira ou outra tecla para finalizar.");
		//scanf("%c", &novoProduto);
		//novoProduto=toupper(novoProduto);
	//}while(novoProduto=='S');
	
		printf("Deseja verificar outro produto?\nDigite 1 caso queira ou outro número para finalizar.\n");
		scanf("%d", &novoProduto);
	}while(novoProduto==1);
	
	return 0;
}
