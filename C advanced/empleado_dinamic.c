#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nombreTemporal[100];
    char apellidoTemporal[250];

    puts("Ingresa tu niomrbe");
    printf("-Nombre-");
    gets(nombreTemporal);

    puts("Ingresa tu apellido");
    printf("-Apellido-");
    gets(apellidoTemporal);

    typedef struct {
        char *nombre;
        char *apellido;
    } Empleado;

    Empleado vendedor;
    vendedor.nombre = (char *)malloc(strlen(nombreTemporal) * sizeof(char));
    vendedor.apellido = (char *)malloc(strlen(apellidoTemporal) * sizeof(char));

    vendedor.nombre = strcpy(vendedor.nombre, nombreTemporal);
    vendedor.apellido = strcpy(vendedor.apellido, apellidoTemporal);

    return 0;
}