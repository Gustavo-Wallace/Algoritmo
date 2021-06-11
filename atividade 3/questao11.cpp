#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char finalista1[30],finalista2[30],finalista3[30];
	int quantJuizes,contador, contador1,contador2,contador3, nota1,nota2,nota3;
	contador=1;
	contador1=0;
	contador2=0;
	contador3=0;
	
	printf("Digite o nome do primeiro finalista:\n");
	fgets(finalista1, 30, stdin);
	finalista1[strcspn(finalista1,"\n")]=0;
	
	printf("Digite o nome do segundo finalista:\n");
	fgets(finalista2, 30, stdin);
	finalista2[strcspn(finalista1,"\n")]=0;
	
	printf("Digite o nome do terceiro finalista:\n");
	fgets(finalista3, 30, stdin);
	finalista3[strcspn(finalista1,"\n")]=0;
	
	do{
	printf("Digite a quantidade de juizes para apuração:\n");
	scanf("%d", &quantJuizes);
		if(quantJuizes<1)
			printf("Quantidade inválida de juizes\n");
	}while(quantJuizes<1);
	

	for(contador=1;contador<=quantJuizes;contador++){
		system("cls");
		
		do{
		printf("Digite a nota do juiz numero %d para o primeiro finalista:\n",contador);
		scanf("%d", &nota1);
		fflush(stdin);
			if(nota1<0 || nota1>100)
				printf("Nota inválida\n");
		}while(nota1<0 || nota1>100);
		
		do{
		printf("Digite a nota do juiz numero %d para o segundo finalista:\n",contador);
		scanf("%d", &nota2);
		fflush(stdin);
			if(nota2<0 || nota2>100)
				printf("Nota inválida\n");
		}while(nota2<0 || nota2>100);
		
		do{
		printf("Digite a nota do juiz numero %d para o terceiro finalista:\n",contador);
		scanf("%d", &nota3);
		fflush(stdin);
			if(nota3<0 || nota3>100)
				printf("Nota inválida\n");
		}while(nota3<0 || nota3>100);
		
		contador1+=nota1;
		contador2+=nota2;
		contador3+=nota3;
		
		system("cls");
	}

	
	if(contador1>contador2 && contador1>contador3)
		printf("Vencedor: %s\n",finalista1);
		else if(contador2>contador1 && contador2>contador3)
			printf("Vencedor: %s\n",finalista2);
			else if(contador3>contador1 && contador3>contador2)
				printf("Vencedor: %s\n",finalista3);
				else if(contador1==contador2 && contador1>contador3)
					printf("Vencedores: %s e %s\n",finalista1,finalista2);
					else if(contador1==contador3 && contador1>contador2)
						printf("Vencedores: %s e %s\n",finalista1,finalista3);
						else if(contador2==contador3 && contador2>contador1)
							printf("Vencedores: %s e %s\n",finalista2,finalista3);
							else 
								printf("Empate triplo\n");
	
	printf("\nPontuação de %s: %d\n",finalista1,contador1);
	printf("Pontuação de %s: %d\n",finalista2,contador2);
	printf("Pontuação de %s: %d\n",finalista3,contador3);
	
	return 0;
}
