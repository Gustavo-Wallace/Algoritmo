#include <stdio.h>

int main() {
	int bifurcacao;
	char nome[50];
	char razao_social[50];
	char endereco[50];
	char numero[50];
	char complemento[50];
	char bairro[50];
	char cep[50];
	char estado[50];
	char cidade[50];
	char ddd_1[50];
	char linha_fixa[50];
	char ddd_2[50];
	char linha_movel[50];
	char cpf[50];
	char cnpj[50];
	char inscricao_estadual[50];
	char inscricao_municipal[50];
	char cnae[50];
	char nascimento[50];
	char desejo[50];
	char email[50];
	char responsavel[50];
	char linha_comercial[50];
	char data[50];
	
	char placa[50];
	char modelo[50];
	char ano[50];
	char cor[50];
	
	printf("Digite \"0\" se for uma pessoa fisica ou \"1\" se for juridica: ");
	scanf("%d",&bifurcacao);
	
	printf("Informe o nome: ");
	scanf("\n%[^\n]s",&nome);
	
	if(bifurcacao==1){
		printf("Informe a razao social: ");
		scanf("\n%[^\n]s",&razao_social);
	}

	printf("Informe o endereco: ");
	scanf("\n%[^\n]s",&endereco);
	
	printf("Informe o numero: ");
	scanf("\n%[^\n]s",&numero);
	
	printf("Informe o complemento: ");
	scanf("\n%[^\n]s",&complemento);
	
	printf("Informe o bairro: ");
	scanf("\n%[^\n]s",&bairro);
	
	printf("Informe o CEP: ");
	scanf("\n%[^\n]s",&cep);
	
	printf("Informe o estado: ");
	scanf("\n%[^\n]s",&estado);
	
	printf("Informe a cidade: ");
	scanf("\n%[^\n]s",&cidade);
	
	printf("Informe o DDD do telefone residencial ou comercial: ");
	scanf("\n%[^\n]s",&ddd_1);
	
	printf("Informe o telefone residencial ou comercial: ");
	scanf("\n%[^\n]s",&linha_fixa);
	
	printf("Informe o DDD do telefone celular: ");
	scanf("\n%[^\n]s",&ddd_2);
	
	printf("Informe o telefone celular: ");
	scanf("\n%[^\n]s",&linha_movel);
	
	printf("Informe o CPF: ");
	scanf("\n%[^\n]s",&cpf);
	
	if(bifurcacao==1){
		printf("Informe o CNPJ: ");
		scanf("\n%[^\n]s",&cnpj);
		
		printf("Informe a inscricao estadual: ");
		scanf("\n%[^\n]s",&inscricao_estadual);
		
		printf("Informe a inscricao municipal: ");
		scanf("\n%[^\n]s",&inscricao_municipal);
		
		printf("Informe o CNAE: ");
		scanf("\n%[^\n]s",&cnae);
	}
	
	printf("Informe a data de nascimento: ");
	scanf("\n%[^\n]s",&nascimento);
	
	printf("Informe se ha desejo de receber os proximos boletos por e-mail: ");
	scanf("\n%[^\n]s",&desejo);
	
	printf("Informe o email: ");
	scanf("\n%[^\n]s",&email);
	
	if(bifurcacao==1){
		printf("Informe o contato do responsavel: ");
		scanf("\n%[^\n]s",&responsavel);
	}
	
	printf("Informe o telefone comercial: ");
	scanf("\n%[^\n]s",&linha_comercial);
	
	printf("Informe a data: ");
	scanf("\n%[^\n]s",&data);
	
	printf("Informe a placa: ");
	scanf("\n%[^\n]s",&placa);
	
	printf("Informe o modelo: ");
	scanf("\n%[^\n]s",&modelo);
	
	printf("Informe o ano: ");
	scanf("\n%[^\n]s",&ano);
	
	printf("Informe a cor: ");
	scanf("\n%[^\n]s",&cor);
	
	printf("\nDADOS DO CREDENCIADO\n");
	printf("\nNome Completo: %s",nome);
	
	if(bifurcacao==1){
		printf("\nRazao Social: %s",razao_social);	
	}
	
	printf("\nEndereco: %s",endereco);
	printf("\nNumero: %s",numero);
	printf("\tComplemento: %s",complemento);
	printf("\tBairro: %s",bairro);
	printf("\nCEP: %s",cep);
	printf("\tEstado: %s",estado);
	printf("\tCidade: %s",cidade);
	printf("\nDDD: %s",ddd_1);
	printf("\tTelefone Residencial ou Comercial: %s",linha_fixa);
	printf("\tDDD: %s",ddd_2);
	printf("\tTelefone Celular: %s",linha_movel);
	printf("\nCPF: %s",cpf);
	
	if(bifurcacao==1){
		printf("\tCNPJ: %s",cnpj);
		printf("\nInsc. Estadual: %s",inscricao_estadual);
		printf("\tInsc. Municipal: %s",inscricao_municipal);
		printf("\nCNAE: %s",cnae);	
	}

	printf("\tData de Nascimento: %s",nascimento);
	printf("\tDesejar receber os proximos boletos por e-mail?: %s",desejo);
	printf("\nE-mail: %s",email);
	
	if(bifurcacao==1){
		printf("\nContato do Responsavel: %s",responsavel);
	}
	
	printf("\nTelefone Comercial: %s\n",data);
	
	printf("\nDADOS DO VEICULO\n");
	printf("\nPlaca: %s",placa);
	printf("\tModelo: %s",modelo);
	printf("\tAno: %s",ano);
	printf("\tCor: %s",cor);
	
	return 0;
}
