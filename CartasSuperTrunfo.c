#include <stdio.h>
    int main(){


         // VÁRIÁVEIS CARTA 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    double pib1;
    int pontos_turisticos1;
        

        // VÁRIÁVEIS CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
               

                 // CADASTRO DA CARTA 1
    printf("--- Cadastro das cartas 1 --- 1\n");

    printf("Digite uma letra do seu Estado de A-H: ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (EX: A01): ");
    scanf("%s", codigo1);

    printf("Digite uma cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Qual a área dessa cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%e", &pib1);

    printf("Digite quantos pontos turisticos tem nessa cidade");
    scanf("%d", &pontos_turisticos1);


                  // CADASTRO DE CARTAS 2
    
    printf("--- Cadastro das cartas 2 --- \n");

    printf("Digite uma letra do seu Estado de A-H: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (EX: A01): ");
    scanf("%s", codigo2);

    printf("Digite uma cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Qual a área dessa cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%e", &pib2);

    printf("Digite quantos pontos turisticos tem nessa cidade");
    scanf("%d", &pontos_turisticos2);

 
              // EXIBIR INFORMAÇÕES NA TELA DO USUÁRIO
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB(PRODUTO INTERNO BRUTO): %e\n", pib1);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB(PRODUTO INTERNO BRUTO): %e\n", pib2);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos2);

    return 0;

 }
