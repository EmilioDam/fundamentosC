#include <stdio.h>

int sumar(int op1, int op2){
    int suma = op1 + op2;
    return suma;
}

int main(int argc, char *argv[]){
    printf("La suma es: %i \n", sumar(4, 3));
    printf("La suma es: %i \n", sumar(3, 2));
    printf("La suma es: %i \n", sumar(1, 4));
    return 0;
}



