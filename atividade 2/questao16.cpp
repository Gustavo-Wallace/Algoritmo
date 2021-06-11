#include<stdio.h>

int main(){
	char nome1[20],nome2[20],nome3[20];
	float altura1,altura2,altura3;
	
	printf("Digite o nome da primeira pessoa:\n");
	scanf("%s", &nome1);
	printf("Digite a altura de %s:\n",nome1);
	scanf("%f", &altura1);
	printf("Digite o nome da segunda pessoa:\n");
	scanf("%s", &nome2);
	printf("Digite a altura de %s:\n",nome2);
	scanf("%f", &altura2);
	printf("Digite o nome da terceira pessoa:\n");
	scanf("%s", &nome3);
	printf("Digite a altura de %s:\n",nome3);
	scanf("%f", &altura3);
	
	if(altura1<altura2 && altura1<altura3)
		printf("%s e a menor pessoa entre os apresentados com %.2fm de altura.",nome1,altura1);
		else if(altura2<altura1 && altura2<altura3)
			printf("%s e a menor pessoa entre os apresentados com %.2fm de altura.",nome2,altura2);
			else if(altura3<altura1 && altura3<altura2)
				printf("%s e a menor pessoa entre os apresentados com %.2fm de altura.",nome3,altura3);
				else if(altura1==altura2 && altura1<altura3)
					printf("%s e %s sao as menores pessoas entre os apresentados com %.2fm de altura.",nome1,nome2,altura1);
					else if(altura1==altura3 && altura1<altura2)
						printf("%s e %s sao as menores pessoas entre os apresentados com %.2fm de altura.",nome1,nome3,altura1);
						else if(altura2==altura3 && altura2<altura1)
							printf("%s e %s sao as menores pessoas entre os apresentados com %.2fm de altura.",nome2,nome3,altura2);
							else if(altura1==altura2 && altura1==altura3)
								printf("%s, %s e %s tem a mesma altura, com %.2fm de altura.",nome1,nome2,nome3,altura1);
							
	return 0;
}
