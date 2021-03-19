#include<stdio.h>
int main(){
	int a,b,resto,quociente;
	printf("Digite o primeiro numero:\n");
	scanf("%d",&a);
	printf("Digite o segundo numero:\n");
	scanf("%d",&b);
	resto=a%b;
	quociente=a/b;
	printf("O resto da divisao de %d por %d e %d.\n",a,b,resto);
	printf("O quociente da divisao de %d por %d e %d.\n",a,b,quociente);
	return 0;
}
