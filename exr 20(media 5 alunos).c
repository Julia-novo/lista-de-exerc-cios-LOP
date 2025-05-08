#include <stdio.h> 

int main() { 
    float media, soma = 0.0, media_geral; 
    //guarda as notas 
    
    for (int i = 0; i < 5; i++) {
        //constroi um looping de 5 alunos
       
        printf("Digite a média final do aluno %d:\n ", i + 1);
        
        scanf("%f", &media);
    
        soma += media;
    //mostra a conta que a máquina deve fazer
        
    }
    
    media_geral = soma / 5;
  //faz a conta da media final do aluno
    printf("Média geral da turma: %.1f\n\n", media_geral);
    return 0; 
    //termina o programa
}