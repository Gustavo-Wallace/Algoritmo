#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char produto[20];
	float precoAntigo, precoNovo;
	precoAntigo=1;
	
	while(precoAntigo>0){
		system("cls");
		
		printf("Digite o nome do produto:\n");
		scanf("%s", &produto);
		printf("Digite preço antigo de %s: (Digite -1 para finalizar)\n",produto);
		scanf("%f", &precoAntigo);
		
		if(precoAntigo>0){
		precoNovo=precoAntigo*1.1;
		
		system("cls");
		
		if(precoAntigo>0)
		printf("Nome do Produto: %s\n", produto);
		printf("Novo Preço do produto: R$ %.2f\n\n", precoNovo);
		system("pause");
		}
	}
	return 0;
}
