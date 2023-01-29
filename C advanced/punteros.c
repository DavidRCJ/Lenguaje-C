#include <stdio.h>

int main(){
    int identificador = 1994;
                    /*& obtenemos la direccion de memoria de la varuable que contiene */
    int *p_ident = &identificador;

    char letra;
    char *p_letra = &letra;

    float sueldo;
    float *p_sueld = &sueldo;


    /*Asignanciion de punteros*/
    /*   *p_pubntero en un printf estariamos viendo el contenido*/
    /* p_puntero en un printf estariamos viendo la direccion de la variables a al que apuntamos*/
    /* &p_puntero en un printf estariamos viendo la direccion dememoria del puntero */
    
    printf("este es el contenido de la variable %d  \n", identificador );
    printf("este es el contenido de la variable que tiene el puntero %d  \n", *p_ident );
    printf("este es el la direcion de la variable  %d  \n", &identificador );
    printf("este es el la direcion de la variable en el puntero %d  \n", p_ident );
    
    
    printf("este es el la direcion de memoria del puntero    \t %p \t %d \n", p_ident,p_ident ); 
    /* Suma de punteros*/
      int *p_ident_incremeto = p_ident + 7;
    printf("Incremento de la direcion de memoria del puntero \t %p  \t %d \n", p_ident_incremeto,p_ident_incremeto); 
    
    int *p_ident_decremeto = p_ident_incremeto - 7;
    printf("Decremento de direcion memoria del puntero incremento \t %p  \t %d \n", p_ident_decremeto,p_ident_decremeto); 



    return 0;
}