#include<stdio.h>
#include<ctype.h>

int main(){
	
	char sexo, nome[30];
	float peso, altura;
	
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	printf("\nDigite o seu sexo:\nM - Masculino\nF - Feminino\n");
	scanf("%s", &sexo);
	sexo=toupper(sexo);
	printf("\nDigite a sua altura:\n");
	scanf("%f", &altura);
	
	if(sexo=='M'){
		peso=(72.5*altura)-58;
		printf("\nIlmo. Sr %s seu peso ideal e %.2f Kg.",nome,peso);
		}else if(sexo=='F'){
		peso=(62.1*altura)-44.7;
		printf("\nIlmo. Sra %s seu peso ideal e %.2f Kg.",nome,peso);
	}
	
	return 0;
}
