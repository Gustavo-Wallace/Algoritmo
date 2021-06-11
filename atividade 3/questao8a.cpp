#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char produto[20];
	int quantProdutos, contador;
	float precoAntigo, precoNovo;
	contador=1;
	
	printf("Digite a quantidade de produtos que possui:\n");
	scanf("%d", &quantProdutos);
	
	for(contador=1; contador<=quantProdutos; contador++){
		system("cls");
		
		printf("Digite o nome do produto numero %d:\n", contador);
		scanf("%s", &produto);
		printf("Digite o preço antigo de %s:\n", produto);
		scanf("%f", &precoAntigo);
		
		precoNovo=precoAntigo*1.1;
		
		system("cls");
		
		printf("Nome do Produto: %s\n", produto);
		printf("Novo Preço do produto: R$ %.2f\n", precoNovo);
		
		system("pause");
	}
	return 0;
}
