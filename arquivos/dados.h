//
// Created by LudoPassos on 14/12/22.
//

#ifndef FICHAACADEMIA_DADOS_H
#define FICHAACADEMIA_DADOS_H
int i;
 typedef struct dados_cliente{
    int codigoCadastro;
    char nome[51]; //fgets
    int Idade;
    char genero[2];
    float massaCorporal;
    float altura;
}dados;

#endif //FICHAACADEMIA_DADOS_H
