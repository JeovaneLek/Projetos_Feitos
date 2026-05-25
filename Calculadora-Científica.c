#include <stdio.h>
#include <math.h>

int main() {
    int op;
    float n1, n2;

    printf("1-Soma, 2-Sub, 3-Mult, 4-Div, 5-Raiz, 6-Pot, 7-Perc: ");
    scanf("%d", &op);
   
    if (op != 5) {
        printf("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);
    } else {
        printf("Digite o numero: ");
        scanf("%f", &n1);
    }
   
    switch (op) {
        case 1: printf("Resultado: %.2f", n1 + n2); break;
        case 2: printf("Resultado: %.2f", n1 - n2); break;
        case 3: printf("Resultado: %.2f", n1 * n2); break;
        case 4: printf("Resultado: %.2f", n1 / n2); break;
        case 5: printf("Resultado: %.2f", sqrt(n1)); break;
        case 6: printf("Resultado: %.2f", pow(n1, n2)); break;
        case 7: printf("Resultado: %.2f", (n1 / 100) * n2); break;
        default: printf("Opcao invalida");
    }
   

    return 0;
}