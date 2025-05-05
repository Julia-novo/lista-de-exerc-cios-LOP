#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale(LC_ALL,"");
    float numero1 , numero2;
    printf("digite dois numeros\n");
    scanf("%f%f",&numero1,&numero2);
    //dois %f para guardar dois numeros 
    if (numero1>numero2){
    
        printf("o numero maior é %.2f",numero1);
    }
    else{
        printf("o numero maior é %.2f",numero2);
    }
    //o uso do if else é para verificação do maior numero
    return 0;
    //serve para terminar a função
}
    