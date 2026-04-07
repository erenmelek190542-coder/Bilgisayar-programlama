#include <stdio.h>

int main() {
    int dizi[] = {1, 2, 5, 8, 10};
    int aranan, i;

    printf("Bir sayi girin: ");
    scanf("%d", &aranan);

    for (i = 0; i < 5; i++) {
        if (dizi[i] == aranan) {
            printf("true\n");
            return 0;
        }
    }

    printf("false\n");
    return 0;
}
