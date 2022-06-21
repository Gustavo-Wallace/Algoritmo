#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	struct dados_pessoa{
		char nome[20];
		int idade;
		float salario;
	};
	
	struct dados_pessoa pessoa;
	
	pessoa.nome[20] = "Gustavo Wallace";
	pessoa.idade = 20;
	pessoa.salario = 10.000;
	
	FILE *ptrArq;
	ptrArq = fopen("binario.bin","wb");
	
	if(ptrArq != NULL){
		printf("Arquivo criado com sucesso!\n");
	}else
		printf("\nErro:  O arquivo nao foi criado");
	}
	
	fwrite(pessoa.nome,sizeof(char),20,ptrArq);
	fwrite(pessoa.idade,sizeof(int),1,ptrArq);
	fwrite(pessoa.salario,sizeof(float),1,ptrArq);
	
	fclose(ptrArq);
	
	return 0;
}
