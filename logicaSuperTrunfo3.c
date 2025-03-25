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
    int opcao1, opcao2;

    printf ("### SUPER TRUNFO ###\n\n\n");
    printf ("Escolha o primeiro atributo que deverá ser comparado\n\n");
    printf ("1. Densidade demográfica\n");
    printf ("2. População\n");
    printf ("3. Área\n");
    printf ("4. PIB\n");
    printf ("5. Número de pontos turísticos\n");
    scanf ("%d", &opcao1);

    printf ("### SUPER TRUNFO ###\n\n\n");
    printf ("Escolha o segundo atributo que deverá ser comparado\n\n");
    printf ("1. Densidade demográfica\n");
    printf ("2. População\n");
    printf ("3. Área\n");
    printf ("4. PIB\n");
    printf ("5. Número de pontos turísticos\n");
    scanf ("%d", &opcao2);
    float comparacao1carta1, comparacao1carta2, comparacao2carta1, comparacao2carta2;
    if (opcao1 == opcao2){
        printf ("### SUPER TRUNFO ###\n\n\n");
        printf ("1. Densidade demográfica\n");
        printf ("2. População\n");
        printf ("3. Área\n");
        printf ("4. PIB\n");
        printf ("5. Número de pontos turísticos\n");
        printf ("Escolha inválida! Digite novamente atributo que deverá ser comparado\n\n");
        scanf ("%d", &opcao2);
    }else{
        switch (opcao1){                                            // mapeando os valores para as escolhas
        case 1:
            comparacao1carta1 = Densidade1 ;
            comparacao1carta2 = Densidade2 ;
            break;
        case 2:
            comparacao1carta1 = pop1;
            comparacao1carta2 = pop2;
            break;
        case 3:
            comparacao1carta1 = area1;
            comparacao1carta2 = area2;
        break;
        case 4:
            comparacao1carta1 = pib1;
            comparacao1carta2 = pib2;
        break;
        case 5:
            comparacao1carta1 = turisticos1;
            comparacao1carta2 = turisticos2;
        break;
        default:
            return 1;
        }
        switch (opcao2){
        case 1:
            comparacao2carta1 = Densidade1;
            comparacao2carta2 = Densidade2;
            break;
        case 2:
            comparacao2carta1 = pop1;
            comparacao2carta2 = pop2;
            break;
        case 3:
            comparacao2carta1 = area1;
            comparacao2carta2 = area2;
        break;
        case 4:
            comparacao2carta1 = pib1;
            comparacao2carta2 = pib2;
            break;
        case 5:
            comparacao2carta1 = turisticos1;
            comparacao2carta2 = turisticos2;
            break;
        default:
            return 1;
        }

        printf ("### SUPER TRUNFO ###\n\n\n");
        printf("Comparação de cartas 1\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, comparacao1carta1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, comparacao1carta2);

        if(opcao1 == 1){
            if(comparacao1carta1 < comparacao1carta2){              // Comparação inversa da Densidade
                printf("Carta 1 venceu no atributo 1!\n");
            } else if(comparacao1carta1 > comparacao1carta2){
                    printf("Carta 2 venceu no atributo 1!\n");
            } else{
                printf("Empate no atributo 1!\n");
            } 
        }else {                                                    // Para outros atributos, quem tem o maior valor vence
            if (comparacao1carta1 > comparacao1carta2) {
                printf("Carta 1 venceu no atributo 1!\n");
            } else if (comparacao1carta1 < comparacao1carta2) {
                printf("Carta 2 venceu no atributo 1!\n");
            } else {
                printf("Empate no atributo 1!\n");
            }
        }
    }
    float somacarta1 = comparacao1carta1 + comparacao2carta1;
    float somacarta2 = comparacao1carta2 + comparacao2carta2;
    printf("Comparação de cartas 2\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, comparacao2carta1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, comparacao2carta2);
    if(opcao2 == 1){
        if(comparacao2carta1 < comparacao2carta2 ){              
            printf("Carta 1 venceu no atributo 1!\n");
        } else if(comparacao2carta1 > comparacao2carta2){
                printf("Carta 2 venceu no atributo 1!\n");
        } else{
                printf("Empate no atributo 1!\n");
            } 
    }else {                                                 
        if (comparacao2carta1 > comparacao2carta2 ) {
                printf("Carta 1 venceu no atributo 1!\n");
        } else if (comparacao2carta1 < comparacao2carta2 ) {
            printf("Carta 2 venceu no atributo 1!\n");
        } else {
            printf("Empate no atributo 1!\n");
        }
    }
    printf("Comparação de cartas GERAL");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, somacarta1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, somacarta2);
    int resultadosoma;
    resultadosoma = (somacarta1 > somacarta2) ? 1 : 0 ;
    if(resultadosoma == 1){
        printf("Carta 1 venceu!\n");
    } else if (resultadosoma == 0){
        printf("Carta 2 venceu!\n");
    } else{
        printf("Empate!\n");
    }
return 0;
}