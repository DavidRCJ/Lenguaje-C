#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numTemperaturas = 1;
    float total;
    float temperatura;
    float *temperaturas = (float *) malloc(numTemperaturas*sizeof(float));

    int contador;
    while(1){
        printf("\n Inserta la temperatura");
        scanf("%f", &temperatura);
        total += temperatura;
        temperaturas[contador] = temperatura;
        contador++;
        printf("La temperatura promedio actual es de: %.2f \n ",(total/contador));

        if(contador==numTemperaturas){
            numTemperaturas++;
            temperaturas = realloc(temperaturas,numTemperaturas*sizeof(float));
        }

        for (int i = 0; i < contador; i++)
        {
            printf("%.2f", temperaturas[i]);
        }
        

    }



    return 0;
}