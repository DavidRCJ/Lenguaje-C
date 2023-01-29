#include <stdio.h>

int main(){
    int identificador[10];

    &indentificador[0];
    identificador;

    &identificador[8];
    identificador+8;/*Aritmetica de pubnteros significa desplazamiento*/

    &identificador[8];
    identificador[8];

    *(identificador + 8); /*Es mas eficiente*/
    return 0;
}