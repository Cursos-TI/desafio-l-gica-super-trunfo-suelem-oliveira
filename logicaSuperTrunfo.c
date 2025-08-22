#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
// Definição das variáveis para armazenar as propriedades das cidades
    // Cidade 1
    char codigo1[4];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Cidade 2
    char codigo2[4];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    printf("=== SUPER TRUNFO - CIDADES ===\n\n");
    
    // Cadastro das Cartas:
    // Cidade 1
    printf("--- CADASTRO DA CIDADE 1 ---\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (milhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cidade 2
    printf("\n--- CADASTRO DA CIDADE 2 ---\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (milhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibindo os dados cadastrados
    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("Cidade 1: %s (%s)\n", nome1, codigo1);
    printf("População: %d, Área: %.2f km², PIB: %.2f milhões, Pontos turísticos: %d\n", 
           populacao1, area1, pib1, pontos_turisticos1);
    
    printf("\nCidade 2: %s (%s)\n", nome2, codigo2);
    printf("População: %d, Área: %.2f km², PIB: %.2f milhões, Pontos turísticos: %d\n", 
           populacao2, area2, pib2, pontos_turisticos2);
    
    // Comparação de Cartas:
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
    
    // Comparando População
    printf("\n1. POPULAÇÃO:\n");
    if (populacao1 > populacao2) {
        printf("%s tem maior população.\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("%s tem maior população.\n", nome2);
    } else {
        printf("As cidades têm a mesma população.\n");
    }
    
    // Comparando Área
    printf("\n2. ÁREA:\n");
    if (area1 > area2) {
        printf("%s tem maior área.\n", nome1);
    } else if (area2 > area1) {
        printf("%s tem maior área.\n", nome2);
    } else {
        printf("As cidades têm a mesma área.\n");
    }
    
    // Comparando PIB
    printf("\n3. PIB:\n");
    if (pib1 > pib2) {
        printf("%s tem maior PIB.\n", nome1);
    } else if (pib2 > pib1) {
        printf("%s tem maior PIB.\n", nome2);
    } else {
        printf("As cidades têm o mesmo PIB.\n");
    }
    
    // Comparando Pontos Turísticos
    printf("\n4. PONTOS TURÍSTICOS:\n");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("%s tem mais pontos turísticos.\n", nome1);
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("%s tem mais pontos turísticos.\n", nome2);
    } else {
        printf("As cidades têm o mesmo número de pontos turísticos.\n");
    }
    
    // Exibição dos Resultados:
    printf("\n=== RESULTADO FINAL ===\n");
    
    // Contando vitórias para determinar a carta vencedora
    int vitorias1 = 0;
    int vitorias2 = 0;
    
    if (populacao1 > populacao2) vitorias1++;
    else if (populacao2 > populacao1) vitorias2++;
    
    if (area1 > area2) vitorias1++;
    else if (area2 > area1) vitorias2++;
    
    if (pib1 > pib2) vitorias1++;
    else if (pib2 > pib1) vitorias2++;
    
    if (pontos_turisticos1 > pontos_turisticos2) vitorias1++;
    else if (pontos_turisticos2 > pontos_turisticos1) vitorias2++;
    
    // Determinando o vencedor
    if (vitorias1 > vitorias2) {
        printf("A cidade vencedora é: %s\n", nome1);
        printf("Vitórias: %d x %d\n", vitorias1, vitorias2);
    } else if (vitorias2 > vitorias1) {
        printf("A cidade vencedora é: %s\n", nome2);
        printf("Vitórias: %d x %d\n", vitorias2, vitorias1);
    } else {
        printf("Empate! As duas cidades estão equilibradas.\n");
        printf("Vitórias: %d x %d\n", vitorias1, vitorias2);
    }
    
    return 0;
}
