#include <stdio.h>

int main(){

        char Estados;
        char Codigos[30];
        char Cidades[30];
        int Populacao;
        float Area;
        float Pib;
        int turisticos;

        char estados2;
        char Codigos2[30];
        char Cidades2[30];
        int Populacao2;
        float Area2;
        float Pib2;
        int turisticos2;
    
    
        printf("Desafio Super Trunfo - Novato\n");
        printf("\n");
    
        printf("Cadastro de cartas:\n");
        printf("\n");
    
        printf("Carta 1\n");
        printf("\n");
    
        printf("Digite o estado: \n");
        scanf("%c", &Estados);
    
        printf("Digite o codigo: \n");
        scanf("%s", &Codigos);
    
        printf("Digite a cidade: \n");
        scanf("%s", &Cidades);
    
        printf("Digite a população: \n");
        scanf("%i", &Populacao);
    
        printf("Digite a área: \n");
        scanf("%f", &Area);
    
        printf("Digite o PIB: \n");
        scanf("%f", &Pib);
    
        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%d", &turisticos);
        printf("\n");

        printf("Carta 2\n");
        printf("\n");
    
        printf("Digite o estado: \n");
        scanf("%s", &estados2);

        printf("Digite o codigo: \n");
        scanf("%s", &Codigos2);

        printf("Digite a cidade: \n");
        scanf("%s", &Cidades2);

        printf("Digite a população: \n");
        scanf("%i", &Populacao2);

        printf("Digite a área: \n");
        scanf("%f", &Area2);

        printf("Digite o PIB: \n");
        scanf("%f", &Pib2);

        printf("Digite a quantidade dde pontos turisticos: \n");
        scanf("%d", &turisticos2);

        printf("Carta 1\n");
        printf("\n");
    
        printf("Estado: %c\n", Estados);
        printf("Código: %s\n", Codigos);
        printf("Cidade: %s\n", Cidades);
        printf("População: %i\n", Populacao);
        printf("Área: %.2f\n", Area);
        printf("PIB: %.2f\n", Pib);
        printf("Pontos Turisticos: %i\n", turisticos);
        
        printf("\n");

        printf("Carta 2\n");
        printf("\n");

        printf("Estado: %c\n", estados2);
        printf("Código: %s\n", Codigos2);
        printf("Cidade: %s\n", Cidades2);
        printf("População: %i\n", Populacao2);
        printf("Área: %.2f\n", Area2);
        printf("PIB: %.2f\n", Pib2);
        printf("Pontos Turisticos: %i\n", turisticos2);
    

}
