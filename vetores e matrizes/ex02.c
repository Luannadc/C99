#include <stdio.h>

int main(){
    int x, N[10];
    scanf("%d", &x);
    N[0] = x;
    for(int i = 1; i < 10; i++){
        N[i] = N[i - 1] * 2;
    }
    for(int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
// programa que leia um valor inteiro X e construa um vetor N[10] de tal forma que N[i] = X * 2^i para i variando de 0 a 9. Em seguida, imprimir o vetor N.
// Exemplo de entrada: 2
// Exemplo de saída: N[0] = 2, N[1] = 4, N[2] = 8, N[3] = 16, N[4] = 32, N[5] = 64, N[6] = 128, N[7] = 256, N[8] = 512, N[9] = 1024