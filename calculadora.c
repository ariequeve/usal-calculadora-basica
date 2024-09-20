#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado, contador;

    printf("Selecciona una operación: \n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("Potencia: (@)\n");
    scanf("%c", &opcion);

    printf("Ingresa dos números: ");
    scanf("%f %f", &num1, &num2);

    switch(opcion) {
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
        case '@':
            resultado = 1;
            // exponente positivo; base positiva, negativa o 0
            if (num2 >= 0){
                for (contador = 0; contador < num2; contador++){
                    resultado *= num1;
                }
            // exponente negativo
            } else {
                //base positiva o negativa
                if (num1 < 0 || num1 > 0){ 
                    for (contador = 0; contador < -num2; contador++){
                        resultado /= num1;
                    }
                // base 0   
                } else {  
                    printf("Error: Potencia de base 0 y exponente negativo.\n");
                    break;
                }   
             }  
            
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Opción inválida.\n");
    }

    return 0;
}
