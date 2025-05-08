#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0;

    for (int i = 0; i < 10; i++) { //o for será usado para repetir a pergunta 10 vezes (quantidade de numeros necessaria)
        printf("digite o número %d:\n ", i + 1);
        scanf("%d", &numeros[i]);
    if (numeros [i] % 2 == 0) { 
//verificação de quais numeros são pares
pares++;
}
}

    printf("\ntotal de numeros pares: %d\n", pares);

    return 0;
    //final do codigo
}

