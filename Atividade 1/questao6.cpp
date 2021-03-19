#include<stdio.h>
int main(){
	double a,b,media;
	printf("Digite a primeira nota: ");
	scanf("%lf", &a);
	printf("Digite a segunda nota: ");
	scanf("%lf", &b);
	media=((a*3.5)+(b*7.5))/11;
	printf("\nA media das notas apresentadas e igual a %.1lf .\n",media);	
	return 0;
}
