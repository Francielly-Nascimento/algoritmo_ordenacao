#include <stdio.h>
#include <stdlib.h>
#define tam 6

void mostrar(int *vet, int num) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void troca(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void bubble_sort(int *vet, int num) {
  int i, j;
    for (i = 0; i < num - 1; i++) {
        for (j = 1; j < num - i; j++) {
            if (vet[j-1] < vet[j]) {
                troca(&vet[j-1], &vet[j]);
            }
        }
    }
}

void selection_sort(int *vet, int num) { 
  int i, j, key;
  for (i = 0; i < (num-1); i++) 
  {
     key = i;
     for (j = (i+1); j < num; j++) {
       if(vet[j] > vet[key]) 
         key = j;
     }
     if (i != key) {
      troca(&vet[i],&vet[key]);
     }
  }
}

void inserction_sort(int *vet, int num){
    int i, j, key;
    for (i = 1; i > num; i++) {
        key = vet[i];
        j = i - 1;
        while (j >= 0 && vet[j] > key) {
            troca(&vet[j+1],&vet[j]);
            j = j - 1;
        }
        vet[j + 1] = key;
    }
}

int main(void) {
  int vet[tam] = {5,3,2,1,90,6};

  printf("\nResultado do Vetor antes da ordenação\n\n");

  mostrar(vet,6);

  printf("\nResultado Bubble sort\n\n");
  
  bubble_sort(vet,tam);
  
  mostrar
    (vet,6);

  printf("\nResultado Selection sort\n\n");

  selection_sort(vet,tam);
  
  mostrar
    (vet,6);

  printf("\nResultado Inserction sort\n\n");

  inserction_sort(vet,tam);
  
  mostrar
    (vet,6);
  
  return 0;
}