#include <stdio.h>

int main() {
    int vet[15], i, maior, posMaior, menor, posMenor;

    for (i = 0; i < 15; i++) {
        scanf("%i", &vet[i]);
    }

    maior = vet[0];
    posMaior = 0;
    for (i = 1; i < 15; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posMaior = i;
        }
    }

    menor = vet[0];
    posMenor = 0;
    for (i = 1; i < 15; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
            posMenor = i;
        }
    }

    printf("Vetor: ");
    for (i = 0; i < 15; i++) {
        printf("%i ", vet[i]);
    }

    printf("\nO maior valor eh o %i ", maior);
    printf("\nO menor valor eh o %i ", menor);

    return 0;
}
