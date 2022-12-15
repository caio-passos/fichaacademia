#include <stdio.h>
#include <unistd.h>
#include "linker.h"




int main(void) {
    printf("Bem vindo ao sistema automatizado de treino de musculacao\n");
    sleep(1);
    dadosAtleta();
    menu();

//extern method
    return 0;
}
