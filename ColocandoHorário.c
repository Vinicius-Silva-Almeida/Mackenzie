#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int minuto(int,int);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int hr,min;
	int min1,min2;
	
	printf("Digite um hor�rio (hora e minuto) : ");
	scanf("%d:%d",&hr,&min);
	min1 = minuto(hr,min);
	
	printf("Digite um hor�rio (hora e minuto) : ");
	scanf("%d:%d",&hr,&min);
	min2 = minuto(hr,min);
	printf("A diferen�a entre os dois hor�rios � %d minutos",abs(min1-min2));
	
return 0;	
}
int minuto(int hr, int min){
	return( hr*60 + min);
}

