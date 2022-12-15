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
struct dados;



void menu() {
    int op;
    do {
        system("cls");
        printf("Bem vindo ao sistema automatizado de treino de musculacao\n");

        printf("\n1 - Cadastrar Aluno\n2 - verificar se ja possui cadastro");
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

        }

    } while (op != 0);

}

void verificar() {
    char Nome[50];
    int op;
    int *cod;
    do {
        system("cls");
        printf("\nInsira um codigo de cadastro com tres digitos: ");
        scanf("%d", &cod);
        for (int i = 0; i<3; ++i) {
            if (&p->codigoCadastro == cod) { //Comparison between pointer and integer ('int *' and 'int')
                // >>> fazer um cast para comparar dois tipos possíveis


                        /// BAGUNCEI O CÓDIGO FOI MAL MANO EU TAVA CONSERTANDO AS COISAS
                        /// LOGO LOGO EU CONSERTO ESSE TRECHO
            }
        }
        // Printar "usuario está cadastrado"
                            //printar o struct inteiro

                            //Por ultimo implementar uma nova função que permitirá que o usuário
                            //consulte os dados cadastrados(struct).
                //só vai entrar o If se o código digitado for igual 1
        }
        printf("\nDigite 0 para sair ou 1 para verificar novamente");
        scanf("%d", &op);
        getchar();
    } while (op!=0);


void print_elementos_struct(dados *p){    // CONSEGUI!!! é só usar ponteiros para printar cada um dos elementos. Vejam os links no Discord
    printf("Nome %s\n", p->nome);
    printf("Idade %d\n", p->Idade);
    printf("Sexo %.s\n", p->genero);
    printf("Massa corporal %.2f\n", p->massaCorporal);
    printf("altura %f\n", p->altura);
}