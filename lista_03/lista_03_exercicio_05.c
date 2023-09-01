/*
Questão 05
Escreva um programa em C que leia duas sequências de números inteiros ordenados
em dois vetores v1 e v2. Suponha que o número máximo de elementos de cada
sequência é 50. O seu programa deve intercalar os valores dos dois vetores em um
terceiro vetor, mantendo os valores em ordem crescente.
*/

// EXEMPLO:
// Vetor 1: [-6,2,3,4,5,76]
// Vetor 2: [-23,0,4,5,7,38,49,101,234,337]
// Vetor 3: [-23,-6,0,2,3,4,4,5,5,7,38,49,76,101,234,337]

#include <stdio.h>

void swap(int* a, int* b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int dividir(int vetor[], int comeco, int fim)
{
    int pivot = vetor[fim];

    int i = (comeco - 1);

    for (int j = comeco; j <= fim - 1; j++) {

        if (vetor[j] < pivot) {

            i++;
            swap(&vetor[i], &vetor[j]);
        }
    }
    swap(&vetor[i + 1], &vetor[fim]);
    return (i + 1);
}


void quicksort_vetor(int vetor[], int comeco, int fim)
{
    if (comeco < fim) {

        int pi = dividir(vetor, comeco, fim);

        quicksort_vetor(vetor, comeco, pi - 1);
        quicksort_vetor(vetor, pi + 1, fim);
    }
}

void printa_vetor(int *vetor, int num_vetor, int tam_vetor)
{
    printf("\nVetor %d: [", num_vetor);
    
    for(int i = 0; i < tam_vetor; i++){
        if(i == tam_vetor-1){
            printf("%d]", vetor[i]);
        }
        else{
            printf("%d,", vetor[i]);
        }
    }
}


void fill_vetor(int *vetor1, int *vetor2, int *vetor3, int tam_1, int tam_2)
{
    int maior=0, menor=0;
    if(tam_1 > tam_2){
        maior = tam_1;
        menor = tam_2;
    }
    else
    {
        maior = tam_2;
        menor = tam_1;
    }
    
    for(int i=0; i<maior;i++)
    {
        if(i < tam_1){
            vetor3[i] = vetor1[i];
        }
        if(i < tam_2){
           vetor3[menor+i] = vetor2[i];
        }
    }
    
}


int main(){
  int n=0, m=0, contador = 0, max=50;

  do{
  printf("Digite o tamanho do vetor 1 (ate 50 valores): ");
  scanf("%d", &n);
  }while(n>50);
 
  do{
  printf("Digite o tamanho do vetor 2 (ate 50 valores): ");
  scanf("%d", &m);
  }while(m>50);

  int vetor1[max], vetor2[max], vetor3[2*max];

  for(int i = 0; i < n; i++){
    printf("Digite o %dº número do vetor 1: ", i+1);
    scanf("%d", &vetor1[i]);
  }

  for(int i = 0; i < m; i++){
    printf("Digite o %dº número do vetor 2: ", i+1);
    scanf("%d", &vetor2[i]);
  }

  fill_vetor(vetor1, vetor2, vetor3, n, m);
  quicksort_vetor(vetor1, 0, n-1);
  quicksort_vetor(vetor2, 0, m-1);
  quicksort_vetor(vetor3, 0, n+m-1);

  printa_vetor(vetor1, 1, n);
  printa_vetor(vetor2, 2, m);
  printa_vetor(vetor3, 3, m+n);


  return 0;
}