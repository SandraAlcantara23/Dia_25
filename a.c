#include <stdio.h>

int main() {
    int num, factorial;
    
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &num);
    
    factorial = 1;
    while (num > 1) {
        factorial *= num;
        num--;
    }
    
    printf("El factorial es: %d\n", factorial);
    
    return 0;
}
