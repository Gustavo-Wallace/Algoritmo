#include<stdio.h>

int main(){
	
	int num;
	
	printf("Digite um valor para mostrar em modulo:\n");
	scanf("%d", &num);
	
	if(num<0)
		num=num*-1;
		
	printf("O modulo do valor apresentado e igual a %d",num);
	
	return 0;
}
