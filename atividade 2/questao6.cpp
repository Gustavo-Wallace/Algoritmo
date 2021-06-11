#include<stdio.h>

int main(){
	
	int num,resto;
	
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	resto=num%2;
	
	if(resto==0)
		printf("O numero apresentado e par.");
		else printf("o numero apresentado e impar.");
	
	return 0;
}
