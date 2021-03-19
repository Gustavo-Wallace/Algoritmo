#include<stdio.h>
int main(){
	double a,b,c,media;
	printf("Digite a primeira nota: ");
	scanf("%lf", &a);
	printf("Digite a segunda nota: ");
	scanf("%lf", &b);
	printf("Digite a terceira nota: ");
	scanf("%lf", &c);
	media=(a+b+c)/3;
	printf("\nA media das notas apresentadas e igual a %.1lf .\n",media);	
	return 0;
}
