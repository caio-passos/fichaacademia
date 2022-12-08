void Menu(){
    int op;
    do {
        system("cls");
        printf("Bem vindo ao sistema automatizado de treino de musculacao\n");

        printf("\n1 - Cadastrar Aluno\n2 - Verificar se ja possui cadastro");
        printf("\n0 - Sair");
        scanf("%i", &op);
        getchar();
        switch (op) {
            case 1:
                dadosAtleta();
                break;
            case 2:
                Verificar();
                break;

        }

    } while(op!=0);


    void Verificar(){
        char Nome[50];
        int op;
        int cod;
        do {
            system("cls");
            printf("\nInsira um codigo de cadastro com tres digitos: ");
            scanf("%d", &cod);
            for (int i = 0; i<999; ++i) {
                if (&dados->codigoCadastro==cod) {

                    printf("Nome %s\n", dados[i].nome);
                    printf("Idade %d\n", dados[i].Idade);
                    printf("Sexo %d\n", dados[i].genero);
                    printf("Massa corporal %d\n", dados[i].massaCorporal);
                    printf("altura %f\n", dados[i].altura;
                }

            }
            printf("\nDigite 0 para sair ou 1 para verificar novamente");
            scanf("%d", &op);
            getchar();
        } while (op!=0);
    }


}