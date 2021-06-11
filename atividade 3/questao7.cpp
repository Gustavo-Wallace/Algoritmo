#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu,abacaxi,maca,pera;
	abacaxi=0;
	maca=0;
	pera=0;
	
	do{
		
		do{
			printf("____________\n\n");
			printf("1 => ABACAXI\n");
			printf("2 => MAÇÃ\n");
			printf("3 => PÊRA\n");
			printf("____________\n\n");
			printf("Digite o codigo da fruta que deseja adicionar ao carrinho, ou 0 para finalizar:\n");
			printf("_______________________________________________________________________________\n");
			scanf("%d", &menu);
			if(menu>3 || menu<0)
				printf("Fruta nao disponivel\n");
		}while(menu>3 || menu<0);
		
		switch(menu){
			case 1:
				abacaxi=abacaxi+1;
			break;
			case 2:
				maca=maca+1;
			break;
			case 3:
				pera=pera+1;
			break;
		}
		system("cls");
		printf("Fruta adicionada\n");
	}while(menu>0 && menu<=3);
	
	system("cls");
	
	printf("Lista do total de frutas compradas:\n");
	printf("%d Abacaxis\n",abacaxi);
	printf("%d Maçãs\n",maca);	
	printf("%d Pêras\n",pera);
	
	return 0;
}
