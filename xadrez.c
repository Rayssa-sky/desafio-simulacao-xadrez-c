#include <stdio.h>

int main(){

int casas_Torre = 5;
int casas_Bispo =5, contaBispo = 0;
int casas_Rainha = 8, contaRainha = 0;
int passos_vertical;
int passos_horizontal;

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

 //CAVALO: Movimento de 2 casas para Baixo e 1 para a Esquerda. ESTRUTURA: Usando o loop 'for' //
printf("Movimento do Cavalo\n");

for (passos_vertical = 0; passos_vertical < 2; passos_vertical++) {
        
        //  Imprime o passo vertical
        printf("Passo %d: Move para BAIXO\n", passos_vertical + 1);
        passos_horizontal = 1 - passos_vertical; 
        
        // Loop WHILE Aninhado: 1 Passo Horizontal (para a esquerda)
        while (passos_horizontal < 1) { 
            printf("Passo 3: Move para ESQUERDA\n");
            passos_horizontal++; 
        }
    }

    printf("--- Movimento do Cavalo Completo em 'L' ---\n");


  return 0;

}
