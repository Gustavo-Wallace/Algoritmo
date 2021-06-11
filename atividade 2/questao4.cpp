#include<stdio.h>
#include<ctype.h>

int main(){
	
	char sexo, nome[30];
	
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	printf("\nDigite o seu sexo:\nM - Masculino\nF - Feminino\n");
	scanf("%s", &sexo);
	sexo=toupper(sexo);
	
	if(sexo=='M')
		printf("\nIlmo. Sr %s",nome);
		else if(sexo=='F')
		printf("\nIlma. Sra %s",nome);
	
	return 0;
}
