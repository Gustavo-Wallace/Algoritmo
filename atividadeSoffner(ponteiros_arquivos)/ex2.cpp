#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	FILE *binario;
	
	struct dados_pessoa{
		char nome[20] = "Diego";
		int idade = 20;
		float salario = 10000.00;
	};
	
	struct dados_pessoa pessoa;
	
	binario = fopen("binario.txt", "wb");
	fwrite(&pessoa, 1, sizeof(pessoa), binario);
	fclose(binario);
	
	return 0;
}
