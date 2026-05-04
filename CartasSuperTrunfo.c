#include <stdio.h>
    

    int main(){


         // VÁRIÁVEIS CARTA 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    unsigned int populacao1;
    float area1;
    long long int pib1;
    unsigned int pontos_turisticos1;
    double densidade_populacional1;
    double pib_per_capita1;
    
        

        // VÁRIÁVEIS CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    unsigned int populacao2;
    float area2;
    long long int pib2;
    unsigned int pontos_turisticos2;
    double densidade_populacional2;
    double pib_per_capita2;
    
               

                 // CADASTRO DA CARTA 1
    printf("--- Cadastro das cartas 1 --- 1\n");

    printf("Digite uma letra do seu Estado de A-H: ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (EX: A01): ");
    scanf("%s", codigo1);

    printf("Digite uma cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%u", &populacao1);

    printf("Qual a área dessa cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%lld", &pib1);

    printf("Digite quantos pontos turisticos tem nessa cidade");
    scanf("%u", &pontos_turisticos1);
    
    // DECLARANDO A VARIÁVEL SUPER PODER
    float area_por_habitante1 = area1 / populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1); 
    
    // CADASTRO DE CARTAS 2
    
    printf("--- Cadastro das cartas 2 --- \n");

    printf("Digite uma letra do seu Estado de A-H: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (EX: A01): ");
    scanf("%s", codigo2);

    printf("Digite uma cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lld", &populacao2);

    printf("Qual a área dessa cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%lld", &pib2);

    printf("Digite quantos pontos turisticos tem nessa cidade");
    scanf("%u", &pontos_turisticos2);

        // DECLARANDO A VARIÁVEL SUPER PODER
    float area_por_habitante2 = area2 / populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2); 

 
              // EXIBIR INFORMAÇÕES NA TELA DO USUÁRIO
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB(PRODUTO INTERNO BRUTO): %lld\n", pib1);
    printf("Número de pontos turisticos: %u\n", pontos_turisticos1);
    
    densidade_populacional1 = populacao1 / area1;
    printf("O a densidade populacional é: %lf\n", densidade_populacional1);
    
    pib_per_capita1 = pib1 / populacao1;
    printf("O PIB per capita é: %lf\n", pib_per_capita1);



    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB(PRODUTO INTERNO BRUTO): %lld\n", pib2);
    printf("Número de pontos turisticos: %u\n", pontos_turisticos2);

    
    printf("--CARTA 1--\n")
    double densidade_populacional1 = (double) populacao1 / area1;
    printf("O a densidade populacional da cidade %s é: %lf\n", cidade1, densidade_populacional1);
    
    double pib_per_capita1 = pib1 / populacao1;
    printf("O PIB per capita da cidade %s é: %lf\n", cidade1, pib_per_capita1);
    
    printf("--CARTA 2--\n")
    double densidade_populacional2 = (double) populacao2 / area2;
    printf("O a densidade populacional da cidade %s é: %lf\n", cidade2, densidade_populacional2);
    
    double pib_per_capita2 = pib2 / populacao2;
   printf("O PIB per capita da cidade %s é: %lf\n", cidade2, pib_per_capita2);

   printf("Quem tem mais super poder é o vencedor\n");
   printf("--1 para verdadeiro, e 0 para falso");
   printf("A cidade da carta 1 %s é maior que a cidade da carta 2 %s: %d\n", cidade1, cidade2, (superPoder1 > superPoder2));
   printf("A cidade da carta 1 %s é menor que a cidade da carta 2 %s: %d\n", cidade1, cidade2, (superPoder1 < superPoder2));
    
             // COMPARANDOS A CARTA 1 VS A CARTA 2
     
             //comparando população
   if(populacao1 > populacao2){
      printf("A cidade %s venceu!!!", cidade1);
   }else{
      printf("A cidade %s venceu!!!", cidade2);
   }
            // comparando area
   if(area1 > area2){
      printf("A cidade %s venceu!!!", cidade1);
   }else{
      printf("A cidade %s venceu!!!", cidade2);
   }

          // comparando pib
    if(pib1 > pib2){
       printf("A cidade %s venceu!!!", cidade1);
    }else {
       printf("A cidade %s venceu!!!", cidade2);
    }
          
          // comparando pontos turisticos
    if(pontos_turisticos1 > pontos_turisticos2){
       printf("A cidade %s venceu!!!", cidade1);
    }
       printf("A cidade %s venceu!!!", cidade2);

          // comparando super poder
    if(superPoder1 > superPoder2){
       printf("A cidade %s venceu!!!", cidade1);
    }else{
       printf("A cidade %s venceu!!!", cidade2);
    }

return 0;

 }