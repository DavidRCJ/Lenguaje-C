#include <stdio.h>
#include <conio.h>
/*uso de Scanf y Printf*/
int main(){
    char nombre [20];
    printf("Hola, como te llamas");
    scanf("%s",nombre);

    /*Obsérvese que, en este ejercicio, en la función scanf no hay que escribir el carácter
     ampersand (&) antes de la variable nombre. Esto es así, ya que, para las variables 
     de tipo cadena (arrays de caracteres), su propio identificador (nombre, en este caso)
     ya hace referencia a la dirección de memoria donde se va a almacenar el dato.*/
    printf("hola %s, buenos dias.",nombre);
    return 0;
}
