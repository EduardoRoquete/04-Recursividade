#include <stdio.h>

int somaNaturais(int n) {
    // Caso base: se n for igual a 1, retorna 1
    if (n == 1) {
        return 1;
    } else {
        // Chamada recursiva para somar os números anteriores e n
        return n + somaNaturais(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Digite um valor positivo para n.\n");
    } else {
        int resultado = somaNaturais(n);
        printf("A soma dos primeiros %d números naturais é: %d\n", n, resultado);
    }

    return 0;
}