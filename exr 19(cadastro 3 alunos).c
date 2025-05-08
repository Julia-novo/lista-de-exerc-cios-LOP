#include <stdio.h> 

// guarda a varivael aluno e suas medias
typedef struct {
    char nome[15];   
    float media;
} 
Aluno;

int main() {
    Aluno alunos[3]; 
    //armazenamento de infromações de 3 alunos
    char nome_busca[15];
    int encontrado; 
    //verifica se o aluno foi encontrado
    char opcao; 
//opções do aluno

    
    for (int i = 0; i < 3; i++) {
        //cadastra os alunos
    
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome); 

       
        printf("Digite a média final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media); 
    }

    do {
        encontrado = 0; //começa o cadastro do novo aluno

        
        printf("Digite o nome do aluno para buscar: ");
        scanf("%14s", nome_busca); 

        //acha o nome do aluno
        for (int i = 0; i < 3; i++) {
            int igual = 1; 
            for (int j = 0; j < 15; j++) { //faz comparação com caracteres dos nomes
                if (alunos[i].nome[j] != nome_busca[j]) { 
                    //ve os caracteres diferentes
                    igual = 0; 
                    break; //faz uma pausa do loop
                }
            }
            if (igual) { 
                printf("Aluno encontrado:\n");
                printf("Nome: %s\n", alunos[i].nome);
                printf("Média: %.2f\n", alunos[i].media);
                encontrado = 1; 
                //mostra se o aluno foi achado
                break;
                // pausa
            }
        }

        //se o aluno não foi encontrado ele avisa
        if (!encontrado) {
            printf("Aluno não encontrado.\n");
        }

        //pergunta se o usuario quer informar mais alunos
        printf("Deseja buscar outro aluno? (s/n): ");
        scanf(" %c", &opcao);
    } while (opcao == 's' || opcao == 'S'); 
    //da continuidade as opções

    return 0; 
    // seu programa acabou
}