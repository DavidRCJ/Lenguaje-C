#include <stdio.h>

int main()
{
    float sueldo[10][12];
    
    int (*sueldos)[10];
    
    
    sueldo[4][5];//acceder a un eleemtno
    *(*(sueldos+4)+5); //aritmetica de punteros
                        /*  (sueldos +4) es un puntero a la fila */
                    /*  *(sueldos +4 )  se refiere a toda la filao es decir
                    un puntero al primer eleemtno de la fila 4*/
                    /**(*(sueldos+4)+5) es un puntero al eleemtno 5 de la fila 4*/
                    
    printf("Hello World");

        int enteros[5] = {1, 2, 3, 4, 5};
        printf("%d", *(enteros + 3));
    return 0;
}
