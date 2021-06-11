#include<stdio.h>

int main(){
	int num, fatorial, contador;
	fatorial=1;
	contador=0;
	
	printf("Digite o numero que deseja calcular o fatorial:\n");
	scanf("%d", &num);
	
	while(contador<num){
		fatorial=fatorial*(num-contador);
		contador=contador+1;
	}
	
	printf("O fatorial do numero apresentado e igual a %d.",fatorial);
	
	return 0;
}
