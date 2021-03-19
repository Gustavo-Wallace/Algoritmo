#include<stdio.h>
int main(){
	double raio,area;
	printf("Digite o raio do circulo: \n");
	scanf("%lf",&raio);
	area=3.14*(raio*raio);
	printf("A area do circulo cujo raio e %.1lf e igual a %.1lf.\n",raio,area);
	return 0;
}
