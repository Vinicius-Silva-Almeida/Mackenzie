#include <stdio.h>
#include <stdlib.h>

void interseccao(int A[], int B[], int na, int nb) {
  printf("Interseccao : { ");
  int i, j;
  for (i = 0; i < na; i++) {
    for (j = 0; j < nb; j++) {
      if (A[i] == B[j]) {
        printf("%d /", A[i]);
      }
    }
  }
  printf("}\n");
}
void leia_vetor(int v[],int n){
  for(int d =0; d<n;d++){
    printf("Digite um numero : ");
    scanf("%d",&v[d]);
  }
}
int main() {
  int A[5]; //Mudar o valor aqui caso vetor tenha mais que 5 de tamanho!
  int B[5]; //Mudar o valor aqui caso vetor tenha mais que 5 de tamanho!

  int na = sizeof(A) / sizeof(A[0]);
  int nb = sizeof(B) / sizeof(B[0]);

  printf("Vetor A \n ");
  leia_vetor(A,5); //Mudar o valor 5 caso mude o tamanho do vetor
  printf("Vetor B \n");
  leia_vetor(B,5); //Mudar o valor 5 caso mude o tamanho do vetor

  
  interseccao(A, B, na, nb);
  return 0;
}