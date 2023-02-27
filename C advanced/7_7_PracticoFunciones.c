#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscarPosiciones(char caracter, char texto[]);

int main(){
    char text[50] = "DavidRicardo";
    printf("La letra R se encuentra en la poscicion %d ", buscarPosiciones('R',text));  
      return 0;
}

int buscarPosiciones(char caracter, char texto[]){
    for(int i=0; i < strlen(texto) ;i++){
        if( texto[i]== caracter){
            return i+1; 
        }
        else
        if(texto[i]== '\0'){
            printf("Caracter no encontrado");
        }
    }
}
