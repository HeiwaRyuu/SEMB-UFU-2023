/*
Questão 07
Dada uma matriz de números reais Am×n, com 0 ≤ m, n ≤ 100, escreva um programa
em C que verifica se existem elementos repetidos em Am×n
*/

#include <stdio.h>

int checa_matriz(int m, int n, int matriz[m][n], int elemento_matriz){
  int count=0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(elemento_matriz == matriz[i][j]){
          count+=1;
      }
    }
  }
  if(count > 1){
    return 1;
  }
  else{
    return 0;   
  }
}

int main(){
  int m, n, contador = 0, min=0, max=100, exists=0, exists_duplicate=0;

  do{
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
  }while(m>max || m<min);
  
  do{
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);
  }while(n>max || n<min);

  int matriz[m][n], numeros_checados[m][n];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("Digite o número da linha %d e coluna %d: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      for(int k = 0; k < m; k++){
        for(int l = 0; l < n; l++){
          if(matriz[i][j] == matriz[k][l]){
            contador++;
          }
        }
      }
      numeros_checados[i][j]=matriz[i][j];
      exists = checa_matriz(m, n, numeros_checados, matriz[i][j]);
      if((contador > 1) && !exists){
        printf("O número %d se repete %d vezes\n", matriz[i][j], contador);
        exists_duplicate = 1;
      }
      contador = 0;
    }
  }
  
  if(exists_duplicate == 0){
      printf("Não há números repetidos na matriz!");
  }

  return 0;
}