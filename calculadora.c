#include <stdio.h>

int main() {
    int operacion;
    float num1, num2, resultado;

    printf("Mi calculadora tiene las siguientes operaciones: \n1. Suma\n2. Resta\n3. Multiplicación\n4. División\n\nSelecciona la que quiere utilizar: ");

    if (scanf("%d", &operacion) != 1) {
        printf("Error: Entrada no válida. Debes ingresar un número.\n");
        return 1;
    }

    if(operacion >= 1 && operacion <= 4){
        printf("Ingresa dos números: ");
        
        if (scanf("%f %f", &num1, &num2) != 2) {
            printf("Error: Entrada no válida. Debes ingresar dos números.\n");
            return 1;
        }

        switch(operacion) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Error: División por cero.\n");
            }
            break;
    }
    }else{
        printf("Error: Opción no válida. Selecciona una operación entre 1 y 4.\n");
    }

    return 0;
}
