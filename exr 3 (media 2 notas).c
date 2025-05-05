#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale(LC_ALL,"");
   float nota1, nota2;
   printf("informe duas notas\n");
   scanf("%f%f",&nota1, &nota2);
   if (nota1+nota2/2  >=7){
       printf("você foi aprovado");
       //o if foi ultilizado para calcular a media de duas notas
   }
   else {
       printf("você foi reprovado");
       // else foi ultilizado para conferência do resultado
   }
   
    return 0;
    //concluiu o código
}