#include<stdio.h>

int main(){
	float notas[5], media, soma=0;
	int i=0;
	
	for(i=0;i<=4;i++){
		printf("Informe a nota %d: ",i+1);
		scanf("%f",&notas[i]);
		soma=soma+notas[i];
	}
	
	media=soma/5;
	
	printf("\nMedia da turma: %.1f",media);

	return 0;
}

//#include<stdio.h>
//
//int main(){
//	float notas[5], media;
//	
//	printf("Informe a nota 1: ");
//	scanf("%f",&notas[0]);
//	
//	printf("\nInforme a nota 2: ");
//	scanf("%f",&notas[1]);
//	
//	printf("\nInforme a nota 3: ");
//	scanf("%f",&notas[2]);
//	
//	printf("\nInforme a nota 4: ");
//	scanf("%f",&notas[3]);
//	
//	printf("\nInforme a nota 5: ");
//	scanf("%f",&notas[4]);
//	
//	media=(notas[0]+notas[1]+notas[2]+notas[3]+notas[4])/5;
//	
//	printf("\nMedia da turma: %.1f",media);
//	
//	return 0;
//}
