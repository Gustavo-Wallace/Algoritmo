#include<stdio.h>

int main(){
	int num1,num2,num3;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &num1);
	printf("Digite o segundo valor:\n");
	scanf("%d", &num2);
	printf("Digite o terceiro valor:\n");
	scanf("%d", &num3);
	
	if(num1<num2 && num1<num3)
		printf("O menor valor apresentado foi %d.",num1);
		else if(num2<num1 && num2<num3)
			printf("O menor valor apresentado foi %d.",num2);
			else if(num3<num1 && num3<num2)
				printf("O menor valor apresentado foi %d.",num3);
				else if(num1==num2 && num1<num3)
					printf("O menor valor apresentado foi %d.",num1);
					else if(num1==num3 && num1<num2)
						printf("O menor valor apresentado foi %d.",num1);
						else if(num2==num3 && num2<num1)
							printf("O menor valor apresentado foi %d.",num2);
							else if(num1==num2 && num1==num3)
								printf("O menor valor apresentado foi %d.",num1);
	
	return 0;
}
