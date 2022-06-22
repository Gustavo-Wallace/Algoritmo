#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int inteiro = 21;
	char string[10] = "Diego";
	float real = 3.14;
		
	printf("Valor da variavel 'inteiro': %d\n", inteiro);
	printf("Endereco da variavel 'inteiro': %p\n\n", &inteiro);
	
	printf("Valor da variavel 'string': %s\n", string);
	printf("Endereco da variavel 'string': %p\n\n", &string);
	
	printf("Valor da variavel 'real': %.2f\n", real);
	printf("Endereco da variavel 'real': %p\n", &real);
	
	return 0;
}
