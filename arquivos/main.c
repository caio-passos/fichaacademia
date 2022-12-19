#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"
typedef struct dados_cliente{
    int codigoCadastro;
    char nome[51]; //fgets
    int Idade;
    char genero[2];
    float massaCorporal;
    float altura;
}dados;

struct dados;
void *t;

int i;
int j;
dados **r;

void verificar() {
    char Nome[50];
    int op;
    int cod;
    int j;
    struct dados_cliente *pDadosCliente = NULL;
    do {
        system("cls");
        printf("\nInsira um codigo de cadastro com tres digitos: ");
        scanf("%d", &cod);

        for (j = 0; j < 3; j++) {
            if (pDadosCliente->codigoCadastro == cod) { //estudar
                printf("usuario ja esta cadastrado");

            }
        }
        // Printar "usuario está cadastrado"
        //printar o struct inteiro
        printf("\nDigite 0 para sair ou 1 para verificar novamente");
        scanf("%d", &op);
        getchar();
    } while (op!=0); //Por ultimo implementar uma nova função que permitirá que o usuário
    //consulte os dados cadastrados(struct).
}



void print_elementos_struct(dados *p){
    // CONSEGUI!!! é só usar ponteiros para printar cada um dos elementos. Vejam os links no Discord
    int i;
    typedef struct dados_cliente dados;
    printf("Nome %s\n", p->nome);
    printf("Idade %d\n", p->Idade);
    printf("Sexo %.s\n", p->genero);
    printf("Massa corporal %.2f\n", p->massaCorporal);
    printf("altura %f\n", p->altura);
    printf("Código de cadastro %d\n", p->codigoCadastro);
}



void dadosAtleta(dados *r) {

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

void iniciante_a(){
    printf("*Ficha de treino AB*\n"
           "\n"
           "Treino A\n"
           "\n"
           "Aquecimento_10mins\n"
           "Chest press_4x12\n"
           "Cruxifixo reto com halters_4x10\n"
           "Desenvolvimento halter sentado_4x10\n"
           "Elevação lateral_4x10\n"
           "Leg press 45_4x12\n"
           "Cadeira extensora_4x12\n"
           "Pulley Triceps_4x12");

}
void iniciante_b(){
    printf("*Ficha de treino AB*\n"
           "\n"
           "Treino B\n"
           "\n"
           "Aquecimento_10mins\n"
           "Pulley anterior aberto_4x12\n"
           "Remada curvada unilateral_4x12\n"
           "Encolhimento halter_4x10\n"
           "Mesa Flexora_4x12\n"
           "Cadeira Flexora_4x10\n"
           "Cadeira abdutora_4x12\n"
           "Rosca direta barra em W_4x10\n"
           "Panturrilha leg press_4x12\n"
           "Abdominal elevação quadril_4x10");
}
void intermediario_a(){
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
void avançado_a(){
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
void avançado_b(){
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
void avançado_c(){
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
void avançado_d(){
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

int main() {

    struct dados_cliente;

    int op,Nivel, codigo;
    do {
        system("cls");
        printf("Bem vindo ao sistema automatizado de treino de musculacao\n");

        printf("\n1 - Cadastrar Aluno\n2 - verificar se ja possui cadastro\n3 - Inicia exercicio\n");
        printf("\n0 - Sair\n");
        scanf("%i", &op);
        getchar();
        fflush(stdin);
        switch (op) {
            case 1:
                dadosAtleta(*r);
                break;
            case 2:
                verificar();
                break;
            case 3:
            inicio:
                do {
                    printf("\t\n-----------------------Tabela de niveis do aluno---------------------------------------\n");
                    printf("\t\nDigite 1 para iniciante\n");
                    printf("\t\nDigite 2 para intermediario\n");
                    printf("\t\nDigite 3 para avancado\n");
                    scanf("%d", &Nivel);
                    if (Nivel!= 1 && Nivel!= 2 && Nivel != 3) {
                        printf("\nErro: Insira uma opcao valida!");
                        goto inicio;
                    }

                } while(Nivel !=1 && Nivel != 2 && Nivel  != 3);

                if (Nivel == 1) {
                    printf("Voce e um iniciante!!!");
                }
                if (codigo == -1){
                    goto inicio;
                }
                if (Nivel == 2) {
                    printf("Voce e um intermediario!!!");
                }
                if (codigo == -1){
                    goto inicio;
                }
                if (Nivel == 3) {
                    printf("Voce esta avancado!!!");
                }
                if (codigo == -1){
                    goto inicio;
                }
                break;
        }

    } while (op != 0);
    return 0;
}



