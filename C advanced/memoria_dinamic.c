#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*          MALLOC          */
    int empleados[500]; /*consume mas memoria*/
    /*permite manejar la moria y utilizar la que que yo necesito*/
    int *memoria_empelados = (int *)malloc(500 * sizeof(int));

    /**********************************************************************************/
    /****           Arrays dinamicos         *******/
    int numProductos = 5;

    /*printf("Cuantos productos vendiuste hoy ?");
    scanf("%d", &numProductos);*/

    float *numProductosvendidos = (float *)malloc(numProductos * sizeof(float));

    for (int i = 0; i < numProductos; i++)
    {
        printf("Introduce el precio de los prodcutos %d ", i + 1);
        scanf("%f", &numProductosvendidos[i]);
    }

    /******************************************************************/

    /*Libreacion de memoria*/
    int *array = (int *)malloc(10*sizeof(int));
    float *array2 = (float *)malloc(10*sizeof(float));
    char *array3 = (char *)malloc(10*sizeof(char));
    
    /*Liberar meoria con free*/
    
    free(array);
    free(array2);
    free(array3);
    
    return 0;
}
