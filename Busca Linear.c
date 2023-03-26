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
	int A[6]={4,12,6,8,3};
	int N = 6;
	elemento = 8;
	indice = busca_linear(A , N , elemento);
  if(indice == -1){
    printf("Numero nao encontrado! \n");
  }
  if(indice != -1){
    printf("O elemento %d está na posição %d\n",elemento,indice);
  }
	
	
return 0;	
}
