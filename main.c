#include <stdio.h>
#include <unistd.h>
#include "funcoes/funcoes.h"
int dadosAtleta();
struct dados;

int main() {
    printf("Bem vindo ao sistema automatizado de treino de musculacao\n");
    sleep(1);
    dadosAtleta();

//extern method
    return 0;
}
