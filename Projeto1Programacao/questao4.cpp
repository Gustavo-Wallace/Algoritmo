#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	char nome[50];
	int i=0, tamanhoNome=0, espaco=0;
	
	printf("Digite o seu nome: \n");
	scanf("%[^\n]s",&nome);
		
	tamanhoNome=strlen(nome);
	
	for(i=0;i<tamanhoNome;i++){
		if(nome[i]==' '){
			espaco = i;
		}
	}
	
	
	for(i=espaco+1;i<tamanhoNome;i++){
		printf("%c", toupper(nome[i]));
	}
	
	printf(", ");
	
	for(i=0;i<tamanhoNome;i++){
		if(i == 0 || nome[i - 1] == ' '){
			nome[i] = toupper(nome[i]);
		}else{
			nome[i] = tolower(nome[i]);
		}
	}
	
	for(i=0;i<espaco;i++){
		if(isupper(nome[i])){
			printf("%c. ", nome[i]);
		}
	}
	
	return 0;
}
