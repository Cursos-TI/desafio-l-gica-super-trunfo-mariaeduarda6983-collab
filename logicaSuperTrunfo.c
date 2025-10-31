#include <stdio.h>

int main() {
    // Variáveis das cartas
    char codigoA[5], nomeA[30];
    int populacaoA;
    float areaA, pibA;

    char codigoB[5], nomeB[30];
    int populacaoB;
    float areaB, pibB;

    int opcao;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código: ");
    scanf("%s", codigoA);
    printf("Nome da Cidade: ");
    scanf("%s", nomeA);
    printf("População: ");
    scanf("%d", &populacaoA);
    printf("Área (km²): ");
    scanf("%f", &areaA);
    printf("PIB (bilhões): ");
    scanf("%f", &pibA);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código: ");
    scanf("%s", codigoB);
    printf("Nome da Cidade: ");
    scanf("%s", nomeB);
    printf("População: ");
    scanf("%d", &populacaoB);
    printf("Área (km²): ");
    scanf("%f", &areaB);
    printf("PIB (bilhões): ");
    scanf("%f", &pibB);

    // MENU
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha o ATRIBUTO para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área territorial\n");
    printf("3 - PIB\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nComparando População...\n");
            if (populacaoA > populacaoB) {
                printf("Vencedora: %s (Maior população)\n", nomeA);
            } else if (populacaoA < populacaoB) {
                printf("Vencedora: %s (Maior população)\n", nomeB);
            } else { 
                printf("Empate em População! Comparando PIB...\n");
                if (pibA > pibB)
                    printf("Vencedora: %s (Maior PIB)\n", nomeA);
                else if (pibA < pibB)
                    printf("Vencedora: %s (Maior PIB)\n", nomeB);
                else
                    printf("Empate total!\n");
            }
            break;

        case 2:
            printf("\nComparando Área territorial...\n");
            if (areaA > areaB) {
                printf("Vencedora: %s (Maior área)\n", nomeA);
            } else if (areaA < areaB) {
                printf("Vencedora: %s (Maior área)\n", nomeB);
            } else {
                printf("Empate em Área! Comparando População...\n");
                if (populacaoA > populacaoB)
                    printf("Vencedora: %s (Maior população)\n", nomeA);
                else if (populacaoA < populacaoB)
                    printf("Vencedora: %s (Maior população)\n", nomeB);
                else
                    printf("Empate total!\n");
            }
            break;

        case 3:
            printf("\nComparando PIB...\n");
            if (pibA > pibB) {
                printf("Vencedora: %s (Maior PIB)\n", nomeA);
            } else if (pibA < pibB) {
                printf("Vencedora: %s (Maior PIB)\n", nomeB);
            } else {
                printf("Empate em PIB! Comparando Área...\n");
                if (areaA > areaB)
                    printf("Vencedora: %s (Maior área)\n", nomeA);
                else if (areaA < areaB)
                    printf("Vencedora: %s (Maior área)\n", nomeB);
                else
                    printf("Empate total!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

