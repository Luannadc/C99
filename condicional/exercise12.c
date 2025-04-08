#include <stdio.h>

int main() {
    float preco;
    int codigo;
    printf("Digite o preço do seu produto:\n");
    scanf("%f", &preco);
    printf("Digite o codigo do seu produto:\n");
    scanf("%d", &codigo);
    printf("Valor do produto: %.2f\n", preco);
    printf("Procedencia: ");
    switch(codigo){
        case 1: 
        printf("SUL\n");
        break;
        case 2:
        printf("NORTE\n");
        break;
        case 3:
        printf("LESTE\n");
        break;
        case 4:
        printf("OESTE\n");
        break;
        case 5:
        case 6:
        printf("NORDESTE\n");
        break;
        case 7:
        case 8:
        case 9:
        printf("SUDESTE\n");
        break;
        default: 
        if(codigo >= 10 && codigo <= 20){
            printf("CENTRO-OESTE\n");
        }else{
            printf("codigo invlalido\n");
        }
        break;
    }
    return 0;
}