#include <stdio.h>

int main() {
    int numeros[5];  
    int i;

    printf("Digite 5 numeros inteiros:\n");
    
    for (i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
        //determina o limites de numero para se digitar
    }
    printf("Números na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {   
    //esse for diz que para os numeros digitados serão invertidos
        printf("%d ", numeros[i]);  
    }
    return 0;
}
