#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[3], codigo1[5], cidade1[50];
    unsigned long int populacao1;
    float area1, PIB1;
    int pontosTuristicos1;
    float densidade1, PIBpercapita1, superpoder1;

    // Variáveis da Carta 2
    char estado2[3], codigo2[5], cidade2[50];
    unsigned long int populacao2;
    float area2, PIB2;
    int pontosTuristicos2;
    float densidade2, PIBpercapita2, superpoder2;

    int vpopulacao, varea, vPIB, vpontos, vdensidade, vPIBpercapita, vsuperpoder;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o Estado (A a H): ");
    scanf("%s", estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade (sem espaços): ");
    scanf("%s", cidade1);
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em reais): ");
    scanf("%f", &PIB1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBpercapita1 + (1 / densidade1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o Estado (A a H): ");
    scanf("%s", estado2);
    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade (sem espaços): ");
    scanf("%s", cidade2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em reais): ");
    scanf("%f", &PIB2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBpercapita2 + (1 / densidade2);

    // Exibição das Cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", PIBpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    vpopulacao = populacao1 > populacao2;
    varea = area1 > area2;
    vPIB = PIB1 > PIB2;
    vpontos = pontosTuristicos1 > pontosTuristicos2;
    vdensidade = densidade1 < densidade2; // MENOR vence
    vPIBpercapita = PIBpercapita1 > PIBpercapita2;
    vsuperpoder = superpoder1 > superpoder2;

    printf("\n\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", vpopulacao);
    printf("Área: Carta 1 venceu (%d)\n", varea);
    printf("PIB: Carta 1 venceu (%d)\n", vPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vpontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vdensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vPIBpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vsuperpoder);

    return 0;
}
