#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale(LC_ALL,"");
   int idade;
   printf("informe sua idade\n");
   scanf("%d",&idade);
if (idade<18 && idade>=16||idade>69){
    //primeira informação guardada
    printf("seu voto é facultativo");
}else if(idade < 16){
    printf("voce nao pode votar");
    // else if serve como um "então"
}else{
    printf("voce deve votar");
    //esse ultimo else garante que todas as informações passadas sejam lidas e conferidas 
}



    return 0;
    //concluiu o código
}