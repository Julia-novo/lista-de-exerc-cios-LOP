#include <stdio.h>

struct Pessoa {
    //inicio da criação do agrupamento de variaveis
    char nome[50];
    int idade;
    float altura;
};

int main () {
   struct Pessoa pessoa1 = {"Luiza", 16, 1.66};
  //uma variavel que guarda mais variaveis que caracterizam a pessoa
   printf("nome;%s\n", pessoa1.nome);
   printf("idade:%d\n", pessoa1.idade);
   printf("altura; %.2f\n", pessoa1.altura);
   
   return 0;
//fim do codigo
}