#incluir <stdio.h>

inteiro principal() {
    // Variáveis ​​das cartas
    personagem códigoA[5],nomeA[30];
    inteiro populacaoA;
    flutuador áreaA,pibA;

    personagem códigoB[5],nomeB[30];
    inteiro populacaoB;
    flutuador áreaB,pibB;

    inteiro opcao;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código: ");
    scanf("%s",códigoA);
    printf("Nome da Cidade: ");
    scanf("%s",nomeA);
    printf("População: ");
    scanf("%d",&populacaoA);
    printf("Área (km²): ");
    scanf("%f",&áreaA);
    printf("PIB (bilhões): ");
    scanf("%f",&pibA);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código: ");
    scanf("%s",códigoB);
    printf("Nome da Cidade: ");
    scanf("%s",nomeB);
    printf("População: ");
    scanf("%d",&populacaoB);
    printf("Área (km²): ");
    scanf("%f",&áreaB);
    printf("PIB (bilhões): ");
    scanf("%f",&pibB);

    // MENU
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha o ATRIBUTO para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área territorial\n");
    printf("3 - PIB\n");
    printf("Opção: ");
    scanf("%d",&opcao);

    trocar(opcao) {
        caso 1:
            printf("\nComparando População...\n");
            se(populacaoA > populacaoB) {
                printf("Vencedora: %s (Maior população)\n",nomeA);
            }outro se(populacaoA < populacaoB) {
                printf("Vencedora: %s (Maior população)\n",nomeB);
            }outro{ 
                printf("Empate em População! Comparando PIB...\n");
                se(pibA > pibB)
                    printf("Vencedora: %s (Maior PIB)\n",nomeA);
                outro se(pibA < pibB)
                    printf("Vencedora: %s (Maior PIB)\n",nomeB);
                outro
                    printf("Empate total!\n");
            }
            quebrar;

        caso 2:
            printf("\nComparando Área territorial...\n");
            se(áreaA > áreaB) {
                printf("Vencedora: %s (área maior)\n",nomeA);
            }outro se(áreaA < áreaB) {
                printf("Vencedora: %s (área maior)\n",nomeB);
            }outro{
                printf("Empate em Área! Comparando População...\n");
                se(populacaoA > populacaoB)
                    printf("Vencedora: %s (Maior população)\n",nomeA);
                outro se(populacaoA < populacaoB)
                    printf("Vencedora: %s (Maior população)\n",nomeB);
                outro
                    printf("Empate total!\n");
            }
            quebrar;

        caso 3:
            printf("\nComparando PIB...\n");
            se(pibA > pibB) {
                printf("Vencedora: %s (Maior PIB)\n",nomeA);
            }outro se(pibA < pibB) {
                printf("Vencedora: %s (Maior PIB)\n",nomeB);
            }outro{
                printf("Empate em PIB! Comparando Área...\n");
                se(áreaA > áreaB)
                    printf("Vencedora: %s (área maior)\n",nomeA);
                outro se(áreaA < áreaB)
                    printf("Vencedora: %s (área maior)\n",nomeB);
                outro
                    printf("Empate total!\n");
            }
            quebrar;

        padrão:
            printf("Opção inválida!\n");
            quebrar;
    }

    retornar 0;
}
