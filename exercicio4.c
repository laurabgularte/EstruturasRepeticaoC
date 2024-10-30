#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  char nome[30], sexo;
  int i= 1, idade;
  while (i<=3){
  printf("Digite o nome: ");
  scanf("%s%*c", nome);
  printf("Digite o sexo:\n F - Feminino\n M - Masculino\n");
  scanf("%c", &sexo);
  printf("Digite a idade: ");
  scanf("%d", &idade);
  i++;
  if (sexo == 'M' && idade > 21){
  printf("Eh do sexo masculino e tem mais de 21 anos\n: %s %d", nome, idade);}
  else if(sexo == 'F') 
  printf("Eh do sexo feminino\n");
  else
  printf ("Nao tem mais de 21 anos");
  }

}
