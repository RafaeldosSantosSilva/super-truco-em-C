#include <stdio.h>
#include <string.h>

int main() {
    // === Declaração das variáveis ===
    char nome1[30] = "Brasil";
    char nome2[30] = "Argentina";

    float populacao1 = 213.0, populacao2 = 45.0;
    float area1 = 8515.767, area2 = 2780.400;
    float pib1 = 2.05, pib2 = 0.49;
    int pontosTuristicos1 = 150, pontosTuristicos2 = 120;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000) / populacao2;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 - densidade1;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 - densidade2;

    int escolha1, escolha2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // === Menu de atributos ===
    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n");
    printf("\nAtributos disponíveis:");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB");
    printf("\n4 - Pontos Turísticos");
    printf("\n5 - Densidade Demográfica");
    printf("\n6 - PIB per Capita");
    printf("\n7 - Super Poder\n");

    // === Escolha do primeiro atributo ===
    printf("\nEscolha o PRIMEIRO atributo (1 a 7): ");
    scanf("%d", &escolha1);

    // === Escolha do segundo atributo ===
    printf("Escolha o SEGUNDO atributo (1 a 7, diferente do primeiro): ");
    scanf("%d", &escolha2);

    // Verifica se o usuário escolheu atributos iguais
    if (escolha1 == escolha2) {
        printf("\nErro: Você escolheu o mesmo atributo duas vezes! Reinicie o jogo.\n");
        return 1;
    }

    // === Atribuição dos valores com switch ===
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
        case 7: valor1_carta1 = superPoder1; valor1_carta2 = superPoder2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
        case 7: valor2_carta1 = superPoder1; valor2_carta2 = superPoder2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // === Cálculo das somas ===
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // === Exibição dos valores ===
    printf("\n\n===== RESULTADOS =====\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    printf("Atributo 1 (Escolha %d): Carta 1 = %.2f | Carta 2 = %.2f\n", escolha1, valor1_carta1, valor1_carta2);
    printf("Atributo 2 (Escolha %d): Carta 1 = %.2f | Carta 2 = %.2f\n", escolha2, valor2_carta1, valor2_carta2);

    printf("\nSoma dos atributos:\n%s = %.2f\n%s = %.2f\n", nome1, soma1, nome2, soma2);

    // === Regras especiais: Densidade é o inverso (menor vence) ===
    float resultado1 = (escolha1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    float resultado2 = (escolha2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);

    // === Determina o vencedor ===
    printf("\n===== VENCEDOR =====\n");
    if (soma1 > soma2) {
        printf("Carta 1 (%s) venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
