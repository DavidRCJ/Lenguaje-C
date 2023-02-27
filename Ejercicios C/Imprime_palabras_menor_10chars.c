/*
Test Hiring Challenge Continental 
    
*/
#include <stdio.h>
#include <string.h>

int longWord(int n, char * s[4]){
    char  obten_primer_caracter;
    char  obten_ultimo_caracter;
    
    int tamano_cadena ;
    
        for (int i=0;i<n;i++)            {
            tamano_cadena=strlen(s[i]);
                    if (tamano_cadena<10){
                            printf("%s \n",s[i]);
                                         }
                     else{
                            obten_primer_caracter = *(s[i]);
                            obten_ultimo_caracter= *(s[i] + tamano_cadena-1);
                            printf("%c %d %c \n",obten_primer_caracter,tamano_cadena,obten_ultimo_caracter);
                        }
            }
    return 0;
    }

int main(){
    int n = 4;
   char * words[4] = {"palabra", "localizacion", "internacionalizacion", "pneumonoultramicroscopicsilicovolcanoconiosis"};
 
 //**********************/*pallabras menores a 10 caracteres*/*********************
        // char * words[4] = {"David", "Ricardo", "Cruz", "Juarez"};

//**********************/*pallabras mayores a 10 caracteres*/*********************
        // char * words[4] = {"Electroencefalografista", "Anticonstitucionalidad", "internacionalizacion", "pneumonoultramicroscopicsilicovolcanoconiosis"};

	longWord(n,words);
   
    return 0;
}