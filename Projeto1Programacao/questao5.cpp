#include<stdio.h>

int soma(float num1, float num2);
int subtracao(float num1, float num2);
int multiplicacao(float num1, float num2);
int divisao(float num1, float num2);
int leValidaOperador(char op);

int main(){
	
	int continuar;
	float num1,num2,result;
	char op,validador;
	

	printf("---------------------\n");
	printf("Calculadora\n");
	printf("---------------------\n");
	printf("N1: ");
	scanf("%f", &num1);
	
	leValidaOperador(op);

	printf("\nN2: ");
	scanf("%f", &num2);
	printf("---------------------\n");
	
	switch(op){
		case '+':
			result=soma(num1,num2);
			printf("%.2f + %.2f = %.2f", num1,num2,result);
		break;
		case '-':
			result=subtracao(num1,num2);
			printf("%.2f - %.2f = %.2f", num1,num2,result);
		break;
		case '*':
			result=multiplicacao(num1,num2);
			printf("%.2f * %.2f = %.2f", num1,num2,result);
		break;
		case '/':
			result=divisao(num1,num2);
			printf("%.2f / %.2f = %.2f", num1,num2,result);
		break;
	}
	
	
	
	return 0;
}
int menu();

int leValidaOperador(char op){
	do{
	printf("\nOP: ");
	scanf(" %c", &op);
	}while(op!='+' && op!='-' && op!='/' && op!='*');
}

int soma(float num1, float num2){
   return(num1+num2);
}
int subtracao(float num1, float num2){
   return(num1-num2);
}
int multiplicacao(float num1, float num2){
   return(num1*num2);
}
int divisao(float num1, float num2){
   return(num1/num2);
}
