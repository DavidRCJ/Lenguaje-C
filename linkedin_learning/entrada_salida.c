/*Funcion printf("Aprendiendo C con Linkedin  Learning")*/
#include <stdio.h>
int main()
{
    printf("\nAprendiendo C con Linkedin  Learning\n");
    
    int nuemroPersonas = 7;
    printf("\nmis companeros %d \n", nuemroPersonas);

    float pesoperson = 70.50;
    printf("\nEl promedio de las personas es de %.2f\n",pesoperson);  

    char primerletra ='E';
    printf("\nla primer letra del nombre es %c\n", primerletra);

    
    /*Funcion Scanf */
    int edad_key =0;
    char letra1;
    float ahorro1 = 0.0;
    printf("\ndame tu edad");
       fflush(stdin);
    scanf("%d",&edad_key );
    printf("\ntu edad e28s %d \n",edad_key );

    printf("\ndame al cantidad de ahorro en tu cuenta");
       fflush(stdin);
    scanf("%f",&ahorro1 );
    printf("\ntu ahorro es %.2f \n",ahorro1 );

    printf("\ndame tu primera letra de tu nombre");
       fflush(stdin);
    scanf("%c",&letra1 );
    printf("\ntu inicial es %c \n",letra1 );


    return 0;

}
