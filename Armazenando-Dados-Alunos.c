#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_chamada[30];
    char nome[30][15];
    int ano_nasc[30];
    int mes_nasc[30];
    int dia_nasc[30];

    int ano = 2026;
    int mes = 4;
    int dia = 27;

    printf("\n\t### Cadastrador de alunos ###\n");

    for(int i = 0; i < 30; i++){
        printf("\n--- Aluno %d ---\n", i+1);

        // número da chamada
        do{
            printf("Número da chamada: ");
            scanf("%d", &n_chamada[i]);

            if(n_chamada[i] < 1 || n_chamada[i] > 100){
                printf("Número inválido. Digite entre 1 e 100.\n");
            }
        } while(n_chamada[i] < 1 || n_chamada[i] > 100);

        // nome
        printf("Nome: ");
        scanf(" %14s", nome[i]);

        // ano
        printf("Ano de nascimento: ");
        scanf("%d", &ano_nasc[i]);

        // mês
        printf("Mês de nascimento: ");
        scanf("%d", &mes_nasc[i]);

        // dia (com verificação)
        printf("Dia de nascimento: ");
        if(scanf("%d", &dia_nasc[i]) != 1){
            printf("Erro ao ler o dia. Definindo como 0.\n");
            dia_nasc[i] = 0;
        }
    }

    printf("\n\n### Lista de Alunos ###\n");

    for(int i = 0; i < 30; i++){
        int idade = ano - ano_nasc[i];

        if(mes < mes_nasc[i] || (mes == mes_nasc[i] && dia < dia_nasc[i])){
            idade--;
        }

        printf("\nAluno %d\n", i+1);
        printf("Chamada: %d\n", n_chamada[i]);
        printf("Nome: %s\n", nome[i]);
        printf("Nascimento: %02d/%02d/%d\n", dia_nasc[i], mes_nasc[i], ano_nasc[i]);
        printf("Idade: %d anos\n", idade);
    }

    return 0;
}

    // Mudei algumas coisas como a verificação do dia que estava dando um erro de buffer, que pulava
    // entrada de dados do ultimo aluno não colocando nada ou colocando "00" e logo após finalizava
    // o código daquele jeito.