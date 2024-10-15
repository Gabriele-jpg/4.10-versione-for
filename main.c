#include <stdio.h>

int main() {
    int n, potenza = 1;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("2^%d = %d\n", i, potenza);
        potenza *= 2;
    }

    return 0;
}