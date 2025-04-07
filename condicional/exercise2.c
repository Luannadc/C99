#include <stdio.h>
int main(){
    int idade, dias, meses, anos;
    printf("Digite sua idade em dias:", idade);
    scanf("%d", &idade);
    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;
    printf("idade %d anos, %d meses e %d dias\n", anos, meses, dias);
    return 0;
}
// This program calculates the age in years, months, and days from the input in days.
// It uses the formula: years = days / 365, months = (days % 365) / 30, days = (days % 365) % 30.       
