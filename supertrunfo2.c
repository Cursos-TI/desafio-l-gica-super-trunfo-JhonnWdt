#include <stdio.h>
#include <string.h>

int main() {
    int populacao1, populacao2, turismo1, turismo2;
    float pib1, pib2, area1, area2, capita1, capita2, densidade1, densidade2;       //Aqui são definidas as variaveis.
    char nome1[50], nome2[50];
    int opcao;

    printf(" *** Super Trunfo Países ***\n");

    printf("\nJogador 1, insira as informações da sua carta: \n");         //Tive ajuda do chat gpt nessa parte, pois utilizando apenas o comando printf e scanf, ao digitar um nome de cidade com nome composto, o programa zerava automaticamente os valores das outras variaveis.
    printf("\nNome da Cidade: \n");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("População: \n");    
    scanf("%d", &populacao1);                           // aqui o comando printf exibe a mensagem ao usuario, enquanto "%d, %f e %s" vão armazenar os tipos de dados inseridos pelo usuario, sendo inteiros, um float ou string.
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo1);
    printf("Área da cidade: \n");
    scanf("%f", &area1);
    capita1 = pib1 / populacao1;
    densidade1 = (float)populacao1 / area1;
    getchar(); // Limpar buffer

    // Entradas do Jogador 2
    printf("\nJogador 2, insira as informações da sua carta: \n");
    printf("\nNome da Cidade: \n");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("População: \n");
    scanf("%d", &populacao2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);
    printf("Área da cidade: \n");
    scanf("%f", &area2);
    capita2 = pib2 / populacao2;
    densidade2 = (float)populacao2 / area2;
    getchar(); // Limpar buffer

    // Menu de comparação
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1. População\n");
    printf("2. PIB\n");                                             //aqui é criada a lista para o menu, que sera exibido ao usuario e que permitira a escolha de qual atributo sera comparado.
    printf("3. Número de Pontos Turísticos\n");
    printf("4. Área da Cidade\n");                  
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Escolha uma opção (1-6): ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: // Comparar População
            printf("\n-- Comparando População ---\n");
            printf("\nPopulação de %s: %d\n", nome1, populacao1);
            printf("População de %s: %d\n", nome2, populacao2);            
            if(populacao1 > populacao2) {
                printf("\nJogador 1 vence com a maior população!\n");
            } else if(populacao2 > populacao1) {
                printf("\nJogador 2 vence com a maior população!\n");
            } else {
                printf("Empate! Ambas as cidades têm a mesma população.\n");
            }
            break;

        case 2: // Comparar PIB
            printf("\nComparando PIB...\n");
            printf("\nPIB de %s: %.2f\n", nome1, pib1);
            printf("PIB de %s: %.2f\n", nome2, pib2);
            if(pib1 > pib2) {
                printf("\nJogador 1 vence com o maior PIB!\n");
            } else if(pib2 > pib1) {
                printf("\nJogador 2 vence com o maior PIB!\n");
            } else {
                printf("\nEmpate! Ambos os países têm o mesmo PIB.\n");
            }
            break;

        case 3: // Comparar Pontos Turísticos
            printf("\nComparando Número de Pontos Turísticos...\n");
            printf("\nPontos Turísticos de %s: %d\n", nome1, turismo1);
            printf("Pontos Turísticos de %s: %d\n", nome2, turismo2);
            if(turismo1 > turismo2) {
                printf("\nJogador 1 vence com mais pontos turísticos!\n");
            } else if(turismo2 > turismo1) {
                printf("\nJogador 2 vence com mais pontos turísticos!\n");
            } else {
                printf("\nEmpate! Ambas as cidades têm o mesmo número de pontos turísticos.\n");
            }
            break;

        case 4: // Comparar Área
            printf("\nComparando Área da Cidade...\n");
            printf("\nÁrea de %s: %.2f km²\n", nome1, area1);
            printf("Área de %s: %.2f km²\n", nome2, area2);
            if(area1 > area2) {
                printf("\nJogador 1 vence com a maior área!\n");
            } else if(area2 > area1) {
                printf("\nJogador 2 vence com a maior área!\n");
            } else {
                printf("\nEmpate! Ambas as cidades têm a mesma área.\n");
            }
            break;

        case 5: // Comparar Densidade Populacional
            printf("\nComparando Densidade Populacional...\n");
            printf("\nDensidade Populacional de %s: %.2f habitantes/km²\n", nome1, densidade1);
            printf("Densidade Populacional de %s: %.2f habitantes/km²\n", nome2, densidade2);
            if(densidade1 > densidade2) {
                printf("\nJogador 1 vence com maior densidade populacional!\n");
            } else if(densidade2 > densidade1) {
                printf("\nJogador 2 vence com maior densidade populacional!\n");
            } else {
                printf("\nEmpate! Ambas as cidades têm a mesma densidade populacional.\n");
            }
            break;

        case 6: // Comparar PIB per Capita
            printf("\nComparando PIB per Capita...\n");
            printf("\nPIB per Capita de %s: %.2f\n", nome1, capita1);
            printf("PIB per Capita de %s: %.2f\n", nome2, capita2);
            if(capita1 > capita2) {
                printf("\nJogador 1 vence com o maior PIB per capita!\n");
            } else if(capita2 > capita1) {
                printf("\nJogador 2 vence com o maior PIB per capita!\n");
            } else {
                printf("\nEmpate! Ambas as cidades têm o mesmo PIB per capita.\n");
            }
            break;

        default:
            printf("\nOpção inválida! Por favor, escolha entre 1 e 6.\n");
            break;
    }

    return 0;
}
