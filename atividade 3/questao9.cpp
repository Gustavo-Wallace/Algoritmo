#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade, corOlhos, corCabelos, contador, maiorIdade, contadorEspecifico;
	float porcentagem;
	char sexo;
	idade=1;
	maiorIdade=0;
	
	while(idade>0){
		contador++;
		
		printf("Digite a idade do habitante %d:\n", contador);
		scanf("%d", &idade);
		
		if(idade>maiorIdade)
			maiorIdade=idade;
			
		if(idade>0){
			printf("Digite o sexo do habitante %d: M - Masculino e F - Feminino\n", contador);
			fflush(stdin);
			scanf("%c", &sexo);
			sexo=toupper(sexo);
			
			do{
				printf("Digite a cor dos olhos do habitante %d:\n1 - Azuis\n2 - Verdes\n3 - Castanhos\n4 - Pretos\n",contador);
				scanf("%d", &corOlhos);
				if(corOlhos<1 || corOlhos>4)
					printf("Cor de Olhos inválido");
			}while(corOlhos<1 || corOlhos>4);
			
			do{
				printf("Digite a cor natural dos cabelos do habitante %d:\n1 - Loiros\n2 - Castanhos\n3 - Pretos\n",contador);
				scanf("%d", &corCabelos);
				if(corCabelos<1 || corCabelos>3)
					printf("Cor de Cabelos inválido");
			}while(corCabelos<1 || corCabelos>3);
			
			if((idade>=18 && idade<=35) && sexo=='F' && corOlhos==2 && corCabelos==1);
				contadorEspecifico++;
			
		}
		system("cls");
	}
	
	porcentagem=(contadorEspecifico/contador)*100;
	printf("A maior idade dos habitande pesquisado é %d.\n",maiorIdade);
	printf("a porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos e que tem olhos verdes e cabelos loiros é %.1d%.",porcentagem);

	return 0;
}
	
	
	
	
	
	
