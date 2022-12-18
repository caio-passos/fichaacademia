//
// Created by LudoPassos on 12/12/22.
//
//Integrar dois arquivos C secundários a árvore principal do projeto.
// https://www.reddit.com/r/C_Programming/comments/5efqtc/what_exactly_is_a_module_in_c/
// https://cboard.cprogramming.com/c-programming/29913-extern-structs.html


#include <stdio.h>
#include <stdlib.h>
#include "dados.h"
#include "linker.h"
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"
struct dados;




void menu() {


    int op,Nivel, codigo;
    do {
        system("cls");
        printf("Bem vindo ao sistema automatizado de treino de musculacao\n");

        printf("\n1 - Cadastrar Aluno\n2 - verificar se ja possui cadastro\n3 - Inicia execicio\n");
        printf("\n0 - Sair");
        scanf("%i", &op);
        getchar();
        switch (op) {
            case 1:
                dadosAtleta();
                break;
            case 2:
                verificar();
                break;
            case 3:
            inicio:
                do {
                    printf("\t\n-----------------------Tabela de niveis do aluno---------------------------------------\n");
                    printf("\t\nDigite 1 para iniciante\n");
                    printf("\t\nDigite 2 para intermediario\n");
                    printf("\t\nDigite 3 para avancado\n");
                    scanf("%d", &Nivel);
                    if (Nivel!= 1 && Nivel!= 2 && Nivel != 3) {
                        printf("\nErro: Insira uma opcao valida!");
                    }

                } while(Nivel !=1 && Nivel != 2 && Nivel  != 3);

                            if (Nivel == 1) {
                             printf("Voce e um iniciante!!!");
                                             }
                            if (codigo == -1){
                            goto inicio;
                                     }
                             if (Nivel == 2) {
                                 printf("Voce e um intermediario!!!");
                                                }
                            if (codigo == -1){
                            goto inicio;
                            }
                            if (Nivel == 3) {
                            printf("Voce esta avancado!!!");
                                            }
                            if (codigo == -1){
                                goto inicio;
                            }
                break;
        }

    } while (op != 0);

}

void verificar() {
    char Nome[50];
    int op;
    int cod;
    do {
        system("cls");
        printf("\nInsira um codigo de cadastro com tres digitos: ");
        scanf("%d", &cod);

        for (int i = 0; i < 3; ++i) {
            if (dados[i]->codigoCadastro==cod) {
                printf("usuario ja esta cadastrado");


            }
        }
        // Printar "usuario está cadastrado"
        //printar o struct inteiro
        printf("\nDigite 0 para sair ou 1 para verificar novamente");
        scanf("%d", &op);
        getchar();
    } while (op!=0); //Por ultimo implementar uma nova função que permitirá que o usuário
        //consulte os dados cadastrados(struct).
    }       //só vai entrar o If se o código digitado for igual 1






void print_elementos_struct(dados *p){
    // CONSEGUI!!! é só usar ponteiros para printar cada um dos elementos. Vejam os links no Discord
    int i;
    printf("Nome %s\n", p->nome);
    printf("Idade %d\n", p->Idade);
    printf("Sexo %.s\n", p->genero);
    printf("Massa corporal %.2f\n", p->massaCorporal);
    printf("altura %f\n", p->altura);
}