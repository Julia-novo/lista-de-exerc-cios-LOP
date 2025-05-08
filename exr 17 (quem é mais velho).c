#include <stdio.h>


typedef struct {
    //faz as caracteristicas das variaveis 
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa pessoa1, pessoa2;

    printf("Dados da primeira pessoa:\n");
    printf("Nome:\n ");
    scanf("%s", pessoa1.nome);
    printf("Idade:\n ");
    scanf("%d", &pessoa1.idade);


    printf("\nDados da segunda pessoa:\n");
    printf("Nome:\n ");
    scanf("%s", pessoa2.nome);
    printf("Idade:\n ");
    scanf("%d", &pessoa2.idade);


    if (pessoa1.idade > pessoa2.idade) {
        //avalia a condição
        printf("\n%s é mais velho(a) do que %s.\n", pessoa1.nome, pessoa2.nome);
    } else if (pessoa2.idade > pessoa1.idade) {
        //verifca as condições passadas e as separa
        printf("\n%s é mais velho(a) do que %s.\n", pessoa2.nome, pessoa1.nome);
    } else {
        //faz a separação final das caracteristicas das duas pessoas
        printf("\n%s e %s tem a mesma idade.\n", pessoa1.nome, pessoa2.nome);
    }

    return 0;
    //fim do codigo
}

