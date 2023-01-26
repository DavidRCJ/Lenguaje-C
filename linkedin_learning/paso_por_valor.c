#include <stdio.h>
int cuadrado(int numero){
    return (numero*numero);
}
int main(){
    int numero = 4;
    int cuadrado = square(numero);

    printf("%d",cuadrado);
    
    return 0;
}