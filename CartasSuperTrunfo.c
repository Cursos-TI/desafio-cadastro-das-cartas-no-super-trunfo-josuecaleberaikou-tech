#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int populacao, pontos;//inseri as variaveis 
    char estado[50];
    char codigo[50];
    char cidade[50];
    float area; 
    float pib;
    float PIB_per_capita, densidade_populacinal;

        printf("CARTA 1\n");// solicitei o pedido das informações e usei o scanf para que o usuario inseri-se as informações

        printf("Escreva o estado: \n");
        scanf("%s", estado);

        printf("Digite o codigo da carta:\n");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade);

        printf("Insira a população: \n");
        scanf(" %d", &populacao);

        printf("Insira a Área do estado: \n");
        scanf(" %f", &area);
        
        printf("Insira o PIB: \n");
        scanf(" %f", &pib);

        printf("Quantidade de pontos turisticos: \n");
        scanf(" %d", &pontos);
        printf("\n");
       
       
        printf("CARTA 01\n"); // E aqui foi imprimido todas as informações das pelo usuario
        printf("Estado: %s\n", estado);
        printf("Codigo: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Numeros de Pontos Turisticos: %d\n", pontos);
       
       densidade_populacinal = (populacao / area); //foi inserido os operadores matematicos.
        PIB_per_capita = (pib / populacao);

        printf("Densidade Populacional:%.2f\n", densidade_populacinal);//solicitamos a impressão dos resultados com duas casas decimais.
        printf("Pib per Capita:%.2f\n\n", PIB_per_capita);


        printf("CARTA 2\n");

        printf("Escreva o estado: \n");
        scanf("%s", estado);

        printf("Digite o codigo da carta:\n");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade);

        printf("Insira a população: \n");
        scanf(" %d", &populacao);

        printf("Insira a Área do estado: \n");
        scanf(" %f", &area);
        
        printf("Insira o PIB: \n");
        scanf(" %f", &pib);

        printf("Quantidade de pontos turisticos: \n");
        scanf(" %d", &pontos);
        printf("\n");
       
       
        printf("CARTA 02\n");
        printf("Estado: %s\n", estado);
        printf("Codigo: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Numeros de Pontos Turisticos: %d\n", pontos);
        printf("Densidade Populacional:%.2f\n", densidade_populacinal);
        printf("Pib per Capita:%.2f\n", PIB_per_capita);
        


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
