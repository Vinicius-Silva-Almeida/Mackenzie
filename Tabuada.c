#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int tabuada(int v[],int n,int num){
	int a,mul;
	for (a=1;a<11;a++){
		mul = num*a;
		printf("%d x %d = %d\n",num,a,mul);
	}
	printf("Essa foi a tabuada do %d",num);
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num,n;
	int v[10];
	
	printf("Escolha um número para a tabuada : ");
	scanf("%d",&num);
	n = sizeof(v)/sizeof(v[0]);
	tabuada(v,n,num);
	
	
}
