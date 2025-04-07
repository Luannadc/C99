#include <stdio.h>
int main(){
  int nota1, nota2, nota3;
  float media;
  printf("Digite a primeira nota:\n");
  scanf("%d", &nota1);
  printf("Digite a segunda nota:\n");
  scanf("%d", &nota2);
  printf("Digite a terceira nota:\n");
  scanf("%d", &nota3);
  media = ((nota1 + nota2 + nota3) / 3.0);
  printf("media = %.2f\n", media);
  if(media > 8){
      printf("Aprovado\n");
  }else{
      printf("Reprovado\n");
  }
  return 0;
}
// calculo da media de 3 notas e aprovaçao/reprovaçao do aluno
// media > 8 = aprovado, media <= 8 = reprovado