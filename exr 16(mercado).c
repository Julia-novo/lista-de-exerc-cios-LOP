#include <stdio.h>

typedef struct { //esclarece as características dos produtos
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto produtos[5]; //faz um array dos produtos

    //for é ultilizado para cadastrar os produtos
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do produto %d:\n", i + 1);

        printf("Nome: \n");
        scanf("%49s", produtos[i].nome); 

        printf("Preço:\n ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade:\n ");
        scanf("%d", &produtos[i].quantidade);
    }

    printf("Totais dos produtos:\n");
    for (int i = 0; i < 5; i++) {
        float total = produtos[i].preco * produtos[i].quantidade; //float serve para ler e resolver o calculo do total da compra
        printf("Produto: %s, Total: %.2f\n", produtos[i].nome, total); //ele aumenta duas casas decimais
    }

    return 0;
}
