/*
Questão 06
Escreva um programa em C leia uma matriz Am×n com números inteiros do teclado
e então imprime os elementos com menor e maior frequência de ocorrência na matriz,
com 0 ≤ m, n ≤ 100.
*/

#include <stdio.h>

int main(){
  int m, n, num_menor_ocorrencia=0, num_maior_ocorrencia=0, menor, maior, contador = 0, contador2 = 0, min=0, max=100;

  do{
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
  }while(m>max || m<min);
  
  do{
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);
  }while(n>max || n<min);

  int matriz[m][n];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("Digite o número da linha %d e coluna %d: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  menor = 1;
  maior = 1;
  num_menor_ocorrencia = matriz[0][0];
  num_maior_ocorrencia = matriz[0][0];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      contador = 0;
      for(int k = 0; k < m; k++){
        for(int l = 0; l < n; l++){
          if(matriz[i][j] == matriz[k][l]){
            contador++;
          }
        }
      }
      if(contador <= menor){
        menor = contador;
        num_menor_ocorrencia = matriz[i][j];
      }
      if(contador >= maior){
        maior = contador;
        num_maior_ocorrencia = matriz[i][j];
      }
    }
  }

  printf("O menor número de maior ocorrência é %d com %d vezes, e o com maior ocorrência é %d com %d vezes\n", num_menor_ocorrencia, menor, num_maior_ocorrencia, maior);

  return 0;
}