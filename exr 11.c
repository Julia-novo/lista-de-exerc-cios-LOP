#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0, media;

    for (int i = 0; i < 10; i++) {
        //o for serve para informar ao programa que ele deve guardam 10 numeros 
        printf("digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10; //soma

    printf("\nnotas digitadas: ");
    for (int i = 0; i < 10; i++) {
        //esse for diz ao programa guardar as notas ja digitadas
        printf("%.1f ", notas[i]);
    }

    printf("\nmedia das notas: %.2f\n", media);

    return 0;
}


