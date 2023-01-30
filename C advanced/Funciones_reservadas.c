#include <stdio.h>

int main()
{
  /*Se urtilza en C PUTCHAR para la impresion de un caracter en pantalla*/
    putchar('a');
  /*pa la muestra de una secuencia de caracteres con un salto de linea
  integrado al final de la cadena*/
  puts("\nmuestra una cadena con PUTS");
  printf("PRINTF fucnion equivalente de de PUTS\n");
  
  /*SCANF es una funcion de entrada de datos, recoge por teclado*/
  /*(tipo de dato a recoger, direccion a donde se va a guradar ese valor)*/
  int edad;
  scanf("%d",&edad);
  
  float sueldos;
  scanf("%f",&sueldos);
  
  char caracter;
  scanf(" %c",&caracter);
  
  char password[10];
  scanf("%s",password);
  
  /*GETCHAR sirvepara leer un caracter desde teclado*/
  printf("solicitamos por teclado un carecter con scanf\n");
  char carecter2;
  scanf(" %c",&carecter2);
  printf("\n Ingrese char");
  char caracter_getchar=getchar();
  putchar(caracter_getchar);
  
/*La funcion GETS sirve para la lectura de cadenas de caracteres*/  
    char texto[100];/*maximo caracteres*/
    gets(texto);
    /*recibe como parametro el numero de carecteres mas el texto y flujo de entrada*/
    fgets(texto,100,stdin);
  
  return 0; 
}
