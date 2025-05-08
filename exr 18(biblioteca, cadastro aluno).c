#include <stdio.h> // Biblioteca

// mostra as caracteristicas do aluno
struct Aluno {
    char nome[50];  
    float nota1;    
    float nota2;    
    float nota3;    
};

int main() {
    struct Aluno aluno; // uma variavel dos dados dos alunos
    float media;
    
    printf("Digite o nome do aluno: "); 
    scanf("%s", aluno.nome); 
    

    printf("Digite a nota 1: ");
    scanf("%f", &aluno.nota1); 
  

   
    printf("Digite a nota 2: ");
    scanf("%f", &aluno.nota2); 
   

   
    printf("Digite a nota 3: ");
    scanf("%f", &aluno.nota3); 
    

    //média calcula a medias das notas dos alunos
    media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3; 
    //soma as 3 e divide por 3

    
    printf("Média do aluno %s é: %.2f\n", aluno.nome, media);

    // serve para ver se o aluno passou ou não 
    if (media >= 6.0) {
        printf("Aluno aprovado!\n"); 
        // se o aluno passar ele informa
    } else {
        printf("Aluno reprovado.\n"); 
        //o else passa se o aluno reprovar
    }

    return 0; 
    //fim do programa
}
