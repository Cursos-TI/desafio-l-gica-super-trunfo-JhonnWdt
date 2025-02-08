#include <stdio.h>
#include <string.h>

int main() {
    int populacao1, populacao2, turismo1, turismo2;
    float pib1, pib2, area1, area2, capita1, capita2, densidade1, densidade2; // aqui são definidas as variaveis.
    char nome1[50], nome2[50];

    printf(" *** Super Trunfo Países ***\n");  

    printf("\nJogador 1, insira as informações da sua carta: \n");

    //aqui tive ajuda do chat gpt, pois usando scanf, ao digitar o nome de uma cidade que fosse composto (Ex: São Paulo), o programa zerava automaticamente todas os dados seguintes.
    printf("\nNome da Cidade: \n");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    //printf define qual mensagem sera exibida para o usuario, nesse caso indicando qual informação esta sendo solicitada.
    // enquanto o scanf define qual tipo de dado esta sendo armazenado, no caso de %d, um inteiro e %f sendo float.
    printf("População: \n");    
    scanf("%d", &populacao1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo1);

    printf("Área da cidade: \n");
    scanf("%f", &area1);

    // Aqui é feito o calcula que ira definir a renda per capita e densidade demográfica, sendo aplicada a conversão explicita, convertendo uma variavel int para float.
    capita1 = (float)pib1 / populacao1;
    densidade1 = (float)populacao1 / area1;
    getchar()

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

    capita2 = (float)pib2 / populacao2;
    densidade2 = (float)populacao2 / area2;

    // Aqui, através da função printf, foi definido como a informação final sera exibida para o usuario.
    printf("\n=== Carta do Jogador 1 ===\n");
    printf("\nCidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turismo1);
    printf("Área da Cidade (km²): %.2f\n", area1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB per Capita: %.2f \n", capita1);

    printf("\n=== Carta do Jogador 2 ===\n");
    printf("\nCidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    printf("Área da Cidade (km²): %.2f\n", area2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita: %.2f \n", capita2);

    printf ("\n===========================\n");

    // atraves de if e else, o programa exibe a informação de qual jogador venceu o jogo.
    if (pib1 > pib2)
    { printf("\nO jogador 1 venceu o jogo, pois sua cidade tem um PIB maior!\n");
        /* code */
    } else { printf("\nO Jogador 2 venceu o jogo, pois sua cidade tem um PIB maior! !\n");
    }

    return 0;
}