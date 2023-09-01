/*
Questão 09
Dizemos que uma matriz quadrada de números inteiros distintos é um quadrado
mágico se a soma dos elementos de cada linha, a soma dos elementos de cada coluna
e a soma dos elementos da diagonal principal e secundária são todas iguais.
Dada uma matriz quadrada de números inteiros An×n, com 1 ≤ n ≤ 100, escreva um
programa em C que verifique se A é um quadrado mágico.
*/

#include <stdio.h>

struct quadrada_res{
    int quadrada;
    int soma;
};

struct quadrada_res checa_quadrado_magico(int n, int matriz[][n]){
    int soma_lina=0, soma_coluna=0, soma_diagonal_principal=0, soma_diagonal_secundaria=0, soma=0;
    struct quadrada_res quadrada_res_obj;
    
    for(int i = 0; i < n; i++){
        soma_lina = 0;
        soma_coluna = 0;
        for(int j = 0; j < n; j++){
            soma_lina += matriz[i][j];
            soma_coluna += matriz[j][i];
        }
        if(i == 0){
            soma = soma_lina;
            quadrada_res_obj.soma = soma;
        }
        if(soma_lina != soma || soma_coluna != soma){
            quadrada_res_obj.quadrada = 0;
        }
        soma_diagonal_principal += matriz[i][i];
        soma_diagonal_secundaria += matriz[i][n-i-1];
    }
    if (soma_diagonal_principal != soma || soma_diagonal_secundaria != soma){
        quadrada_res_obj.quadrada = 0;
    }
    else{
        quadrada_res_obj.quadrada = 1;
    }
    return quadrada_res_obj;
}

int main(){
  int n, min=1, max=100, exists=0, exists_duplicate=0;
  struct quadrada_res quadrada_res_obj;

  do{
    printf("Digite o número de linhas e colunas da matriz quadrada NxN: ");
    scanf("%d", &n);
  }while(n>max || n<min);
  
  int matriz[n][n];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Digite o número da linha %d e coluna %d: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  quadrada_res_obj = checa_quadrado_magico(n, matriz);

  if(quadrada_res_obj.quadrada == 1){
      printf("A matriz é um quadrado mágico de soma %d\n", quadrada_res_obj.soma);
  }
  else{
      printf("A matriz não é um quadrado mágico\n");
  }

    return 0;
}