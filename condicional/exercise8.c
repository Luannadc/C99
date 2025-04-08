#include <stdio.h>
#include <string.h>
int main(){
  char senha[10], nome[30], sexo[2];
  scanf("%s", senha);
  if(strcmp(senha, "RSRSRS") == 0){
      scanf("%s", nome);
      scanf("%s", sexo);
  }else{
      printf("ERRO! SENHA INVALIDA\n");
      return 1;
  }
 if (sexo[0] == 'F' || sexo[0] == 'f') {
        printf("Seja Bem Vinda, %s\n", nome);
    } else {
        printf("Seja Bem Vindo, %s\n", nome);
    }

    return 0;
}