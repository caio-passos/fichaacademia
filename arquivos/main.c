#include <stdio.h>
#include <stdlib.h>


typedef struct dados_cliente{
    int codigoCadastro;
    char nome[51]; //fgets
    int Idade;
    char genero[2];
    float massaCorporal;
    float altura;
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

int dias, contDias;
void treino_iniciante() {

    while (dias<7){

        if(dias==0||dias==2||dias==4){
            printf("Dia de treino: %d / 20", contDias);
            iniciante_A();
        }else{
            if (dias==1||dias==3||dias==5){
                printf("Dia de treino: %d / 20", contDias);
                iniciante_B();
            }else{
                if(dias==6){
                    dias=0;
                }

            }
        }
        if (contDias == 20){
            dias=8;
        }
        dias++;
        contDias++;
    }

}
dados atletas[100];

int posicaoAtleta = 0;

int localizarPosicaoAtleta(int i) {
    return 0;
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

        if (pAtleta==-9){


            printf("\nInsira o nome do aluno: "); //input apenas de caracteres não numericos
            scanf("%s", r.nome);
            fflush(stdin);

            printf("\nInsira a idade do Aluno: "); //input apenas de números
            /* do{
                 ch = getchar();
                 if (ch>= )
             }*/
            scanf("%d", &r.Idade);
            fflush(stdin);

            printf("\nInsira o genero do Aluno: "); //tratar a entrada de dados aqui.
            scanf("%s", r.genero);
            fflush(stdin);

            printf("\nInsira a massa corporal do Aluno em kilogramas: ");
            scanf("%f", &r.massaCorporal);
            fflush(stdin);

            printf("\nInsira a altura em centimetros: ");
            scanf("%f", &r.altura); //precisam ter apenas três caracteres, colocar limitação de entrada;
            fflush(stdin);

            atletas[pLivre]=r;
        }else{
            printf("Código já cadastrado\n");
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
                break;
            case 2:
                printf("Voce e um intermediario!!!");
                break;
            case 3:
                printf("Voce esta avancado!!!");
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


void inicializar() {

}

int main() {
    inicializar();
    printf("Bem vindo ao sistema automatizado de treino de musculacao\n");
    menu();
    return 0;
}
