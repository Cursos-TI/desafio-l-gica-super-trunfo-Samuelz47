#include <stdio.h>
#include <string.h> // incluindo a biblioteca string.h para pegar os nomes compostos de cidades
int main() {
    char estado1[3], cidade1[30], cod1[4];
    float area1, pib1;
    int turisticos1;
    char estado2[3], cidade2[30], cod2[4];
    float area2, pib2;
    int turisticos2;
    int pop1, pop2;

    printf("Digite a letra do estado da carta 1:\n");
    scanf("%s", &estado1);
    estado1[strcspn(estado1, "\n")] = 0;
    printf("Digite o código da carta 1:\n");
    scanf("%s", &cod1);
    cod1[strcspn(cod1, "\n")] = 0;
    printf("Digite o nome da cidade da carta 1: \n");
    getchar(); // Limpa o '\n' antes de fgets()
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o '\n' capturado pelo fgets() 
    printf("Digite a população da carta 1:\n");
    scanf("%d", &pop1);
    printf("Digite a área em km da carta 1:\n");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões da carta 1:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1:\n");
    scanf("%d", &turisticos1);

    float Densidade1 = (float) pop1 / area1 ;
    float PIBPC1 = (float) pib1 * 1000000000 / pop1 ;

    printf("\nDigite a letra do estado da carta 2:\n");
    scanf("%s", &estado2);
    estado2[strcspn(estado2, "\n")] = 0;
    printf("Digite o código da carta 2:\n");
    scanf("%s", &cod2);
    cod2[strcspn(cod2, "\n")] = 0;
    printf("Digite o nome da cidade da carta 2: \n");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Digite a população da carta 2:\n");
    scanf("%d", &pop2);
    printf("Digite a área em km da carta 2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões da carta 2:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2:\n");
    scanf("%d", &turisticos2);
    printf("\n");

    float Densidade2 = (float) pop2 / area2 ;
    float PIBPC2 = (float) pib2 * 1000000000 / pop2 ;

    long double SuperP1 = (long double) pop1 + area1 + pib1 + turisticos1 + PIBPC1 - Densidade1;
    long double SuperP2 = (long double) pop2 + area2 + pib2 + turisticos2 + PIBPC2 - Densidade2;

    if (pop1 > pop2)
    {   
        printf("Comparação de cartas (Atributo: População)\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pop1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pop2);
        printf("Carta 1 (%s) venceu!", cidade1);
    }else{
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pop1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pop2);
        printf("Carta 2 (%s) venceu!\n", cidade2);
    }
    
return 0;
}