#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct{
    char *nombre;
    char *apellido;
    float sueldo;
} Empleado;

Empleado profesor;
    
void almacenarNombre(char *n);
void almacenarApellido(char *a);
void almacenarSueldo(float s);

float calcualSueldoAnual(void);


int main () {   
    char nombreTemporal[100];
    char apellidoTemporal[250];
    float salario;
    int confirmacion;

   printf("Ingresa tu nombre  \n");
   scanf(" %s",nombreTemporal);
   almacenarNombre(nombreTemporal);
    
   printf("Ingresa tu apellido \n");
   scanf(" %s",apellidoTemporal);  
   almacenarApellido(apellidoTemporal);

   printf("Ingresa tu salario mensual \n");
   scanf("%f",&salario);
   almacenarSueldo(salario);
   
   printf("Deseas calcular tu salario al mes 1.- SI , 2.- No? \n");
   scanf("%i",&confirmacion);
   if(confirmacion== 1){
       printf("%f", calcualSueldoAnual());
   }
   
   
    return 0;
}

void almacenarNombre(char *n){
    profesor.nombre = (char *) malloc(strlen(n) * sizeof(char));
    profesor.nombre = strcpy(profesor.nombre,n);
    printf(" %s \n", profesor.nombre);
}

void almacenarApellido(char *a){
    profesor.apellido = (char *) malloc(strlen(a) * sizeof(char));
    profesor.apellido = strcpy(profesor.apellido,a);
    printf(" %s \n", profesor.apellido);
}

void almacenarSueldo(float s){
    profesor.sueldo = s;
    printf("%0.2f \n", profesor.sueldo);
}

/*Agregando funcion 7.6*/

float calcualSueldoAnual(){
    return(profesor.sueldo/12);
}
