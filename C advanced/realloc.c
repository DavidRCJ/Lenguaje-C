#include <stdio.h>
#include <stdlib.h>
int main()
{
    puts("Unidad de Urgencias");
    
    int consultaLibre;
    int numAvisos = 0;
    int *arrayDinamico = (int *) malloc(numAvisos *sizeof(int));
    
    while(1){
        printf("Introduce la consulta que necesitas ");
        scanf("%d", &consultaLibre);
        numAvisos++;
        /*permite redimencionar*/
        arrayDinamico =(int *) realloc(arrayDinamico,numAvisos*sizeof(int));
        arrayDinamico[numAvisos-1] = consultaLibre;
        
    };
    
    return 0;
}
