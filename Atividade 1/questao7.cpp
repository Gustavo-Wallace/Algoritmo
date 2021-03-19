#include<stdio.h>
int main(){
	char nome[50],sexo[1];
	int matricula,horas;
	double valor,salario;
	printf("Digite o nome do funcionario:\n");
	scanf("%s",&nome);
	printf("Digite o sexo do funcionário (F ou M):\n");
	scanf("%s",&sexo);
	printf("Digite a matricula do funcionario:\n");
	scanf("%d",&matricula);
	printf("Digite o numero de horas trabalhadas por esse funcionario:\n");
	scanf("%d",&horas);
	printf("Digite o valor que esse funcionario recebe por hora:\n");
	scanf("%lf",&valor);
	salario=horas*valor;
	printf("\nNome do funcionpario: %s\nSexo: %s",nome,sexo);
	printf("\nMatricula: %d",matricula);
	printf("\nHoras trabalhadas: %d\nValor por hora: R$%.2lf",horas,valor);
	printf("\nSalario: R$%.2lf",salario);
	return 0;
}
