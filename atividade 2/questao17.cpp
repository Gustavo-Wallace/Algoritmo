#include<stdio.h>

int main(){
	char nome[20];
	int anoAtual, anoNascimento, anos,dias;
	
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	printf("Digite o seu ano de nascimento:\n");
	scanf("%d", &anoNascimento);
	printf("Digite o ano atual:\n");
	scanf("%d", &anoAtual);
	
	anos=anoAtual-anoNascimento;
	dias=anos*365;
	
	printf("Voce, %s, viveu aproximadamente %d dias.",nome,dias);
	
	return 0;
}
