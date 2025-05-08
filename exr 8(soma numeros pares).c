#include <stdio.h>

int main(){
    int i, resultado=0;
    for (i=1; i<=200; i++){//o for cria uma condição para os numeros 
        if(i%2==0){//o if verifica as informações verdadeiras e passa a frente
            resultado= resultado+i;
        }
    }
     printf ("A soma dos primeiros 100 números pares é %d", resultado);
    return 0;
    //encrerra o programa
}
