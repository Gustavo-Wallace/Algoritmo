#include<stdio.h>
int main(){
	
	int valor1, valor2, valor3;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &valor1);
	printf("Digite o segundo valor:\n");
	scanf("%d", &valor2);
	printf("Digite o terceiro valor:\n");
	scanf("%d", &valor3);
	
	if((valor1<valor2+valor3)||(valor2<valor1+valor3)||(valor3<valor1+valor2))
		printf("Os valores apresentados nao constituem os lados de um triângulo.");
		else printf("Os valores apresentados constituem os lados de um triângulo um triângulo.");

	return 0;
}
