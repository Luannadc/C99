#include <stdio.h>
int main(){
    float salario, nvsalario, diferenca;
    int cod, percent;
    scanf("%f", &salario);
    scanf("%d", &cod);
    if(cod == 101){
        percent = 10; 
    }else if(cod == 102){
        percent = 20;
    }else if(cod == 103){
        percent = 30;
    }else{
        percent = 40;
    }
    nvsalario = salario + (salario * percent/100);
    diferenca = nvsalario - salario;
    printf("salario antigo = %.2lf\n", salario);
    printf("novo salario = %.2lf\n", nvsalario);
    printf("diferenca = %.2lf\n", diferenca);
}
//aumento de salario de uma empresa de acordo com o codigo do funcionario