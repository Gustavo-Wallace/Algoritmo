#include<stdio.h>

int main(){
	int contador, num;
	contador=0;
	
	while(contador<=100 && num>=0){
		contador++;
		printf("Digite um numero: ");
		scanf("%d", &num);
	}
	
	printf("\n\nForam lidos um total de %d numeros.",contador);
	
	return 0;
}
