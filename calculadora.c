#include <stdio.h>
#include <stdlib.h>

// Funções

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    
    if (b == 0) {
        printf("\nERRO: Divisão por zero não e permitida!\n");
        return 0;
    }
    return a / b;
}

// Main

int main() {
    
    float num1, num2, resultado;
    int opcao;
    char continuar;

    do {
        
        system("cls"); // Limpa a tela a cada novo ciclo (Windows)

        printf("\n========== CALCULADORA ==========\n\n");
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        printf("\n===> Escolha a operação: <===\n\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n\n");
        printf("Opção: ");
        scanf("%d", &opcao);

// Switch

        switch (opcao) {
            
            case 1:
                resultado = somar(num1, num2);
                printf("\nResultado = %.2f\n", resultado);
                break;
            case 2:
                resultado = subtrair(num1, num2);
                printf("\nResultado = %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("\nResultado = %.2f\n", resultado);
                break;
            case 4:
                resultado = dividir(num1, num2);
                if (num2 != 0)
                    printf("\nResultado = %.2f\n", resultado);
                break;
            case 0:
                printf("\nEncerrando...\n");
                return 0;
            default:
                printf("\nAVISO: Opção inválida!\n");
        }

        printf("\nDeseja realizar outra operação? (s/n): ");
        scanf(" %c", &continuar); // O espaço antes de %c limpa o buffer do Enter anterior

    } while (continuar == 's' || continuar == 'S');

    printf("\nPROGRAMA ENCERRADO. ATÉ LOGO!\n");
    return 0;
}