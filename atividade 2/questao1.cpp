#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int velocidade;
	char placa[10];
	
	printf("Digite a placa do carro:\n");
	scanf("%s",&placa);
	printf("Digite a velocidade:\n");
	scanf("%d",&velocidade);
	
	if(velocidade>80)
		printf("\nSerá multado\n");
	
	return 0;
}
