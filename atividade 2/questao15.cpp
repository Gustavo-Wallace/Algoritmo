#include<stdio.h>

int main(){
	int horas;
	float valor;
	
	printf("Digite a quantidade de horas utilizadas de internet:\n");
	scanf("%d", &horas);
	
	if(horas>0 && horas<=20)
		printf("O valor a ser paga para a provedora e de R$30,00.");
		else if(horas>20){
		horas=horas-20;
		valor=(3*horas)+30;
		printf("O valor a ser paga para a provedora e de R$%.2f",valor);
	}
	
	return 0;
}
