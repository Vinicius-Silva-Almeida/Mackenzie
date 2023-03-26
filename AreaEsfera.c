#include<stdio.h>
#include<stdlib.h>

float areaEsfera(int r);

int main(){
	int r;
	
	printf("Qual o raio da esfera? : ");
	scanf("%d",&r);
	printf("A area da esfera e de %.1f",areaEsfera(r));
	
}
float areaEsfera(int r){
	float pi = 3.14;
	float v = 4.0/3.0 * pi* (r*r*r);
	return(v);
}
