#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int inteiro = 21;
	//char string = "Diego";
	float real = 3.14;
	
	int *ptr_int;
	float *ptr_float;
	//char *ptr_int;

	ptr_int = &inteiro;
	ptr_float = &real;
	//ptr_string = &string;
	
	printf("Valor da variavel 'inteiro': %d\n", inteiro);
	printf("Endereco da variavel 'inteiro': %d\n\n", ptr_int);
	
	//printf("Valor da variavel 'string': %s\n", string);
	//printf("Endereco da variavel 'string': %s\n\n", ptr_string);
	
	printf("Valor da variavel 'real': %.2f\n", real);
	printf("Endereco da variavel 'real': %f\n\n", ptr_float);
}



