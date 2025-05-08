#include <stdio.h>

int main() {

 int menu, n1, n2;
 float res;
do {
// opção faça, portanto criou um menu com opções de escolha
printf("menu \n");
printf("1 - soma\n");
printf("2 - subtração\n");
printf("3 - sair\n");
scanf("%d", &menu);

switch (menu) { //switch para dar a opção de menu e cada case tem uma função
        case 1:
//case signifca um possivel caso do que pode acontecer ao escolher a opção dada no menu                
    printf("\nVocê escolheu soma\n");
    printf("digite o primeiro número:\n ");
    scanf("%d", &n1);
    printf("digite o segundo número:\n");
    scanf("%d", &n2);
    res = n1 + n2;
    printf("resultado: %.2f\n", res);
break;
//pausa no codigo para o proximo caso

        case 2:
               
    printf("\nVocê escolheu subtração.\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    res = n1 - n2;
    printf("Resultado: %.2f\n", res);
break;

        case 3:
                
    printf("\nsaida\n");
break;

default:
//default se refere a uma opção especifica do codigo           
    printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (menu != 3); 
//serve como um laço de repetição
    return 0;
}
