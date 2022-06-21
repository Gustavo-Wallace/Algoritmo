#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int x = 2, y = 8, *p, *q;
	
	p = &x;
	q = &y;
	
	printf("Endereco de x: %d	Valor de x: %d\n",x,&x);
	printf("Valor de p: %d	Valor de *p: %d\n",p,*p);
	printf("Endereco de y: %d	Valor de y: %d\n",y,&y);
	printf("Valor de q: %d	Valor de *q: %d\n",q,*q);
	printf("Endereco de p: %d\n",&p);
	printf("Endereco de q: %d",&q);
	
	return 0;
}
