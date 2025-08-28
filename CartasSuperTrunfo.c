#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    unsigned long int populacao1, populacao2;
    int pontos1,pontos2;//inseri as variaveis 
    char estado[50];
    char codigo[50];
    char cidade[50];
    float area1, area2; 
    float pib1, pib2;
    float PIB_per_capita1, PIB_per_capita2, densidade_populacional1, densidade_populacional2;
    float Super_Poder1, Super_Poder2;

        printf("CARTA 1\n");// solicitei o pedido das informações e usei o scanf para que o usuario inseri-se as informações

        printf("Escreva o estado: \n");
        scanf("%s", estado);

        printf("Digite o codigo da carta:\n");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade);

        printf("Insira a população: \n");
        scanf(" %u", &populacao1);

        printf("Insira a Área do estado: \n");
        scanf(" %f", &area1);
        
        printf("Insira o PIB: \n");
        scanf(" %f", &pib1);

        printf("Quantidade de pontos turisticos: \n");
        scanf(" %d", &pontos1);
        printf("\n");
       
       
        printf("CARTA 01\n"); // E aqui foi imprimido todas as informações das pelo usuario
        printf("Estado: %s\n", estado);
        printf("Codigo: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %u\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Numeros de Pontos Turisticos: %d\n", pontos1);
       
       densidade_populacional1 = (area1/ populacao1); //foi inserido os operadores matematicos.
        PIB_per_capita1 = (pib1 / populacao1);

        printf("Densidade Populacional:%.2f\n", densidade_populacional1);//solicitamos a impressão dos resultados com duas casas decimais.
        printf("Pib per Capita:%.2f\n", PIB_per_capita1);

          float densidadecalculada1= (1/ densidade_populacional1);
          float superpodercarta1 = (populacao1 + area1 + pib1 + pontos1 + PIB_per_capita1 + densidade_populacional1);
          printf("Super poder: %.2f\n\n", superpodercarta1);


        printf("CARTA 2\n");

        printf("Escreva o estado: \n");
        scanf("%s", estado);

        printf("Digite o codigo da carta:\n");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade);

        printf("Insira a população: \n");
        scanf(" %u", &populacao2);

        printf("Insira a Área do estado: \n");
        scanf(" %f", &area2);
        
        printf("Insira o PIB: \n");
        scanf(" %f", &pib2);

        printf("Quantidade de pontos turisticos: \n");
        scanf(" %d", &pontos2);
        printf("\n");
       
       
        printf("CARTA 02\n");
        printf("Estado: %s\n", estado);
        printf("Codigo: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %u\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Numeros de Pontos Turisticos: %d\n", pontos2);
       
        densidade_populacional2 = (area2/ populacao2); //foi inserido os operadores matematicos.
        PIB_per_capita2 = (pib2 / populacao2);
       
        printf("Densidade Populacional:%.2f\n", densidade_populacional2);
        printf("Pib per Capita:%.2f\n", PIB_per_capita2);

        // Calcular todas as variaveis 

        float densidadecalculada2= (1/ densidade_populacional2);
        float superpodercarta2 = (populacao2 + area2 + pib2 + pontos2 + PIB_per_capita2 + 1/densidade_populacional2);

        printf("Super poder: %.2f\n\n", superpodercarta2);

        // colocar o duelo e as vencedoras de cada carta

        printf("Comparação das cartas:\n");

        printf("população: %u\n", (populacao1>=pontos2));
        printf("Aréa: %d\n", (area1>=area2));
        printf("PIB: %d\n",(pib1>=pib2));
        printf("Ponto Turistico: %d\n", (pontos1>=pontos2));
        printf("Densidade populacional: %d\n", (densidade_populacional1>=densidade_populacional2));
        printf("PIB per Capita: %d\n", (PIB_per_capita1>=PIB_per_capita2));
        printf("Super Poder: %d\n", (Super_Poder1>=Super_Poder2));
        
        


        return 0;






   
   
   
   
   
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
