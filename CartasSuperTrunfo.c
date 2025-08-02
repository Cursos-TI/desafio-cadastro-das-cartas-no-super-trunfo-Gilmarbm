#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Variáveis da Carta 1
    char estado1[2], codigo1[5], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, PIB1, densidadepopulacional1, PIBpercapita1;

    // Variáveis da Carta 2
    char estado2[2], codigo2[5], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, PIB2, densidadepopulacional2, PIBpercapita2;

     // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %1s", estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %4s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    //Cálculo da Densidade Populacional da Carta 1
    densidadepopulacional1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);

    //Cálculo do PIB per capita da Carta 1
    PIBpercapita1 = PIB1 / populacao1;
    printf("PIB per capita: %.2f reais \n", PIBpercapita1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %1s", estado2);

    printf("Digite o Código da Carta (ex: B03): ");
    scanf(" %4s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculo da Densidade Populacional da Carta 2
    densidadepopulacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);

    //Cálculo do PIB per capita da Carta 2
    PIBpercapita2 = PIB2 / populacao2;
    printf("PIB per capita: %.2f reais \n", PIBpercapita2);


    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais", PIBpercapita2);

    return 0;

}
