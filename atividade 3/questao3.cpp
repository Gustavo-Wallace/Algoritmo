#include<stdio.h>

int main(){
	float altura,menorAltura;
	int contador;
	contador=1;
	menorAltura=99;
	
	while(contador<=10){
		
		printf("Digite a altura da pessoa numero %d:\n",contador);
		scanf("%f", &altura);
		
		if(altura<menorAltura)
			menorAltura=altura;
		
		contador=contador+1;
	}
	
	printf("A menor altura dentre as apresentadas e %.2f.",menorAltura);
	
	return 0;
}
