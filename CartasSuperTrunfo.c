#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    unsigned long int populacao1, populacao2;
    int pontos1,pontos2,opcao;//inseri as variaveis 
    char estado[50];
    char codigo[50];
    char cidade[50];
    float area1, area2; 
    float pib1, pib2;
    float PIB_per_capita1, PIB_per_capita2, densidade_populacional1, densidade_populacional2;
    float Super_Poder1, Super_Poder2;


    printf("### Vamos começar o Jogo!###\n");
    printf("Escolha uma das opções a seguir.\n");
    printf("1. Começar o Jogo!\n");
    printf("2. Regras do Jogo!\n");
    printf("3. Sair do Jogo!\n");
    printf("Escolha uma das Alternativas!\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("vamos começar o jogo!\n\n");
      break;
    case 2:
      printf("Principal regra é se divertir!!\n");
      break;
    case 3:
      printf("Saindo do Jogo...\n");
      break;
    
    default:
      printf("Opção invalida!\n");
      break;
    }
    


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

        printf("Duelo das cartas:\n\n");

        printf("População:\n");

       if (populacao1 > populacao2){
          printf("População da carta 1 venceu!\n\n");
       }  else if (populacao1 < populacao2)
       {
          printf("População da carta 2 venceu!\n\n");
       } else {
          printf("As carta empataram!\n\n");
       }
       
       printf("Area:\n");

        if (area1 > area2){
           printf("Area da carta 1 venceu!\n\n");
        } else if (area1 < area2){
          printf("Area da carta 2 venceu!\n\n");
        } else{
          printf("As cartas empataram!\n\n");
        }

        printf("PIB:\n");

        if (pib1 > pib2){
           printf("PIB da carta 1 venceu!\n\n");
        } else if (pib1 < pib2)
        {
          printf("O PIB da carta 2 venceu!\n\n");
        } else {
          printf("As cartas empataram!\n\n");
        }

        printf("Pontos turisticos:\n");

        if (pontos1 > pontos2){
          printf("Pontos Turisticos da carta 1 venceu!\n\n");
        } else if (pontos1 < pontos2){
          printf("Os pontos da carta 2 venceu!\n\n");
        } else {
          printf("As cartas empataram!\n\n");
        }

        printf("Densidade populacional:\n");

        if (densidade_populacional1 < densidade_populacional2){
          printf("Densidade Populacional da carta 1 venceu!\n\n");
        } else if (densidade_populacional1 > densidade_populacional2)
        {
          printf("Densidade Populacional da carta 2 venceu!\n\n");
        } else{
          printf("As cartas empataram!\n\n");
        }

        printf("PIB per Capita:\n");

        if (PIB_per_capita1 > PIB_per_capita2){
          printf("PIB per Capita da carta 1 venceu!\n\n");
        } else if (PIB_per_capita1 < PIB_per_capita2)
        {
          printf("PIB per Capita da carta 2 venceu!\n\n");
        } else {
          printf("As cartas empataram!\n\n");
        }
        
        printf("Super Poder:\n");

        if (superpodercarta1 > superpodercarta2){
          printf("Super Poder da carta 1 venceu!\n\n");
        } else if (Super_Poder1 < superpodercarta2)
        {
          printf("O super poder da carta 2 venceu!\n\n");
        } else {
          printf("As cartas empataram!\n\n");
        }

        if (Super_Poder1 > Super_Poder2){
          printf("PARABENS, A CARTA 1 FOI A VENCEDORA!!!\n");
        } else if (Super_Poder1 < Super_Poder2)
        {
          printf("PARABENS, A CARTA 2 FOI A VENCEDORA!!!\n");
        } else {
          printf("UAU, AS DUAS CARTAS EMPATARAM!!!\n");
        }

      


        
        


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
