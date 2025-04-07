#include <stdio.h>
#include <string.h>
int main(){
  double valortotal, valorun;
  char cod[4];
  int qnt;
  printf("Digite o codigo do produto: \n");
  scanf("%s", &cod);
  printf("Digite a quantidade:\n");
  scanf("%d", &qnt);
  if  (strcmp (cod, "ABCD") == 0) {
      valorun = 5.30;
  }else if(strcmp (cod, "XYPK") == 0){
      valorun = 6.00;
  }else if(strcmp (cod, "KLMP") == 0){
      valorun = 3.20;
  }else if(strcmp (cod, "QRST") == 0){
      valorun = 2.50;
  }else{
      printf("Codigo invalido.\n");
      return 1;
  }
  valortotal =  qnt * valorun;
  printf("Preço total: %.2f\n", valortotal);
  return 0;
}