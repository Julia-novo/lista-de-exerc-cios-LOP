#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;

    
    for (int i = 0; i < 10; i++) { //o for esta dando a condição para que o numero seja digitado
    printf("Digite o número %d:\n ", i + 1);
    scanf("%d", &numeros[i]);

    if (i == 0) {
  //if serve como um "se", então ele da uma condição a um acontecimento 
    maior = numeros[i];
    menor = numeros[i];
    } else {  //
    if (numeros[i] > maior) {
        //condição para numeros maiores
    maior = numeros[i];
     }
    if (numeros[i] < menor) {
    menor = numeros[i];
//condição para nmeros menores
    }
    }
    }

    printf("\nmaior valor digitado: %d\n", maior);
    printf("menor valor digitado: %d\n", menor);

    return 0;
}

