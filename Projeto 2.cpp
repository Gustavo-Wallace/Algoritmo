//Nome completo: Gustavo Wallace Macedo Santos		Matrícula: UC20101940		Curso: Ciências da Computação

#include<stdio.h> //biblioteca para printf e scanf
#include<locale.h> //biblioteca para acentuação de caracteres
#include<ctype.h> //biblioteca para o uso do toupper e tolower(conversão de caracter para maiúculo/minúsculo)
#include<string.h> //biblioteca para strlen e strcmp (comparação de string)
#include<stdlib.h> //biblioteca para a função de limpar a tela
#include<windows.h> // bilbioteca para mudança de cores no printf

enum DOS_COLORS{		// Função que identifica as cores
 preto, azul, verde, CYAN, vermelho, MAGENTA, castanho,
 cizento_claro, cizento_escuro, azul_claro, verde_claro, CYAN_claro,
 vermelho_claro, MAGENTA_claro, amarelo, branco
};

void textcolor(int iColor){		//Função que permite a utilização das cores
 HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
 CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
 BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
 bufferInfo.wAttributes &= 0x00F0;
 SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	char nomeDestino[30], disponibilidade[25][8];
	int menu, quantAssentos, assentos[25][8], linha, coluna, contador;
	int idade, assentoReserva, contadorDisponivel, contadorReservado, contadorConfirmado;
	int id, idMatriz[25][8], idConfirmacao;
	float valorPassagem, valorTotal;

	linha=0;
	coluna=0;
	contador=0;
	contadorDisponivel=0;
	contadorReservado=0;
	contadorConfirmado=0;
	valorTotal=0;
	id=0;

	printf("Sistema Sulamar Linhas Aéreas\n");
	do{//validação do nome do destino
	    printf("________________________________\n");
		printf("Digite o nome do destino do voo:\n");
	    fgets(nomeDestino, 30, stdin);
	    fflush(stdin); 
	    if (strlen(nomeDestino)<2)	
	    	printf("Nome do destino inválido!!\n");
	}while(strlen(nomeDestino)<2);

	do{//validação da quantidade de assentos
		printf("______________________________________________________\n");
		printf("Digite a quantidade de assentos disponíveis nesse voo:\n");
		scanf("%d", &quantAssentos);
		fflush(stdin);
		if(quantAssentos<90 || quantAssentos>200)
			printf("Quantidade de assentos inválida.\n");
	}while(quantAssentos<90 || quantAssentos>200);

	for (linha=0;linha<25;linha++){//estrutura para que todos os assentos fiquem disponiveis
       for (coluna=0;coluna<8;coluna++){
			contador++;
			assentos[linha][coluna]=contador;
            if (assentos[linha][coluna] <= quantAssentos)
				disponibilidade[linha][coluna] = 'D';
        }
	}

	do{//validação do valor da passagem
		printf("_____________________________________\n");
		printf("Digite o valor da passagem desse voo:\n");
		scanf("%f", &valorPassagem);
		fflush(stdin);
		if(valorPassagem<1)
			printf("Valor da passagem inválido.\n Tente novamente:\n");
	}while(valorPassagem<1);

	do{
		do{// interface para escolha
			system("cls");
			printf("_________________________________\n");
	        printf("1 - Verificar lugares disponíveis\n");
	        printf("2 - Fazer uma reserva\n");
	        printf("3 - Cofirmar uma reserva\n");
	        printf("4 - Realizar um cancelamento\n");
	        printf("5 - Gerar relatório do voo\n");
	        printf("6 - Finalizar programa\n");
	        printf("_______________________________\n");
	        printf("Digite o que você deseja fazer:\n");
	        scanf("%d", &menu);
	        if(menu < 1 || menu > 6)
	        	printf("Opção inválida!!\n");
	    }while(menu < 1 || menu > 6);
	
		switch(menu){
		case 1:
			system("cls");
			printf("Mapa do Avião de disponibilidade\n");
			printf("________________________________\n");
			textcolor(verde);// utilização da função de mudança de cor
	        printf("D - Disponível\n");
	    	textcolor(vermelho);
	        printf("R - Reservado\n");
	        textcolor(azul);
	        printf("C - Confirmado\n");
	        textcolor(branco);
			printf("________________________________\n");
	        
	    	for(linha=0;linha<25;linha++){//matriz para o mapa de assentos
	        	for(coluna=0;coluna<8;coluna++){
		            if(assentos[linha][coluna]<=contador && (disponibilidade[linha][coluna]=='D' || disponibilidade[linha][coluna]=='R' || disponibilidade[linha][coluna]=='C')){
		                if(disponibilidade[linha][coluna]=='D'){
		                    textcolor(verde);
		                    printf("%.3d %c", assentos[linha][coluna], disponibilidade[linha][coluna]);
							}else if(disponibilidade[linha][coluna]=='R'){
		                    	textcolor(vermelho);
		                    	printf("%.3d %c", assentos[linha][coluna], disponibilidade[linha][coluna]);
		                		}else if(disponibilidade[linha][coluna]=='C'){
		                    		textcolor(azul);
				                   	printf("%.3d %c", assentos[linha][coluna], disponibilidade[linha][coluna]);
	                			}
	                printf("| ");
	            	}
	            }
	        printf("\n");
	        }
	        textcolor(branco);
	        system("pause");
	    break;
	    
		case 2:
			system("cls");
			id++;
			do{// validação para reserva
			    textcolor(branco);
			    printf("_______________________________\n");
		        printf("Digite o assento dessa reserva:\n");
		        scanf("%d", &assentoReserva);
		        fflush(stdin);
		        if(assentoReserva<1 || assentoReserva>quantAssentos)
		        	printf("Assento inválido!!\n");
	        }while(assentoReserva<1 || assentoReserva>quantAssentos);
	        
	        do{//validação para idade do ocupante
	        	printf("___________________________\n");
	        	printf("Digite a idade do ocupante:\n");
	        	scanf("%d", &idade);
	        	fflush(stdin);
	        	if(idade<0 || idade>125)
	        		printf("Idade inválida!!\n");
			}while(idade<0 || idade>125);
			
			if(idade<=5)//calculo para valor total
				valorTotal+=valorPassagem/2;
				else
					valorTotal+=valorPassagem;
				
			//matriz para conversão de disponivel para reservado
	        for(linha=0;linha<25;linha++){
	        	for(coluna=0;coluna<8;coluna++){
	            	if(assentos[linha][coluna]==assentoReserva){
	                	disponibilidade[linha][coluna]='R';
	                	idMatriz[linha][coluna]=id;
	                } 
	            }       
	        }
	        printf("________________________\n");
	        printf("O ID dessa reserva é %d.\n",id);
	        system("pause");
	    break;
	    
		case 3:
			system("cls");
			if(id>0){
				do{//validação de id para confirmar a reserva
					printf("___________________________________________________\n");
					printf("Digite o ID da reserva para realizar a confirmação:\n");
					scanf("%d", &idConfirmacao);
					fflush(stdin);
						if(idConfirmacao>id)
							printf("ID não existente!!\n");
				}while(idConfirmacao>id);
				// matriz para conversão de reservado para confirmado
			    for(linha=0;linha<25;linha++){
		            for(coluna=0;coluna<8;coluna++){
		                if(idMatriz[linha][coluna]==idConfirmacao && disponibilidade[linha][coluna]=='R'){
		                    disponibilidade[linha][coluna]='C';
		                } 
		            }       
		        }
			printf("Reserva confirmada com sucesso\n");
			} else
				printf("Não tem nenhum assento reservado para confirmar!\n");
			system("pause");
		break;
		
		case 4:
			system("cls");
			if(id>0){
			do{//validação de if para cancelamento
				printf("____________________________________________________\n");
				printf("Digite o ID da reserva para realizar o cancelamento:\n");
				scanf("%d", &idConfirmacao);
				fflush(stdin);
					if(idConfirmacao>id)
						printf("ID não existente!!\n");
			}while(idConfirmacao>id);
			//matriz para conversão de reservado ou confirmado para disponivel
	        for(linha=0;linha<25;linha++){
	            for(coluna=0;coluna<8;coluna++){
	                if(idMatriz[linha][coluna]==idConfirmacao && (disponibilidade[linha][coluna]=='R' || disponibilidade[linha][coluna]=='C')){
	                    disponibilidade[linha][coluna]='D';
	                } 
	            }       
	        }
			printf("Reserva cancelada com sucesso\n");
			valorTotal=valorTotal-(valorPassagem/2);
			} else
				printf("Não tem nenhum assento reservado para cancelar!\n");
			system("pause");
		break;
		
		case 5:
			system("cls");
			for(linha=0;linha<25;linha++){//matriz para contabilizar o total de disponiveis, reservados e confirmados, para a geração do relatório
	        	for(coluna=0;coluna<8;coluna++){
		            if(assentos[linha][coluna]<=contador && (disponibilidade[linha][coluna]=='D' || disponibilidade[linha][coluna]=='R' || disponibilidade[linha][coluna]=='C')){
		                if(disponibilidade[linha][coluna]=='D')
							contadorDisponivel++;
							else if(disponibilidade[linha][coluna]=='R')
								contadorReservado++;
		                		else if(disponibilidade[linha][coluna]=='C'){
									contadorConfirmado++;
						}
					}
				}
			}
			// geração do relatório do voo
			nomeDestino[strcspn(nomeDestino,"\n")]=0;
			printf("________________________________________\n");
			printf("         Voo para %s\n\n",nomeDestino);
			printf("Preço da passagem    :	 R$ %.2f\n",valorPassagem);
			printf("Total de assentos    :	 %d\n", quantAssentos);
			printf("________________________________________\n");
			printf("Lugares disponíveis  :	 %d\n", contadorDisponivel);
			printf("Lugares reservados   :	 %d\n", contadorReservado);
			printf("Lugares confirmados  :	 %d\n", contadorConfirmado);
			printf("Valor Total          :	 R$ %.2f\n", valorTotal);
			printf("________________________________________\n");
			system("pause");
		break;
		
		case 6:// finalização do programa
			system("cls");
			printf("Fim do programa!\n     Adeus");
		break;
		}
		
	}while(menu!=6);
	
	return 0;
}
