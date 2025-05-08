#include<stdio.h>

int ft, n;
int main()
{
  printf("Digite um numero para descobrir seu fatorial\n");
  scanf("%d", &n) ;
  for(ft = 1; n > 1; n = n - 1)//aqui o for recebe as informações do que ele deve fazer com o numero digitado pelo usuario
  {//aqui ocorre a verificação se o numero é maior que 1
      ft = ft * n;//nesse passo o numero faz o proceso fatorial informado ao lado

  printf("\nO fatorial é %d", ft);

}
return 0;
  //fim do codigo   
}