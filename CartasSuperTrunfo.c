#include <stdio.h>
#include <string.h>

int main (){
   //Variáveis da carta 1
    char estado_letra1, codigo1 [4], cidade_nome1[50]; // Variáveis de caracteres ou strings
    int populacao1, pontosturisticos1; // Variáveis de números inteiros
    float area1, PIB1; //Variáveis de números decimais

    //Variáveis da carta 2
    char estado_letra2, codigo2 [4], cidade_nome2[50];
    int populacao2, pontosturisticos2;
    float area2, PIB2;
    
    //Entrada de dados da carta 1
    printf("---Carta 1---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado_letra1);

    printf("Digite o código do Estado (ex: A01): ");
    scanf("%4s", codigo1); //"%4s" para otimizar o código

    getchar(); //Para limpar o buffer antes de usar o fgets

    printf("Digite o nome da cidade: ");
    fgets(cidade_nome1, sizeof(cidade_nome1), stdin); //fgets para pegar palavras com espaços como por exemplo Belo Horizonte
    cidade_nome1[strcspn(cidade_nome1, "\n")] = '\0';  //Para remover o '\n'

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos1);
    
    //Entrada de dados da carta 2
    printf("\n---Carta 02---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado_letra2);

    printf("Digite o código do Estado (ex: A01): ");
    scanf("%4s", codigo2);
    
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade_nome2, sizeof(cidade_nome2), stdin);
    cidade_nome2[strcspn(cidade_nome2, "\n")] = '\0';  // Remover o '\n'

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos2);

    //Exibição da carta 1
    printf("\n---Carta 01---\n");
    printf("Estado: %c\n", estado_letra1); //Exibição da letra do estado
    printf("Código: %s\n", codigo1); //Exibição do código do estado
    printf("Cidade: %s\n", cidade_nome1); //Exibição do nome da cidade
    printf("População: %d\n", populacao1); //Exibição da população da cidade
    printf("Área: %.2fkm²\n", area1); //Exibição da área da cidade
    printf("PIB: %.2f bilhões de reais\n", PIB1); //Exibição do PIB da cidade
    printf("Número de pontos turísticos: %d\n", pontosturisticos1); //Exibição dos pontos turisticos 


    //Exibição da carta 2
    printf("\n---Carta 02---\n");
    printf("Estado: %c\n", estado_letra2); 
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade_nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
        
 
    return 0; //Boa prática retornar a 0
}     
