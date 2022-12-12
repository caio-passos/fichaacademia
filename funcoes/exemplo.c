#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"
#define MAX_Pessoa 250
typedef struct {
    char Nome[MAX_Pessoa][50];
    int Idade[MAX_Pessoa];
    char genero[MAX_Pessoa];
    float MassaCorp[MAX_Pessoa];
    int objetivo[MAX_Pessoa];
    int divisao[MAX_Pessoa];
    int Ativo;

} Pessoa;
Pessoa  Pessoas[MAX_Pessoa];

void Menu();
void Cadastrar();
void Verificar();
void Remover();
void Lista();
int main() {
    Menu();
    return 0;
}
void Menu(){
    int op;
    do {
        system("cls");

        printf("\n1 - Cadastrar Aluno\n2 - Verificar se ja possui cadastro");
        printf("\n3 - Remover alunon  \n4 - Lista alunos ativos");
        printf("\n0 - Sair");
        scanf("%i", &op);
        getchar();
        switch (op) {
            case 1:
                Cadastrar();
                break;
            case 2:
                Verificar();
                break;
            case 3:
                Remover();
                break;
            case 4:
                Lista();
                break;
        }
        getchar();
    } while(op!=0);
}
void Cadastrar(){

    char Nome[50];
    int Idade;
    char genero;
    float MassaCorp;
    int objetivo;
    int divisao;
    int op;


    do{
        fflush(stdin);
        printf("\nPor favor digite seu nome");
        fgets(Nome,sizeof(Nome),stdin);

        printf("\nPor favor digite sua idade");
        scanf("%d", &Idade);

        printf("Digite H para homem e M para mulher:\n");
        scanf(" %c", &genero);

        printf("\nPor favor digite sua massa corporal");
        scanf("%f", &MassaCorp);

        printf("\nPor favor digite seu objetivo de treino");
        scanf(" %d", &objetivo);
        fflush(stdin);
        printf("\nPor favor digite sua divisao de treino");
        scanf("%d", &divisao);



        for (int i = 0; i<MAX_Pessoa; ++i) {
            if (Pessoas[i].Ativo==0)
            {
                Pessoas[i].Idade[MAX_Pessoa] = Idade;
                Pessoas[i].genero[MAX_Pessoa] = genero;
                Pessoas[i].MassaCorp[MAX_Pessoa] = MassaCorp;
                Pessoas[i].objetivo[MAX_Pessoa] = objetivo;
                Pessoas[i].divisao[MAX_Pessoa] = divisao;
                strstr(Pessoas[i].Nome, Nome);
                Pessoas[i].Ativo=1;
                break;
            }
        }

        printf("\n1 - Continuar\n0 - Sair\n");
        scanf("%d", &op);

    } while (op!=0);
}
void Verificar(){

    char Nome[50];
    int op;
    do {
        system("cls");
        printf("\nPor favor digite o nome do aluno pra gente verificar\n");
        fgets(Nome, sizeof(Nome), stdin);
        for (int i = 0; i<MAX_Pessoa; ++i) {
            if (strstr(Pessoas[i].Nome, Nome) != NULL) {
                printf("Matricula %d\n", i + 1);
                printf("Nome %s\n", Pessoas[i].Nome);
                printf("Idade %d\n", Pessoas[i].Idade);
                printf("Sexo %d\n", Pessoas[i].genero);
                printf("Massa corporal %d\n", Pessoas[i].MassaCorp);
                printf("Objetivo %d\n", Pessoas[i].objetivo);
            }

        }
        printf("\nDigite 0 para sair ou 1 para verificar novamente");
        scanf("%d", &op);
        getchar();
    } while (op!=0);
}
void Remover(){
    int Matricula;
    Lista();
    printf("\nDigite o nome do aluno que deseja remover" );
    scanf("%d",&Matricula);
    --Matricula;
    Pessoas[Matricula].Ativo=0;
    printf("\nAluno foi removido com sucesso\n");
    getchar();
}
void Lista(){
    system ("cls");
    printf("\n LISTA DE ALUNOS DA ACADEMIA\n");
    for (int i = 0; i <MAX_Pessoa ; ++i) {
        if(Pessoas[i].Ativo==1) {
            printf("\n----------------\n");
            printf("Matricula %d\n",i+1);
            printf("Nome %s\n", Pessoas[i].Nome);
            printf("Idade %d\n", Pessoas[i].Idade);
            printf("Sexo %d\n", Pessoas[i].genero);
            printf("Massa corporal %d\n", Pessoas[i].MassaCorp);
            printf("Objetivo %d\n", Pessoas[i].objetivo);
        }
    }


}

