#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    int numero;
    printf("digite um numero inteiro\n"); //o numero deve ser inteiro
    scanf("%d,",&numero);
    if (numero % 2 ==0){ 
        // o if é ultilizado para dar uma condição
        printf("seu numero é par");
    }
    else{
        // else verifica se a informação do if é verdadeira ou falsa
        printf("seu numero é impar");
    }
    
  return 0;
}