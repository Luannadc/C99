#include <stdio.h>
int main(){
    int duracaoS, horas, min, seg;
    printf("Digite o temoi de duracao do evento em segundos:");
    scanf("%d", &duracaoS);
    horas = duracaoS / 3600;
    min = (duracaoS % 3600) / 60;
    seg = duracaoS % 60;
    printf("A duracao do evento e de %d horas, %d minutos e %d segundos.\n", horas, min, seg);
    return 0;
}
// o programa calcula a duracao de um evento dado em segundos e converte para horas, min e segundos.