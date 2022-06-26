//Nome: Gustavo Wallace Macedo Santos		Matricula: UC20101940

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define MAX_JOGOS 2

int main(){
	
	int menu, semJogos=0;
	
	char nomePresidente[50], tamanhoNome, aux[120], procurarCidade[120];
	int contadorJogos=0, i, j, ordemAlfabetica;
	
	struct Jogo{
		int id;
		float valor;
		char cidade[120];
	};
	
	struct Jogo jogo[MAX_JOGOS];

	do{
		printf("Digite o nome do Presidente do CBF:\n");
		scanf("%[^\n]s", &nomePresidente);
		fflush(stdin);
		if(strlen(nomePresidente)<1 || strlen(nomePresidente)>50)
			printf("Nome do presidente invalido!\n");
	}while(strlen(nomePresidente)<1 || strlen(nomePresidente)>50);
	
	tamanhoNome=strlen(nomePresidente);
	
	for(i=0;i<tamanhoNome;i++){									//conversao do nome para as primeira letras ficarem maiusculas e as seguintes minusculas
		if(i == 0 || nomePresidente[i - 1] == ' '){
			nomePresidente[i] = toupper(nomePresidente[i]);
		}else{
			nomePresidente[i] = tolower(nomePresidente[i]);
		}
	}
	
	
	do{
		do{
			system("cls");
			printf("_________________________________\n");
			printf("1 - Cadastrar novo jogo\n");
			printf("2 - Jogos cadastrados\n");
			printf("3 - Consultar jogos em uma cidade\n");
			printf("4 - Finalizar programa\n");
			printf("_________________________________\n");
			printf("Digite a opcao desejada:\n");
			scanf("%d", &menu);
			fflush(stdin);
		}while(menu < 1 || menu > 4);
		
		switch(menu){
			case 1:
				system("cls");
				printf("Cadastro de um novo jogo\n");
				printf("__________________________________________________________\n");
				do{
					printf("Digite a identificacao do jogo:\n");
					scanf("%d", &jogo[contadorJogos].id);
					fflush(stdin);
					
					if(jogo[contadorJogos].id < 300 || jogo[contadorJogos].id > 10000)
						printf("Numero de identificacao invalido!\n");
						
					for(i=0;i<MAX_JOGOS;i++){									//verificacao caso o ID ja tenho sido utilizado
						if((i != contadorJogos) && (jogo[contadorJogos].id == jogo[i].id)){
							jogo[contadorJogos].id = 0;							//caso ele já estiver sendo utilizado o valor sera modificado para 0, assim nao passando na validacao
							printf("Numero de identificacao ja utilizado!\n");
						}
					}
					
				}while(jogo[contadorJogos].id < 300 || jogo[contadorJogos].id > 10000);
				
				printf("__________________________________________________________\n");
				do{
					printf("Digite o valor arrecadado pela venda de ingressos do jogo:\n");
					scanf("%f", &jogo[contadorJogos].valor);
					fflush(stdin);
					if(jogo[contadorJogos].valor < 1000 || jogo[contadorJogos].valor > 1000000)
						printf("Valor arrecadado invalido!\n");
				}while(jogo[contadorJogos].valor < 1000 || jogo[contadorJogos].valor > 1000000);
				
				printf("__________________________________________________________\n");
				do{
					printf("Digite o nome da cidade onde foi realizado o jogo:\n");
					scanf("%[^\n]s", &jogo[contadorJogos].cidade);
					fflush(stdin);
					if(strlen(jogo[contadorJogos].cidade)<1 || strlen(jogo[contadorJogos].cidade)>120)
						printf("Nome da cidade invalido!\n");
				}while(strlen(jogo[contadorJogos].cidade)<1 || strlen(jogo[contadorJogos].cidade)>120);
				
				printf("__________________________________________________________\n");
				
				contadorJogos = contadorJogos + 1;
				printf("Jogo cadastrado com sucesso!\n");
				system("pause");
			break;
			
			case 2:
				system("cls");
				
				printf("Presidente da CBF: ");
				for(i=0;i<tamanhoNome;i++){
					fflush(stdin);
					printf("%c",nomePresidente[i]);
				}
				printf("\nId do jogo\tValor arrecadado(R$)\tCidade\n");
				fflush(stdin);
				
				//for(i=0; i<=contadorJogos; i++){						//tentativa ordem alfabetica		
				//	for(j=i+1; j<=contadorJogos; j++){								
				//		ordemAlfabetica = strcmp(jogo[i].cidade,jogo[j].cidade);
				//		if(ordemAlfabetica>0){
				//			strcpy(aux,jogo[i].cidade);
				//			strcpy(jogo[i].cidade,jogo[j].cidade);
				//			strcpy(jogo[j].cidade,aux);
				//		}
				//	}
				//}
				
				for(i=0; i<contadorJogos; i++){
					printf("%d\t\t %.2f\t \t%s \n", jogo[i].id, jogo[i].valor , jogo[i].cidade);
					fflush(stdin);
				}
				
			system("pause");
			break;
			
			case 3:
				system("cls");
				fflush(stdin);
				printf("Digite o nome da cidade que deseja buscar: \n");
				scanf("%[^\n]s", procurarCidade);
				fflush(stdin);
				
				semJogos = 0;
				
				for(i=0; i<=contadorJogos; i++){
					if(strcmp(jogo[i].cidade, procurarCidade) == 0){
						printf("Cidade: %s\n", procurarCidade);
						printf("ID: %d\n", jogo[i].id);
						printf("Valor arrecadado: %.2f\n", jogo[i].valor);
						printf("_______________________________\n");
						semJogos=semJogos+1;
					}		
				}
				if(semJogos<1){
				printf("Nao ocorreu jogos na cidade %s\n", procurarCidade);
				}
				
			system("pause");	
			break;
				
			case 4:
				system("cls");
				printf("Fim do programa.\n");
				system("pause");
			break;
		}
		
	}while(menu!=4);
	
	return 0;
}
