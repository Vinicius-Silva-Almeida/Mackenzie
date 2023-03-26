#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

int num_divisores(int num){
	int i;
	for(i=1;i<num;i++){
		if(num%i == 0){
			printf("%d é divisor de %d\n",i,num);
		}
	}
}

int primo(int num){
	int b=0,cont = 0;
	bool ver,fals;
	
	for(b=1;b<=num;b++){
		if (num%b ==0){
			cont++;
			printf("%d ",b);
		}
	} if(cont>2){
		printf("\nNão é primo :/\n");
		printf("False\n");
	}else if (cont ==2){
		printf("\nÉ primo!!\n");
		printf("True\n");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	int divi;
	printf("Me fale um número : ");
	scanf("%d",&num);
	
	num_divisores(num);
	primo(num);

return 0 ;
}
	
	
	
