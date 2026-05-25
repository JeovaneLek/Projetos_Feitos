#include <stdio.h>

float somar_remedios(float valor_remedio[10]){
    float soma = 0;
    for(int i = 0; i < 10; i++){
        soma = soma + valor_remedio[i];
    }
    return soma;
}

void imprimir_remedios(char nome_remedio[10][20], int qntd_remedio[10], float valor_remedio[10]){
    for(int i = 0; i < 10; i++){
        if(nome_remedio[i][0] != '\0'){
            printf("\nRemédio: %s", nome_remedio[i]);
            printf("\nQuantidade: %i", qntd_remedio[i]);
            printf("\nValor: R$%.2f", valor_remedio[i]);
            printf("\n");
        }
    }
}

int main()
{
   
   
    char nome_remedio[10][20] = {};
    int qntd_remedio[10] = {};
    float valor_remedio[10] = {};
   
    float result_soma;
   
    int ficar = 1;
    int i = 0;
   
    do{
        printf("Qual o nome do remédio?: ");
        scanf("%s", &nome_remedio[i]);
        printf("Quantas unidades?: ");
        scanf("%i", &qntd_remedio[i]);
        printf("Quantos reais custou?: ");
        scanf("%f", &valor_remedio[i]);
       
        printf("\nVocê quer armazenar mais um remédio?");
        printf("\n(1)Sim (2)Não: ");
        scanf("%i", &ficar);
        i++;
    }while(ficar==1);
   
    imprimir_remedios(nome_remedio, qntd_remedio, valor_remedio);
   
    result_soma = somar_remedios(valor_remedio);
    printf("O somatório total dos remédios é R$%.2f", result_soma);
   
    return 0;
}