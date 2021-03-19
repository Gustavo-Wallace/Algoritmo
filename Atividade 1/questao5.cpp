#include<stdio.h>
int main(){
	int metros,avulsos,rolos;
	printf("Digite o total de fios em metros a serem utilizados:\n");
	scanf("%d",&metros);
	rolos=metros/50;
	avulsos=metros%50;
	printf("Sera necessario adquirir %d rolos e %d metros avulsos.\n",rolos,avulsos);
	return 0;
}
