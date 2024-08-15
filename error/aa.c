//NO.3
#include <stdio.h>

int main() {
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d, %d, %d, ", i, 3 * i, 2 * i);
    }

    printf("\n");

    return 0;
}