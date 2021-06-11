#include<stdio.h>

int main(){
	int num,fator,contador;
	fator=1;
	
	printf("Digite um numero para calcular o fatorial:\n");
	scanf("%d", &num);
	
	for(contador=0;contador<num;contador++){
		fator=fator*(num-contador);
	}
	
	printf("O fatorial do numero apresentado e igual a %d", fator);
	
	return 0;
}
