#include <stdio.h>
#include <stdlib.h>


typedef struct dados_cliente{
    int codigoCadastro;
    char nome[51]; //fgets
    int Idade;
    char genero[2];
    float massaCorporal;
    float altura;
    int ativo;
}dados;

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
// Segunda = 0 - terça = 1 - quarta = 2 - quinta = 3 - sexta = 4 - sab = 5 - domingo = 6


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


dados atletas[5];

int localizarPosicaoAtleta(int cSet){
    int s=0;
    while (atletas[s].codigoCadastro != cSet && s<4){
        s++;
    }
    if (atletas[s].codigoCadastro == cSet){
        return s; //retorna a posição do setor
    }

    return -9; //retorna -9 para indicar que o setor não foi localizado
}

void consultaratleta(){
    int codigo, pSetor, f;

    system("cls");
    printf("Consultar ficha do aluno\n");

    printf("Codigo do aluno: ");
    scanf("%d", &codigo);
    fflush(stdin);

    pSetor = localizarPosicaoAtleta(codigo);
    if (pSetor !=-9){
        //exibir os dados
        printf("\nCodigo: %d\n", atletas[pSetor].codigoCadastro);
        printf("Nome: %s\n", atletas[pSetor].nome);

        printf("\nInformação do aluno\n");
    }else{
        printf("Setor nao localizado!\n");
    }

    system("pause");
}

void dadosAtleta() {
    //colocar abaixo dentro de um loop para receber multiplas structs diferentes de alunos diferentes.
    //criando a variável dados_aluno do tipo struct
    //struct dadosAtleta *p, dadosAtleta1;
    //p = &dadosAtleta1;
    //printf("\nInsira seu código de cadastro ou digite 0 para criar um novo:"); //implementar
    //se a posição for nula ou 0, o programa direcionará para criar uma nova posição.
    //fflush(stdin);

    dados r;
    int pLivre, pAtleta;

    pLivre = localizarPosicaoAtleta(-1);

    if (pLivre==-9){
        printf("Não tem vaga. \n");
    }else{
        printf("\nInsira um codigo de cadastro com tres digitos: "); //impplementar: isdigit(ch); Implementar Sizeof() para 3 caracteres;
        scanf("%d", &r.codigoCadastro);
        fflush(stdin);

        pAtleta = localizarPosicaoAtleta(r.codigoCadastro);

        if (pAtleta!=-9){
            printf("Cadastro foi localizado");
        }else{
            atletas[pLivre].codigoCadastro=pAtleta;
            printf("\nInsira o codigo do aluno: "); //input apenas de caracteres não numericos
            scanf("%d", r.codigoCadastro);
            fflush(stdin);

            printf("\nInsira o nome do Aluno: "); //input apenas de números
            scanf("%s", &r.nome);
            fflush(stdin);

            atletas[pLivre]=r;
        }
    }
    system("pause");
}

int print_struct(int pos){
    dados p;
    int i;


    for (i=0;i<100;i++){

        p=atletas[i];

        // if tem cadastro na posicao
        printf("Nome %s\n", p.nome);
        printf("Idade %d\n", p.Idade);
        printf("Sexo %.s\n", p.genero);
        printf("Massa corporal %.2f\n", p.massaCorporal);
        printf("altura %f\n", p.altura);
    }

}

int print_dados(int pos){
    if (pos >=0 && pos <100){
        printf("Nome %s\n", atletas[pos].nome);
        printf("Idade %d\n", atletas[pos].Idade);
        printf("Sexo %.s\n", atletas[pos].genero);
        printf("Massa corporal %.2f\n", atletas[pos].massaCorporal);

    }
}

void verificar() {
    int op;
    int cod, i;

    do {
        system("cls");
        printf("\nInsira um codigo de cadastro com tres digitos: ");
        scanf("%d", &cod);

        for (i = 0; i<3; i++) {
            if (atletas[i].codigoCadastro == cod) {
                printf("usuario ja esta cadastrado");
                print_dados(i);
            }
        }
        // Printar "usuario está cadastrado"
        //printar o struct inteiro

        //Por ultimo implementar uma nova função que permitirá que o usuário
        //consulte os dados cadastrados(struct).
        //só vai entrar o If se o código digitado for igual 1

        printf("\nDigite 0 para sair ou 1 para verificar novamente");
        scanf("%d", &op);
        getchar();
    } while (op!=0);
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

void menu() {
    int op,Nivel, codigo;
    do {
        system("cls");
        printf("Bem vindo ao sistema automatizado de treino de musculacao\n");

        printf("\n1 - Cadastrar Aluno\n2 - verificar se ja possui cadastro\n3 - Inicia execicio\n");
        printf("\n0 - Sair\n");
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
                treino();
                break;
            case 0:
                printf("Programa encerrado\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
        system("pause");

    } while (op != 0);

}



int main() {
    printf("Bem vindo ao sistema automatizado de treino de musculacao\n");
    menu();
    return 0;
}