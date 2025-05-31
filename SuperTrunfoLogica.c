#include <stdio.h>
#include <string.h>

int main (){
   //Variáveis da carta 1
    char estado_letra1, codigo1 [4], cidade_nome1[50]; // Variáveis de caracteres ou strings
    int pontosturisticos1; // Variáveis de números inteiros
    unsigned long int populacao1;
    float area1, PIB1; //Variáveis de números decimais
    float densidadepopulacional1, PIBpercapita1; //Variáveis da densidade populacional e do PIB per capita da carta 1
    double superpoder1; //Variáveis do super poder da cidade

    //Variáveis da carta 2
    char estado_letra2, codigo2 [4], cidade_nome2[50];
    int populacao2, pontosturisticos2;
    float area2, PIB2;
    float densidadepopulacional2, PIBpercapita2; //Variáveis da densidade populacional e do PIB per capita da carta 2
    double superpoder2; //Variáveis do super poder da cidade

    //Variáveis dos resultados das comparacoes das cartas
    int resultadopopulacao, resultadoarea, resultadoPIB, resultadopontosturisticos, resultadodensidadepopulacional, resultadoPIBpercapita, resultadosuperpoder;

    //Variáveis dos resultados das opcoes
    int opcao;

    //Opções de jogo
    printf("---Jogo Super Trunfo---\n");
    printf("Selecione um das opções abaixo:\n");
    printf("1. Jogar\n");
    printf("2. Como jogar?\n");
    printf("3. Sair do jogo\n");
    scanf(" %d", &opcao);

    switch (opcao)
    {
    //Caso o usuario selecione a opção 1
    case 1:
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
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos1);

    // Cálculo da densidade populacional e PIB per capita da carta 1
    densidadepopulacional1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;
    
    // Cálculo do super poder da carta 1

    superpoder1 = (double) populacao1 + PIB1 + area1 + (double) pontosturisticos1 + PIBpercapita1 + (1 / densidadepopulacional1);

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
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da densidade populacional e PIB per capita da carta 2
    densidadepopulacional2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;

    //Calculo do super poder da carta 2
    superpoder2 = (double) populacao2 + PIB2 + area2 + (double) pontosturisticos2 + PIBpercapita2 + (1 / densidadepopulacional2);

    //Exibição da carta 1
    printf("\n---Carta 01---\n");
    printf("Estado: %c\n", estado_letra1); //Exibição da letra do estado
    printf("Código: %s\n", codigo1); //Exibição do código do estado
    printf("Cidade: %s\n", cidade_nome1); //Exibição do nome da cidade
    printf("População: %lu\n", populacao1); //Exibição da população da cidade
    printf("Área: %.2fkm²\n", area1); //Exibição da área da cidade
    printf("PIB: %.2f bilhões de reais\n", PIB1); //Exibição do PIB da cidade
    printf("Número de pontos turísticos: %d\n", pontosturisticos1); //Exibição dos pontos turisticos 
    printf("Densidade populacional: %.2fhab/km²\n", densidadepopulacional1); //Exibição da densidade populacional da cidade
    printf("PIB per capita: %.2f reais\n", PIBpercapita1); //Exibição do PIB per capita da cidade
    printf("O super poder da carta 1 é: %.2f\n", superpoder1); //Exibição do super poder da carta

    //Exibição da carta 2
    printf("\n---Carta 02---\n");
    printf("Estado: %c\n", estado_letra2); 
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade_nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2fhab/km²\n", densidadepopulacional2); 
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);
    printf("O super poder da carta 2 é: %.2f\n", superpoder2);

    //Comparação das cartas

    resultadopopulacao = populacao1 > populacao2; //Resultado da carta vencedora da categoria população
    resultadoarea = area1 > area2; //Resultado da carta vencedora da categoria área
    resultadoPIB = PIB1 > PIB2; //Resultado da carta vencedora da categoria PIB
    resultadopontosturisticos = pontosturisticos1 > pontosturisticos2; //Resultado da carta vencedora da categoria pontos turísticos 
    resultadodensidadepopulacional = densidadepopulacional1 < densidadepopulacional2; //Resultado da carta vencedora da categoria densidade populacional
    resultadoPIBpercapita = PIBpercapita1 > PIBpercapita2; //Resultado da carta vencedora da categoria PIB per capita
    resultadosuperpoder = superpoder1 > superpoder2; //Resultado da carta vencedora da categoria super poder

    //Solicitando ao usuario que escolha se quer comparar 1 carta
    printf("Comparação das cartas\n");
    printf("1. Comparar todos os atributos das cartas\n");
    printf("2. Comparar atributos isolados das cartas\n");
    scanf("%d", &opcao);

    //Switch aninhado para exibir a comparação das cartas
    switch (opcao)
    {
    case 1:
   //Exibição da comparação das cartas 
    printf("\n---Comparação de cartas---\n");
    printf("População: %s\n", resultadopopulacao ? "Carta 1 vence" : "Carta 2 vence");
    printf("Área: %s\n", resultadoarea ? "Carta 1 vence" : "Carta 2 vence");
    printf("PIB: %s\n", resultadoPIB ? "Carta 1 vence" : "Carta 2 vence");
    printf("Pontos turísticos: %s\n", resultadopontosturisticos ? "Carta 1 vence" : "Carta 2 vence");
    printf("Densidade populacional: %s\n", resultadodensidadepopulacional ? "Carta 1 vence" : "Carta 2 vence");
    printf("PIB per capita: %s\n", resultadoPIBpercapita ? "Carta 1 vence" : "Carta 2 vence");
    printf("Super poder: %s\n", resultadosuperpoder ? "Carta 1 vence" : "Carta 2 vence");

        break;

    case 2:
    //Exibição de comparação única
    printf("Selecione o atributo que deseja comparar\n");
    printf("1. População\n");
    printf("2. Área\n");   
    printf("3. PIB\n");   
    printf("4. Pontos turísticos\n");   
    printf("5. Densidade populacional\n");   
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    scanf("%d", opcao);          

        //switch aninhado apara exibir as comparações das cartas de maneira individual
        switch (opcao)
        {
        case 1:
            printf("População: %s\n", resultadopopulacao ? "Carta 1 vence" : "Carta 2 vence");
        break;

        case 2:
            printf("Área: %s\n", resultadoarea ? "Carta 1 vence" : "Carta 2 vence");
        break;

        case 3:
            printf("PIB: %s\n", resultadoPIB ? "Carta 1 vence" : "Carta 2 vence");
            break;
        case 4:
            printf("Pontos turísticos: %s\n", resultadopontosturisticos ? "Carta 1 vence" : "Carta 2 vence");
            break;

        case 5:
            printf("Densidade populacional: %s\n", resultadodensidadepopulacional ? "Carta 1 vence" : "Carta 2 vence");
            break;

        case 6:
            printf("PIB per capita: %s\n", resultadoPIBpercapita ? "Carta 1 vence" : "Carta 2 vence");
            break;

        case 7:
            printf("Super poder: %s\n", resultadosuperpoder ? "Carta 1 vence" : "Carta 2 vence");
            break;
        
        default:
        printf("Opção invalida. Gerando todos os comparativos\n");
        printf("\n---Comparação de cartas---\n");
        printf("População: %s\n", resultadopopulacao ? "Carta 1 vence" : "Carta 2 vence");
        printf("Área: %s\n", resultadoarea ? "Carta 1 vence" : "Carta 2 vence");
        printf("PIB: %s\n", resultadoPIB ? "Carta 1 vence" : "Carta 2 vence");
        printf("Pontos turísticos: %s\n", resultadopontosturisticos ? "Carta 1 vence" : "Carta 2 vence");
        printf("Densidade populacional: %s\n", resultadodensidadepopulacional ? "Carta 1 vence" : "Carta 2 vence");
        printf("PIB per capita: %s\n", resultadoPIBpercapita ? "Carta 1 vence" : "Carta 2 vence");
        printf("Super poder: %s\n", resultadosuperpoder ? "Carta 1 vence" : "Carta 2 vence");
            break;
        }
        break;
    
    default:
        break;
    }

        break;
    case 2:
    printf("---Como jogar---\n");
    printf("Comece digitando as informações das cartas conforme o solicitado, depois selecione se quer comparar os atributos das cartas todos de uma vez ou separadamente. A carta vencedora é indicada pelo super poder.");
        break;
    case 3:
    printf("---Saindo do Jogo---\n");
        break;
    default:
        printf("Erro: opção inválida");
        break;
    }


    return 0; //Boa prática retornar a 0
}     