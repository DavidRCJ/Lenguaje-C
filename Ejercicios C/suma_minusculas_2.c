#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myfunction(char *array)
{
    unsigned int contador = 0;
    int i = 0, tamanio = 0;
    tamanio = strlen(array);

    /*Evaluamos la primer posicion si es vocal el ontador debe iniciar en 1*/
    if (array[0] == 'a' || array[0] == 'e' || array[0] == 'i' || array[0] == 'o' || array[0] == 'u')
    {
        contador = 1; /*Porque si en la posicon 0 tenemos una vocal el contador inicia su acumulacion en 1*/

        for (i = 1; i < tamanio; i++)
        { /*El ciclo inicia en 1 poruqe ya evaluamos la posicon 0*/
            /*Si en la poscion i es una vocal incrementa el contador en 1*/
            if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u')
            {
                contador++;
            }
            /*Si en la poscion i no es una vocal decrementa el contador en 1*/
            else
            {
                contador--;
            }
        }
    }
    /*Evaluamos la primer posicion si no es vocal el contador debe iniciar en 0*/
    else
    {
        contador = 0;
        for (i = 1; i < tamanio; i++)
        {
            if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u')
            {
                contador++;
            }
            else
            {
                contador--;
            }
        }
    }

    return contador;
}

int main()
{                   /*010101212    01    10     */
    char *line[3] = {"cacahuate", "lu", "ul"};
    
    for (int i = 0; i < 3; i++)
        printf("%i\n", myfunction(line[i]));
        /*Debe imprimir 2, 1, 0*/
    return 0;
}