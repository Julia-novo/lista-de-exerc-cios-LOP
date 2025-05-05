#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale(LC_ALL,"");
  int opcao, numero, sinal;

    do {
    	// quer dizer "faça" esta dando uma ação a ser feita 
    printf("tabuada\n");
    printf("1- Digitar um número para a tabuada\n");
    printf("0- Sair\n");

    printf("Escolha uma opção:\n ");
    scanf("%d", &opcao);
switch (opcao) {
	//guarda todas as opções do usuário
    case 1:
    	//os cases servem literalmente como casos que informam ao programa oque ele terá que fazer
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("\nTabuada do %d:\n", numero);
for (sinal = 1; sinal <= 10; sinal++) {
	//for é "para isso", condição disso
    printf("%d x %d = %d\n", numero, sinal, numero * sinal);
}
    break;
    //uma pausa para a condição dada
    case 0:
    printf("obrigado!\n");
    
break;
    default:
    	//depois do printf ele volta no seu ciclo de repetição
    printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
    //se for verdadeiro ele repete, sendo falfo sua repetição se encerra

    return 0;
}
