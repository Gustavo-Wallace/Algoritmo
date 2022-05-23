#include<stdio.h>

int main(){
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	switch(idade){
		case 1 ... 15:
		printf("Nao vota.");
		break;

		case 16 ... 17:
		printf("Voto opcional.");
		break;

		case 18 ... 64:
		if(idade==41)
			printf("Voce ganhou o premio 1!");
		else
			printf("Voto obrigatorio.");
		break;

		case 65 ... 999:
		if(idade==82)
			printf("Voce ganhou o premio 2!");
		else
			printf("Voto opcional.");
		break;
		
		default:
			printf("Nao nascido.");
			
	}
	
	return 0;
}
