#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale(LC_ALL,"");
   char operador;
    int num1, num2, resultado;

    printf("Digite dois números inteiros e um operador no meio:\n ");
    scanf("%d %c %d", &num1, &operador, &num2);

    switch (operador) {
    // o switch case serve para armazenar e processar todos os casos possíveis na operação
    case '+':
    resultado = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, resultado);
    break;
    //brak serve como um pase, para não misturar o case seguinte
    case '-':
    resultado = num1 - num2;
     printf("%d - %d = %d\n", num1, num2, resultado);
        break;
    case '*':
    resultado = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, resultado);
        break;
    case '/':
    resultado = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, resultado);
}

    return 0;
    //pausa o programa
}
