#include <stdio.h>
int main(){
    int idade;
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    if(idade > 30){
        printf("Senior\n");
    }else if (idade > 16 || idade < 30){
        printf("Adulto\n");
    }else if (idade > 11 || idade < 15){
        printf("Adolescente\n");
    }else if(idade > 8 || idade < 10){
        printf("Juvenil\n");
    }else if(idade > 5 || idade < 7){
        printf("Infantil\n");
    }
    return 0;
}
// programa que recebe a idade de um nadador e imprime a sua categoria