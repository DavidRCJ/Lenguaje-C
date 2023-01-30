#include <stdio.h>
#include <string.h>

int main ()
{   
    
    typedef struct{
        int id;
        char *nombre;
        char *apellido;
        float sueldo;
    }Empleado;
    
    /**/
    struct Empleado2{
        int id;
        char *nombre;
        char *apellido;
        float sueldo;
    };
    
    /*declaramos un registro tipo*/
    Empleado profesor;
    
    profesor.id = 123456;
    profesor.nombre = "David Ricardo";
    profesor.apellido = "Cruz Juarez";
    profesor.sueldo =30000.99;
    
    printf("%s\n", profesor.nombre);
    printf("%s \n",profesor.apellido);
    printf("%f \n", profesor.sueldo);
    printf("nuelvo sueldo es de %f \n", profesor.sueldo+=3500.99);
    
    struct Empleado2 recepcionista;
    
    
    return 0;
}