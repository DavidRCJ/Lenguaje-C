#include <stdio.h>
#include <string.h>

int main()
{                                /******************         strlen             *************************/
    char texto[50] = "LinkedIn"; /*Permite almacenar 49 + \0 ultima pos*/
    int pos = 0;
    int numcaracteres = 0;

    /*ceunta la logitud de la cadena*/
    int conta = strlen(texto);
    printf("%d", conta);

    /*******************       strcpy         *************************/
    /*Copia una cadena de caracteres a otra *******************************/
    char nombre[15] = "hola me copie";
    char copia[15];
    // char copia[15] = nombre[15];/*le estamos pasadno un solo
    /* elemento en estamos
    en este caso la posicon 15*/
    strcpy(copia, nombre);

    printf("%s ", copia);
    /*                          STRCAT                              */
    /****************CONCATENRE CADENA *************************** */
    char nombre[50] = "David Ricardo Cruz Juarez";
    char welcome[20] = "Bienvenido  ";

    printf("%s", strcat(welcome, nombre));

    /*              STRCMP             */
    /*nos permite comparar cadenas de caracteres*/
    char passworr[30] = "DrCj23*08/97@";
    char compara_password[30] = "DrCj23*08/97@";

    int valor_pass = strcmp(passworr, compara_password);
    if (valor_pass == 0)
        puts("Las cadenas son iguales");
    else if (valor_pass > 0)
        puts("Las cadena 1 es mayor a la cadenda 2");
    else if (valor_pass < 0)
        puts("Las cadena 1 es menor que la cadenda 2");

    
    /*          STRCHR            */
    /*Busca un caracter en especifico*/
    char email[30] = "davidricardo@linkedin.com";
    strchr(email, '@'); /*Devuelve la direccion de memoria del char*/
    // si no contiene el charr devuelve NULL

    
    
    /*          STRSTR          */
    /*Busca una cadena de caracteres en otro array*/
    char email2[30] = "davidricardo@linkedin.com";

    char *dominio = strstr(email2, "davidricardo");
    printf("%s", dominio);

    return 0;
}
