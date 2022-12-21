#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_Pessoa 250
typedef struct {
    char Nome[MAX_Pessoa][50];
    int Idade[MAX_Pessoa];
    char genero[MAX_Pessoa];
    float MassaCorp[MAX_Pessoa];
    int Codigocadastro[MAX_Pessoa];
    float altura[MAX_Pessoa];
    int Ativo;
    int dias1, contDias1, dias2, contDias2, inicioTreino1, fimTreino1, fimTreino2, inicioTreino2;

} Pessoa;
Pessoa  Pessoas[MAX_Pessoa];
void treino();
void treino_iniciante();
void treino_intermediario();
void treino_avancado();
void avancado_a();
void avancado_b();
void avancado_c();
void avancado_d();
void intermediario_A();
void intermediario_b();
void intermediario_c();
void iniciante_B();
void iniciante_A();
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
        printf("Bem vindo ao sistema automatizado de treino de musculacao\n");

        printf("\n1 - Cadastrar Aluno\n2 - Verificar se ja possui cadastro");
        printf("\n3 - Remover aluno  \n4 - Inicia execicio\n");
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
                treino();
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
    int codCadastro;
    float altura;


    do{
        printf("\nPor favor digite codigo de cadastro");
        scanf("%d", &codCadastro);
        fflush(stdin);
        printf("\nPor favor digite seu nome");
        fgets(Nome,sizeof(Nome),stdin);
        fflush(stdin);
        printf("\nPor favor digite sua idade");
        scanf("%d", &Idade);
        fflush(stdin);
        printf("Digite H para homem e M para mulher:\n");
        scanf(" %c", &genero);
        fflush(stdin);
        printf("\nPor favor digite sua massa corporal");
        scanf("%f", &MassaCorp);
        fflush(stdin);
        printf("\nPor favor digite sua altura");
        scanf("%f", &altura);
        fflush(stdin);


        for (int i = 0; i<MAX_Pessoa; ++i) {
            if (Pessoas[i].Ativo==0)
            {
                Pessoas[i].Idade[MAX_Pessoa] = Idade;
                Pessoas[i].genero[MAX_Pessoa] = genero;
                Pessoas[i].MassaCorp[MAX_Pessoa] = MassaCorp;
                Pessoas[i].altura[MAX_Pessoa] = altura;
                Pessoas[i].Codigocadastro[MAX_Pessoa] = codCadastro;
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
                printf("Matricula %d\n", Pessoas[i].Codigocadastro);
                printf("Nome %s\n", Pessoas[i].Nome);
                printf("Idade %d\n", Pessoas[i].Idade);
                printf("Sexo %d\n", Pessoas[i].genero);
                printf("Massa corporal %d\n", Pessoas[i].MassaCorp);
                printf("Altura %d\n", Pessoas[i].altura);
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
    printf("\nAluno foi removido com sucesson");
    getchar();
}
void Lista(){
    system ("cls");
    printf("\n LISTA DE ALUNOS DA ACADEMIA\n");
    for (int i = 0; i <MAX_Pessoa ; ++i) {
        if(Pessoas[i].Ativo==1) {
            printf("\n----------------\n");
            printf("Codigo de cadastro %d\n", Pessoas[i].Codigocadastro);
            printf("Nome %s\n", Pessoas[i].Nome);
            printf("Idade %d\n", Pessoas[i].Idade);
            printf("Sexo %d\n", Pessoas[i].genero);
            printf("Massa corporal %d\n", Pessoas[i].MassaCorp);
            printf("altura %d\n", Pessoas[i].altura);
        }
    }


}
void iniciante_A(){
    printf("Ficha de treino AB*\n"
           "Treino A\n"
           "Aquecimento_10mins\n"
           "Chest press_4x12\n"
           "Cruxifixo reto com halters_4x10\n"
           "Desenvolvimento halter sentado_4x10\n"
           "Elevacao lateral_4x10\n"
           "Leg press 45_4x12\n"
           "Cadeira extensora_4x12\n"
           "Pulley Triceps_4x12\n");
}
void iniciante_B() {
    printf("Ficha de treino AB\n\n"
           "Treino B\n"
           "Aquecimento_10mins\n"
           "Pulley anterior aberto_4x12\n"
           "Remada curvada unilateral_4x12\n"
           "Encolhimento halter_4x10\n"
           "Mesa Flexora_4x12\n"
           "Cadeira Flexora_4x10\n"
           "Cadeira abdutora_4x12\n"
           "Rosca direta barra em W_4x10\n"
           "Panturrilha leg press_4x12\n"
           "Abdominal elevacao quadril_4x10\n");

}

int dias1, contDias1, dias2, contDias2, inicioTreino1, fimTreino1, fimTreino2, inicioTreino2;
void treino_iniciante() {

    while (contDias1 < 20) {

        if (dias1 == 0 || dias1 == 2 || dias1 == 4 ) {
            fimTreino1=0;
            printf("\nDigite 1 para comecar o treino de hoje!: \n");
            while (inicioTreino1 != 1) {
                scanf("%d", &inicioTreino1);
            }
            printf("\nDia de treino: %d / 20\n", contDias1);
            iniciante_A();
            dias1++;
            contDias1++;

            while (fimTreino1 != 1) {
                printf("\n\nDigite 1 quando o treino for finalizado\n");
                scanf("%d", &fimTreino1);
                if (fimTreino1 != 1) {
                    printf("\ntermine o seu treino\n");

                }
                if (dias1 == 1 || dias1 == 3 || dias1 == 5 && fimTreino1 == 1) {
                    fimTreino1=0;
                    printf("\nDigite 1 para comecar o treino de hoje!: \n");
                    while (inicioTreino1 != 1) {
                        scanf("%d", &inicioTreino1);

                    }
                    printf("\nDia de treino: %d / 20\n", contDias1);
                    iniciante_B();
                    dias1++;
                    contDias1++;

                    while (fimTreino1 != 1) {
                        printf("\n\nDigite 1 quando o treino for finalizado\n");
                        scanf("%d", &fimTreino1);
                        if (fimTreino1 != 1) {
                            printf("\ntermine o seu treino\n");

                        } else {
                            if (dias1 == 6) {
                                dias1 = 0;
                            }

                        }
                    }
                    if (contDias1 == 20) {
                        dias1 = 8;
                    }
                }

            }
        }
    }
}
void intermediario_A(){
    printf("Ficha de treino ABC\n"
           "\n"
           "Treino A\n\n"
           "Supino reto com barra_3x6\n"
           "Supino inclinado com halteres_3x8\n"
           "Cruxifixo na polia_3x10\n"
           "Desenvolvimento com halteres_3x6\n"
           "Elevação lateral na polia_3x10\n"
           "Tríceps corda_3x10\n"
           "Rosca francesa_3x12");
}
void intermediario_b(){
    printf("Ficha de treino ABC\n"
           "\n"
           "Treino B\n\n"
           "Barra fixa3x6-8\n"
           "Remada curvada_3x8-10\n"
           "Pull Down_3x10-12\n"
           "Encolhimento com barra_3x6-8\n"
           "Cruxifixo invertido na polia_3x10\n"
           "Rosca direta_3x10\n"
           "Rosca inversa_3x12");
}
void intermediario_c(){
    printf("Ficha de treino ABC\n"
           "\n"
           "Treino C\n"
           "Agachamento livre_3x6-8\n"
           "Leg press_3x8-10\n"
           "Stiff_3x10-12\n"
           "Passada_3x8x2\n"
           "Mesa flexora_3x10-12\n"
           "Cadeira extensora_3x10\n"
           "Panturrilhas em pe_3x12-15\n"
           "Panturrilhas sentada");
}
void treino_intermediario(){
    while (contDias2<20) {

        if (dias2 == 0 || dias2 == 3) {
            fimTreino2 = 0;
            printf("\nDigite 1 para comecar o treino de hoje!: \n");
            while (inicioTreino2 != 1) {
                scanf("%d", &inicioTreino2);
            }
            printf("Dia de treino: %d / 20", contDias2);
            intermediario_A();
            dias2++;
            contDias2++;

            while (fimTreino2 != 1) {
                printf("\n\nDigite 1 quando o treino for finalizado\n");
                scanf("%d", &fimTreino2);
                if (fimTreino2 != 1) {
                    printf("\ntermine o seu treino\n");
                }else{

                    if (dias2 == 1 || dias2 == 4 && fimTreino2 == 1) {
                        fimTreino2 = 0;
                        printf("\nDigite 1 para comecar o treino de hoje!: \n");
                        while (inicioTreino2 != 1) {
                            scanf("%d", &inicioTreino2);
                        }

                        printf("Dia de treino: %d / 20", contDias2);
                        intermediario_b();
                        dias2++;
                        contDias2++;

                        while (fimTreino2 != 1) {
                            printf("\n\nDigite 1 quando o treino for finalizado\n");
                            scanf("%d", &fimTreino2);
                            if (fimTreino2 != 1) {
                                printf("\ntermine o seu treino\n");

                            } else {
                                if (dias2 == 2 || dias2 == 5 && fimTreino2 == 1) {
                                    fimTreino2 = 0;
                                    printf("\nDigite 1 para comecar o treino de hoje!: \n");
                                    while (inicioTreino2 != 1) {
                                        scanf("%d", &inicioTreino2);
                                    }

                                    printf("\nDia de treino: %d / 20\n", contDias2);
                                    intermediario_c();
                                    dias2++;
                                    contDias2++;

                                    while (fimTreino2 != 1) {
                                        printf("\n\nDigite 1 quando o treino for finalizado\n");
                                        scanf("%d", &fimTreino2);
                                        if (fimTreino2 != 1) {
                                            printf("\ntermine o seu treino\n");
                                        }
                                    }
                                    if (dias2 == 6) {
                                        dias2 = 0;
                                    }
                                }
                            }
                        }
                        if (contDias2 == 20) {
                            dias2 = 8;
                        }
                    }
                }
            }}
    }
}
void avancado_a(){
    printf("Ficha de treino ABCD\n"
           "\n"
           "Treino A\n"
           "\n"
           "Supino inclinado c/ barra4x10-12\n"
           "Cruxifixo reto_3x10-12\n"
           "Supino reto c/ barra_3x10x12\n"
           "Voador_3x10-12\n"
           "Francês deitado c/ halteres_3x10-12\n"
           "Corda Cross_4x10-12\n"
           "Tríceps testa 4x10-12");

};
void avancado_b(){
    printf("Ficha de treino ABCD\n"
           "\n"
           "Treino B\n"
           "\n"
           "Supino inclinado c/ barra4x10-12\n"
           "Cruxifixo reto_3x10-12\n"
           "Supino reto c/ barra_3x10x12\n"
           "Voador_3x10-12\n"
           "Francês deitado c/ halteres_3x10-12\n"
           "Corda Cross_4x10-12\n"
           "Tríceps testa 4x10-12");
};
void avancado_c(){
    printf("Ficha de treino ABCD\n"
           "\n"
           "Treino C\n"
           "\n"
           "Supino inclinado c/ barra4x10-12\n"
           "Cruxifixo reto_3x10-12\n"
           "Supino reto c/ barra_3x10x12\n"
           "Voador_3x10-12\n"
           "Francês deitado c/ halteres_3x10-12\n"
           "Corda Cross_4x10-12\n"
           "Tríceps testa 4x10-12");

};
void avancado_d(){
    printf("Ficha de treino ABCD\n"
           "\n"
           "Treino D\n"
           "\n"
           "Supino inclinado c/ barra4x10-12\n"
           "Cruxifixo reto_3x10-12\n"
           "Supino reto c/ barra_3x10x12\n"
           "Voador_3x10-12\n"
           "Francês deitado c/ halteres_3x10-12\n"
           "Corda Cross_4x10-12\n"
           "Tríceps testa 4x10-12");
}
void treino_avancado(){
    int treinoA=1,treinoB=2, treinoC=3, treinoD=4, treinoAtual=1, fimTreino=0, inicioTreino=0, reset=0, contdias3=0;

    // treino A

    while (contdias3<20) {

        if (treinoAtual == 1) {
            fimTreino = 0;
            printf("Digite 1 para comecar o treino de hoje!: ");
            while (inicioTreino != 1) {
                scanf("%d", &inicioTreino);
            }

            avancado_a();
            printf("\nDia de treino: %d / 20\n", contdias3);
            contdias3++;

            while (fimTreino != 1) {
                printf("\n\nDigite 1 quando o treino for finalizado\n");
                scanf("%d", &fimTreino);
                if (fimTreino != 1) {
                    printf("\ntermine o seu treino\n");
                } else {
                    reset = reset + treinoAtual;
                    treinoAtual = 2;

                }
            }
            // treino B
        }
        if (treinoAtual == 2 && fimTreino == 1) {
            fimTreino = 0;
            system("cls");
            printf("Digite 1 para comecar o treino de hoje!: ");
            while (inicioTreino != 1) {
                scanf("%d", &inicioTreino);
            }

            avancado_b();
            printf("\nDia de treino: %d / 20\n", contdias3);
            contdias3++;

            while (fimTreino != 1) {
                printf("\n\nDigite 1 quando o treino for finalizado\n");
                scanf("%d", &fimTreino);
                if (fimTreino != 1) {
                    printf("\ntermine o seu treino\n");
                } else {
                    reset = reset + treinoAtual;
                    treinoAtual = 3;
                }
            }
            // treino C
        }
        if (treinoAtual == 3 && fimTreino == 1) {
            fimTreino = 0;
            system("cls");
            printf("Digite 1 para comecar o treino de hoje!: ");
            while (inicioTreino != 1) {
                scanf("%d", &inicioTreino);
            }

            avancado_c();
            printf("\nDia de treino: %d / 20\n", contdias3);
            contdias3++;

            while (fimTreino != 1) {
                printf("\n\nDigite 1 quando o treino for finalizado\n");
                scanf("%d", &fimTreino);
                if (fimTreino != 1) {
                    printf("\ntermine o seu treino\n");
                } else {
                    reset = reset + treinoAtual;
                    treinoAtual = 4;
                }
            }

        }
        if (treinoAtual == 4 && fimTreino == 1) {
            fimTreino = 0;
            system("cls");
            printf("Digite 1 para comecar o treino de hoje!: ");
            while (inicioTreino != 1) {
                scanf("%d", &inicioTreino);
            }

            avancado_d();
            printf("\nDia de treino: %d / 20\n", contdias3);
            contdias3++;

            while (fimTreino != 1) {
                printf("\n\nDigite 1 quando o treino for finalizado\n");
                scanf("%d", &fimTreino);
                if (fimTreino != 1) {
                    printf("\ntermine o seu treino\n");
                } else {
                    reset = reset + treinoAtual;
                    treinoAtual = 1;
                }
            }

        }
        if (reset == 10){
            treinoAtual=1;

        }

    }

}
void treino(){
    int Nivel;

    do {
        printf("\t\n-----------------------Tabela de niveis do aluno---------------------------------------\n");
        printf("\t\nDigite 1 para iniciante\n");
        printf("\t\nDigite 2 para intermediario\n");
        printf("\t\nDigite 3 para avancado\n");
        printf("\t\nDigite 0 para voltar ao menu principal\n");
        scanf("%d", &Nivel);

        switch (Nivel) {
            case 1:
                printf("Voce e um iniciante!!!");
                treino_iniciante();
                break;
            case 2:
                printf("Voce e um intermediario!!!");
                treino_intermediario();
                break;
            case 3:
                printf("Voce esta avancado!!!");
                treino_avancado();
                break;
            case 0:
                printf("Voltando para o menu principal...");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while(Nivel !=0);


}

