#include<stdio.h>

int main(){
	
	int num1,num2,num3;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &num1);// 60
	printf("Digite o segundo valor:\n");
	scanf("%d", &num2);// 40
	printf("Digite o terceiro valor:\n");
	scanf("%d", &num3);// 50
	
	if(num1<num2 && num1<num3)//false
		printf("\nO menor valor entre os apresentados e %d",num1);
		else if(num2<num1 && num2<num3)//true
			printf("\nO menor valor entre os apresentados e %d",num2);//saida
			else if(num3<num1 && num3<num2)
				printf("\nO menor valor entre os apresentados e %d",num3);
	
	return 0;
}
