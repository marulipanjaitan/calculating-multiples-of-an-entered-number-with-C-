#include <stdio.h>

int main() {
    int n = 9;  // Masukkan angka yang ingin Anda gunakan di sini

    for (int i = 1; i <= n; i++) {
        printf("%d, %d, ", i, 3 * i);
        if (i == 5) {
            break;
        }
    }

    return 0;
}
