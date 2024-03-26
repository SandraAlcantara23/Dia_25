#include <stdio.h>

int main() {
    int contador = 0;
    
    // Ejemplo de while
    printf("Ejemplo de while:\n");
    while (contador < 5) {
        printf("El contador es: %d\n", contador);
        contador++;
    }
    
    // Reiniciamos el contador para el siguiente ejemplo
    contador = 0;
    
    // Ejemplo de do-while
    printf("\nEjemplo de do-while:\n");
    do {
        printf("El contador es: %d\n", contador);
        contador++;
    } while (contador < 5);
    
    return 0;
}
