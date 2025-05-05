#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale(LC_ALL,"");
   int i;
   for (i=1; i<=100; i++){
       //ele forma um laço de repetição (contagem), até o numero desejado
       printf("%d\n", i);
   }

    return 0;
    //pausa o programa
}
