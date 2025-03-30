#include <stdio.h>

int main(){

    //carta 1
    char estado[] = "SP";
    char codigo[] = "A01";
    char nome[] = "São Paulo";
    int populacao = 12325000;
    float area = 1521.1;
    float pib = 699.28;
    int numero = 50;

    //carta 2
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.2;
    float pib2 = 300.5;
    int numero2 = 30;

    //print da carta 1
    printf("Carta 1: \n\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %i\n", populacao);
    printf("Área em km²: %.1f\n", area);
    printf("Pib: %.2f Bilhões\n", pib);
    printf("Numero de pontos Turisticos: %i\n", numero);

    printf("\n"); //Espaço entre cartas

    //pint da carta 2
    printf("Carta 2: \n\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %i\n", populacao2);
    printf("Área em km²: %.1f\n", area2);
    printf("Pib: %.1f Bilhões\n", pib2);
    printf("Numero de pontos Turisticos: %i\n", numero2);

    return 0;
}