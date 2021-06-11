#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	float nota,notaF,notaM,mediaM,mediaF;
	int contador,contadorM,contadorF;
	contador=1;
	contadorM=0;
	contadorF=0;
	notaM=0;
	notaF=0;
	
	while(nota>=0){
		do{
			printf("Digite o sexo do aluno número %d: (F - Feminino ou M - Masculino)\n",contador);
			fflush(stdin);
			scanf("%c", &sexo);
			sexo=toupper(sexo);
			if(sexo!='M' && sexo!='F')
				printf("Sexo inválido\n");
		}while(sexo!='M' && sexo!='F');
		
		do{
		printf("Digite a nota do aluno numero %d:\n",contador);
		scanf("%f", &nota);
		if(nota>10)
			printf("Nota Inválida\n");
		}while(nota>10);
		
		if(sexo=='M' && nota>=0){
			contadorM++;
			notaM+=nota;
		}
			else if(sexo=='F' && nota>=0){
				contadorF++;
				notaF+=nota;
			}
		
		contador++;
		system("cls");
	}
	
	mediaM=notaM/contadorM;
	mediaF=notaF/contadorF;
	
	printf("A média da nota dos alunos é igual a %.1f.\n",mediaM);
	printf("A média da nota das alunas é igual a %.1f.\n",mediaF);
	
	return 0;
}
