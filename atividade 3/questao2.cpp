#include<stdio.h>

int main(){
	int num1,num2,contador,soma;
	soma=0;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &num2);
	
	for(contador=0;contador<num2;contador++){
		soma=soma+num1;
	}
	
	printf("A multiplicacao de %d por %d e igual a %d.",num1,num2,soma);
	
	return 0;
}


