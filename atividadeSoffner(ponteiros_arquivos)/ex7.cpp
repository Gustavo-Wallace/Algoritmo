#include <stdio.h>
#include <stdlib.h>

void troca(int *pa, int *pb){
	int t;
	t=*pa; *pa=*pb; *pb=t;
}

int main(){
	
	 int x[5] = {0, 1, 2, 3, 4};
	 
	 troca(x+1, x+4);
	 
	 for (int i=0; i<5; i++){
	 	printf("%d ", x[i]);
	 }
	 
	 return 0;
}

