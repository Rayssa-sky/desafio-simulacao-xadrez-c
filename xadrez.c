#include <stdio.h>

int main(){

int casas_Torre = 5;
int casas_Bispo =5, contaBispo = 0;
int casas_Rainha = 8, contaRainha = 0;
int i;

 printf("Movimento da Torre\n");

 for(int i= 0; i < casas_Torre; i++  )
 {
    printf("Direita\n");
 }

 printf("Movimento do Bispo\n");

 while(contaBispo < casas_Bispo)
 {
     printf("Cima, Direita\n");
     contaBispo++;
 }
 
  printf("Movimento da Rainha\n");

  do{

    printf("Esquerda\n");
    contaRainha++;

  }while(contaRainha < casas_Rainha);


  return 0;

}