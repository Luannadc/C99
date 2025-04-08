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
// senho de acesso para o usuario, se a senha estiver correta, o programa deve pedir o nome e o sexo do usuario, devera imprimir "Seja Bem Vindo(a)" e o nome do usuario, se a senha estiver incorreta, o programa deve imprimir "ERRO! SENHA INVALIDA".