#include<stdio.h>

int main(){
	
	int num1, num2, diferenca;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &num1);
	printf("Digite o segundo valor:\n");
	scanf("%d", &num2);
	
	if(num1>num2)
		diferenca=num1-num2;
		else diferenca=num2-num1;
		
	printf("\nA diferenca do maior valor pelo menor apresentado e igual a %d",diferenca);
	
	return 0;
}
