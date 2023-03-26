#include <stdio.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  FILE*arquivo;

  arquivo = fopen("livros.txt","w");
  if (arquivo == NULL){
    printf("Erro ao abrir o arquivo!!");
    return -1;
  }
  
  int qtdlivros;
  printf("Informe quantos livros serão guardados : ");
  scanf("%d",&qtdlivros);
  char nome[30];
  char edicao[30];
  char editora[30];
  int ano;
  	
  	int i;
  	
  	for (i=0;i<qtdlivros;i++){
  		printf("Escreva os dados do livro : ");
  		scanf("%s%s%s%d",&nome,&edicao,&editora,&ano);
  		fprintf(arquivo,"%s".%s.%s.%d.",nome,edicao,editora,ano);
	  }

  	fclose(arquivo);
  	return 0;
  }
  


