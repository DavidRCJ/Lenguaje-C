#include <stdio.h>
int main()
{
    int edad =25;
    float sueldo =3000.50;
    char departamento = 'A';
    printf("VAMOS A PEDIRTE DATOS");
    printf("Ingresa edad ");
    scanf("%d",&edad);
    printf("ingresa sueldo anual ");
    scanf("%f",&sueldo);
    printf("Ingresa tu Nombre ");
    fflush(stdin);
    scanf(" %c",&departamento);


    printf("la edad de esta es %d \n,con un ahorro de %f \n, con un departamento tipo %c \n",edad,sueldo,departamento);

    return 0;
}
