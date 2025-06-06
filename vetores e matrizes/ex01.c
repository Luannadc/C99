#include <stdio.h>
 
int main() {
 int x[10];
 for(int i = 0; i < 10; i++){
     scanf("%d", &x[i]);
     if(x[i] <= 0){
         x[i] = 1;
     }
     printf("X[%d] = %d\n", i, x[i]);
 }
 
    return 0;
}
// programa que leia 10 valores inteiros e armazene-os em um vetor. Se o valor for menor ou igual a zero, deve ser armazenado o valor 1. Em seguida, imprimir o vetor.
// Exemplo de entrada: 0 1 2 -3 4 5 6 7 8 9
// Exemplo de saída: X[0] = 1, X[1] = 1, X[2] = 2, X[3] = 1, X[4] = 4, X[5] = 5, X[6] = 6, X[7] = 7, X[8] = 8, X[9] = 9