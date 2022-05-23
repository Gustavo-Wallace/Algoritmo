#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	char nome[50];
	int i=0, tamanhoNome=0, espaco=0;
	
	printf("Digite o seu nome: ");
	scanf("%[^\n]s",&nome);
		
	tamanhoNome=strlen(nome);
	
	printf("%s",nome);
	printf("\n%d",tamanhoNome);
	
	for(i=0;i<tamanhoNome;tamanhoNome++){
		if(nome[i]==' '){
			espaco = i;
		}
	}
	
	printf("\n%d",espaco);
	
	for(i=espaco+1;i<tamanhoNome;i++){
		printf("%c", toupper(nome[i]));
	}
	
	printf(",");
	
	for(i=0;i<espaco;i++){
		if(i==0){
		printf("%c", toupper(nome[i]));
		}else{
		printf("%c", tolower(nome[i]));
		}
	}
	
	return 0;
}
