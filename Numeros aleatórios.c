#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>


int busca_linear(int vet[],int n, int e){
	int i;
	for(i=0;i<n;i++){
		if(e==vet[i]){
			return i;
		}
	}
	return -1;
}

int main(void){
	int i;
	int v[10],g,a;
	srand(time(NULL));
	for (i=0;i<10;i++){
		a = printf("%d ", rand()%101);
		int v[i]= a;
	}
	
return 0 ;
}
