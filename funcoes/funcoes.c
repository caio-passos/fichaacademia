//
// Created by LudoPassos on 03/12/22.
//
#include <stdio.h>
#include "funcoes.h"
int n;
int c = 0;

int dadosAtleta() {

    struct dados {
        int codigoCadastro;
        char nome[50]; //fgets
        int Idade;
        char genero[1];
        float massaCorporal;
        float altura;
    }dados[n];
        //colocar abaixo dentro de um loop para receber multiplas structs diferentes de alunos diferentes.

    struct dados dados_aluno; //criando a variável dados_aluno do tipo struct
    //struct dadosAtleta *p, dadosAtleta1;
    //p = &dadosAtleta1;
    //printf("\nInsira seu código de cadastro ou digite 0 para criar um novo:"); //implementar
    //se a posição for nula ou 0, o programa direcionará para criar uma nova posição.
    //fflush(stdin);

    printf("\nInsira um codigo de cadastro com tres digitos: "); //impplementar: isdigit(ch); Implementar Sizeof() para 3 caracteres;
    scanf("3%d", &dados->codigoCadastro);
    while (1) {
        c = getchar();
        if(c == ' ' || c == '\n' || c == EOF)
            break;
    }
    fflush(stdin);

    printf("\nInsira o nome do aluno: "); //input apenas de caracteres não numericos
    scanf("%s", &dados->nome[50]);
    fflush(stdin);

    printf("\nInsira a idade do Aluno: "); //input apenas de números
   /* do{
        ch = getchar();
        if (ch>= )
    }*/
    scanf("%3d", &dados->Idade);
    fflush(stdin);

    printf("\nInsira o genero do Aluno: "); //tratar a entrada de dados aqui.
    scanf("%s", &dados->genero[1]);
    fflush(stdin);

    printf("\nInsira a massa corporal do Aluno em kilogramas: ");
    scanf("%f", &dados->massaCorporal);
    fflush(stdin);

    printf("\nInsira a altura em centimetros: ");
    scanf("%f", &dados->altura); //precisam ter apenas três caracteres, colocar limitação de entrada;
    fflush(stdin);


    return 0;
}

