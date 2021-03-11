//*Problemas:
//* Objetivo: Contruir um programa em C para rateio de contas
// Entrada: Valor da conta / Quantidade de pessoas que vão dividir a conta
//Saida: Valor que cada um terá que pagar

#include <stdio.h>
#include <stdlib.h>

int main(){
    
  int qtdspessoas;
  float aluguel, rateio;
  
  printf("Valor da conta: ");
  scanf("%f",&aluguel);

  printf("Quantidade de pessoas que vao dividir a conta: ");
  scanf("%d",&qtdspessoas);

  rateio = aluguel / qtdspessoas;  
  
  printf("Valor que cada um terá que pagar: %.2f.\n\n\n", rateio);

  return 0;
}