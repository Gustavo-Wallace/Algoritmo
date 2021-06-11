#include<stdio.h>

int main(){
	double h, n, contador;
	h=0;
	
	printf("Sendo H = 1/1+1/2+1/3+ ... +1/N, digite o valor de N:\n");
	scanf("%lf", &n);
	
	for(contador=1;contador<=n;contador++){
		h=h+(1/contador);
	}
	
	printf("O resultador de H e igual a %.5lf",h);
	
	return 0;
}
