#include <stdio.h>
int main(){
    float peso, altura, pesoideal;
    char sx;
    scanf("%f", &peso);
    scanf("%f", &altura);
    printf("Digite o sexo (M/F): \n");
    scanf("%c", &sx);
    if(sx == 'M'){
        pesoideal = (72.7 * altura) - 58;
    }else{
        pesoideal = (62,1 * altura) - 44,7;
    }
    printf("Peso ideal: %.2f\n", pesoideal);
    if(peso < pesoideal){
        printf("Abaixo do peso ideal\n");
    }else if(peso == pesoideal){
        printf("Peso ideal\n"); 
}else{
    printf("Acima do peso ideal\n");
    }
    return 0;   
}