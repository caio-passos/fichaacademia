#include <stdio.h>
#include <unistd.h>
#include "linker.h"
#include "menu.c"




int main(void) {
    printf("Bem vindo ao sistema automatizado de treino de musculacao\n");
    sleep(1);
    dadosAtleta();
    print_struct();
    menu();

//extern method
    return 0;
}
