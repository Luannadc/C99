#include <stdio.h>
int main(){
 int maior, x1, x2, x3;
 printf("Digite 3 numeros diferentes:");
 scanf("%d %d %d", &x1, &x2, &x3);
 if(x1 > x2 || x1 > x3){
    maior = x1;
 }else if(x2 > x1 || x2 > x3){
     maior = x2;
 }else if(x3 > x1 || x3 > x2){
     maior = x3;
 }
 printf("O maior numero entre os 3 é: %d\n", maior);

    return 0;
}
// programa para identificar o maior numero entre 3 diferentes.