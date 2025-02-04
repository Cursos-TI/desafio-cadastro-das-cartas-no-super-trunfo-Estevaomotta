 #include <stdio.h>

int main() {
    // Defina variáveis separadas para cada atributo da cidade
    char cod[3]; // código da cidade (max 2 caracteres)
    char nome[50]; // nome da cidade
    float populacao; // população da cidade
    int area; // área da cidade
    int PIB; // PIB da cidade
    int PontTuristicos; // número de pontos turísticos da cidade

    // Cadastro das Cartas
    printf("Cadastro de Cartas:\n");
    printf("Código da cidade: ");
    scanf("%s", cod);
    printf("Nome da cidade: ");
    scanf("%49s", nome); // limite de 49 caracteres para evitar buffer overflow
    printf("População da cidade: ");
    scanf("%f", &populacao);
    printf("Área da cidade: ");
    scanf("%d", &area);
    printf("PIB da cidade: ");
    scanf("%d", &PIB);
    printf("Número de pontos turísticos da cidade: ");
    scanf("%d", &PontTuristicos);

    // Exibição dos Dados das Cartas
    printf("\nDados da Carta:\n");
    printf("Código da cidade: %s\n", cod);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %d\n", area);
    printf("PIB da cidade: %d\n", PIB);
    printf("Número de pontos turísticos da cidade: %d\n", PontTuristicos);

    return 0;
}
