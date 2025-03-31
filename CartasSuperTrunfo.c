#include <stdio.h>

int main(){

    //carta 1
    char estado[] = "SP";
    char codigo[] = "A01";
    char nome[] = "São Paulo";
    int populacao = 12325000;
    float area = 1521.1;
    double pib = 699280000000;
    int numero = 50;
    float quociente = populacao / area;
    float percapita = pib / (float)populacao;
    unsigned long long int poder = (populacao + area + pib + numero + quociente + (1 / percapita) ) / 6;

    //carta 2
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.2;
    double pib2 = 300500000000;
    int numero2 = 30;
    float quociente2 = populacao2 / area2;
    float percapita2 = pib2 / (float)populacao2;
    unsigned long long int poder2 = (populacao2 + area2 + pib2 + numero2 + quociente2 + (1 / percapita2) ) / 6;

    //print da carta 1
    printf("Carta 1: \n\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %i\n", populacao);
    printf("Área em km²: %.1f\n", area);
    printf("PIB: %.0f\n", pib);
    printf("Numero de pontos Turisticos: %i\n", numero);
    printf("Densidade Populacional: %.2f\n", quociente);
    printf("PIB per capita: %.2f\n", percapita);
    printf("Super Poder: %lli\n\n", poder);

    //pint da carta 2
    printf("Carta 2: \n\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %i\n", populacao2);
    printf("Área em km²: %.1f\n", area2);
    printf("PIB: %.f\n", pib2);
    printf("Numero de pontos Turisticos: %i\n", numero2);
    printf("Densidade Populacional: %.2f\n", quociente2);
    printf("PIB per capita: %.2f\n", percapita2);
    printf("Super Poder: %lli\n\n", poder2);
    

    //comparação da carta 1 e da carta 2
    printf("População da Carta 1 > Populção Carta 2: %d\n", populacao > populacao2);
    printf("Área Carta 1 > Área Carta 2: %d\n", area > area2);
    printf("PIB Carta 1 > PIB Carta 2: %d\n", pib > pib2);
    printf("Pontos Turisticos Carta 1 > Pontos Turisticos Carta 2: %d\n", numero > numero2);
    printf("Densidade Populacional 1 > Densidade Populacional Carta 2: %d\n", quociente > quociente2);
    printf("PIB per capita 1 > PIB per capita Carta 2: %d\n", percapita < percapita2);
    printf("Super Poder 1 > Super Poder Carta 2: %d\n", poder > poder2);

    return 0;
}