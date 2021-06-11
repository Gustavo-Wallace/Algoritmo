#include<stdio.h>

int main(){
	int ddd;
	
	printf("Digite o DDD:\n");//21
	scanf("%d", &ddd);
	
	switch (ddd){
		case 61://falso
			printf("Esse DDD corresponde a Brasilia.");
		break;
		case 71://falso
			printf("Esse DDD corresponde a Salvador.");
		break;
		case 11://falso
			printf("Esse DDD corresponde a Sao Paulo.");
		break;
		case 21://verdadeiro
			printf("Esse DDD corresponde a Rio de Janeiro.");//saida
		break;
		case 32:
			printf("Esse DDD corresponde a Juiz de Fora.");
		break;
		case 19:
			printf("Esse DDD corresponde a Campinas.");
		break;
		case 27:
			printf("Esse DDD corresponde a Vitoria.");
		break;
		case 31:
			printf("Esse DDD corresponde a Belo Horizonte.");
		break;
		default:
			printf("Cidade sem idendificacao.");
	}
	
	return 0;
}
