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

    int opcao;

    printf ("### SUPER TRUNFO ###\n\n\n");
    printf ("Escolha qual atributo deverá ser comparado\n\n");
    printf ("1. Nome da cidade (apenas irá exibir o nome)\n");
    printf ("2. População\n");
    printf ("3. Área\n");
    printf ("4. PIB\n");
    printf ("5. Número de pontos turísticos\n");
    printf ("6. Densidade demográfica\n");
    scanf ("%d", &opcao);

    switch (opcao){
    case 1:
        printf ("### SUPER TRUNFO ###\n\n\n");
        printf ("Carta 1 - %s", cidade1);
        printf ("Carta 2 - %s", cidade2);
        break;
    case 2:
        printf ("### SUPER TRUNFO ###\n\n\n");
        printf("Comparação de cartas (Atributo: População)\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pop1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pop2);        
        if (pop1 > pop2)
        {   
            printf("Carta 1 (%s) venceu!", estado1);
        }else if (pop2 > pop1)
        {
            printf("Carta 2 (%s) venceu!\n", estado2);
        }else
        {
            printf("Cartas empatadas neste atributo.\n");
        }
    break;
    case 3:
        printf ("### SUPER TRUNFO ###\n\n\n");
        printf("Comparação de cartas (Atributo: Área)\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        if (area1 > area2)
        {   
            printf("Carta 1 (%s) venceu!", estado1);
        }else if (area2 > area1)
        {
            printf("Carta 2 (%s) venceu!\n", estado2);
        }else
        {
            printf("Cartas empatadas neste atributo.\n");
        }    
    break; 
    case 4:
        printf ("### SUPER TRUNFO ###\n\n\n");
        printf("Comparação de cartas (Atributo: PIB)\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
        if (pib1 > pib2)
        {   
            printf("Carta 1 (%s) venceu!", estado1);
        }else if (pib2 > pib1)
        {
            printf("Carta 2 (%s) venceu!\n", estado2);
        }else
        {
            printf("Cartas empatadas neste atributo.\n");
        }    
    break;
    case 5:
        printf ("### SUPER TRUNFO ###\n\n\n");
        printf("Comparação de cartas (Atributo: Número de pontos turísticos)\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, turisticos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, turisticos2);
        if (turisticos1 > turisticos2)
        {   
            printf("Carta 1 (%s) venceu!", estado1);
        }else if (turisticos2 > turisticos1)
        {
            printf("Carta 2 (%s) venceu!\n", estado2);
        }else
        {
            printf("Cartas empatadas neste atributo.\n");
        }    
    break;
    case 6:
    printf ("### SUPER TRUNFO ###\n\n\n");
    printf("Comparação de cartas (Atributo: Densidade demográfica)\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, Densidade1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, Densidade2);
        if (Densidade2 > Densidade1)
        {   
            printf("Carta 1 (%s) venceu!", estado1);
        }else if (Densidade1 > Densidade2)
        {
            printf("Carta 2 (%s) venceu!\n", estado2);
        }else
        {
            printf("Cartas empatadas neste atributo.\n");
        }    
    break;                       
    default:
        printf ("### SUPER TRUNFO ###\n\n\n");
        printf ("Opção inválida. Tente novamente!");
    }
    return 0;
}