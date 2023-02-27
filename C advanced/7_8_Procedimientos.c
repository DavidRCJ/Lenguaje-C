#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void saludarPantalla(char nombre[], char apellido[], size_t id);

int main(){
    saludarPantalla("David Ricardo ", "Cruz Juarez", 87839);
    return 0;
}

void saludarPantalla(char nombre[], char apellido[], size_t id){
    /* ZU imprime un ENTERO SIN SIGNO*/
    printf("Hola %s %s! tu identificador es : %zu", nombre, apellido, id);
}