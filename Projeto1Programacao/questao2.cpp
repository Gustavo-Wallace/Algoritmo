#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	char razaoSocial[50], nomeCompleto[50], endereco[50];
	
	printf("DADOS DO CREDENCIADO\n");
	printf("Razao Social e Nome Completo:\n");
	scanf("%[^\n]s",&razaoSocial);
	scanf("%[^\n]s",&nomeCompleto);
	printf("Endereço:\n");
	scanf("%[^\n]s",&endereco);
	return 0;
}
