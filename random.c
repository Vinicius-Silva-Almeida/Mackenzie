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

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,e;
	int elemento,indice;
	int vet[6]={4,12,6,8,3};
	int N = 6;
	elemento = 6;
	indice = busca_linear(vet , N , elemento);
	printf("O elemento %d está na posição %d\n",elemento,indice+1);
	
return 0;	
}
