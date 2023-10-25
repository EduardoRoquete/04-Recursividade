#include <stdio.h>

int calcularPotencia(int base, int expoente);

int main() {
    int base, expoente, resultado;

    // Solicita ao usuário a entrada da base e do expoente
    printf("Digite a base (número inteiro): ");
    scanf("%d", &base);
    printf("Digite o expoente (número inteiro): ");
    scanf("%d", &expoente);

    // Chama a função para calcular a potência
    resultado = calcularPotencia(base, expoente);

    // Exibe o resultado
    printf("%d^%d = %d\n", base, expoente, resultado);

    return 0;
}


int calcularPotencia(int base, int expoente) {
    
    if (expoente == 0) {
        return 1;
    }
   
    else if (expoente == 1) {
        return base;
    }
    else {
        return base * calcularPotencia(base, expoente - 1);
    }
}