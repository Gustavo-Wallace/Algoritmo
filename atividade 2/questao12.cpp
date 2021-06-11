#include<stdio.h>

int main(){
	int ddd;
	
	printf("Digite o DDD:\n");
	scanf("%d", &ddd);
	
	switch (ddd){
		case 61:
			printf("Esse DDD corresponde a Brasilia.");
		break;
		case 71:
			printf("Esse DDD corresponde a Salvador.");
		break;
		case 11:
			printf("Esse DDD corresponde a Sao Paulo.");
		break;
		case 21:
			printf("Esse DDD corresponde a Rio de Janeiro.");
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
