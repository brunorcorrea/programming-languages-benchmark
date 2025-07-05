#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock();

    long long sum = 0;
    for (int i = 1; i <= 1000000; i++) {
        sum += i;
    }

    clock_t end = clock();
    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Soma: %lld\n", sum);
    printf("Tempo: %.6f segundos\n", elapsed);
    return 0;
}
