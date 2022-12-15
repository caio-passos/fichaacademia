//
// Created by LudoPassos on 03/12/22.
//
#include <stdio.h>
#include "dados.h"
#include "linker.h"
int i;


 void dadosAtleta(dados *r) {
    //colocar abaixo dentro de um loop para receber multiplas structs diferentes de alunos diferentes.
     //criando a variável dados_aluno do tipo struct
    //struct dadosAtleta *p, dadosAtleta1;
    //p = &dadosAtleta1;
    //printf("\nInsira seu código de cadastro ou digite 0 para criar um novo:"); //implementar
    //se a posição for nula ou 0, o programa direcionará para criar uma nova posição.
    //fflush(stdin);
    printf("\nInsira um codigo de cadastro com tres digitos: "); //impplementar: isdigit(ch); Implementar Sizeof() para 3 caracteres;
    scanf("3%d", r->codigoCadastro);
    fflush(stdin);

    printf("\nInsira o nome do aluno: "); //input apenas de caracteres não numericos
    scanf("%s", r->nome[50]);
    fflush(stdin);

    printf("\nInsira a idade do Aluno: "); //input apenas de números
   /* do{
        ch = getchar();
        if (ch>= )
    }*/
    scanf("%3d", r->Idade);
    fflush(stdin);

    printf("\nInsira o genero do Aluno: "); //tratar a entrada de dados aqui.
    scanf("%s", r->genero[i]);
    fflush(stdin);

    printf("\nInsira a massa corporal do Aluno em kilogramas: ");
    scanf("%f", r->massaCorporal);
    fflush(stdin);

    printf("\nInsira a altura em centimetros: ");
    scanf("%f", r->altura); //precisam ter apenas três caracteres, colocar limitação de entrada;
    fflush(stdin);
}

