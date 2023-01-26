/*WHILE*/

#include <stdio.h>

int main(){
    int num_rep =3;
    int usuario;


    while(num_rep > 0){
            printf("aprediendo while en Linkendin Learning Esta es la rep %d \n",num_rep);
            num_rep--;
    }
    

    do{
        printf("Introduce un numero positivo ");
        scanf("%d", &usuario);

    }while(usuario>0);


    for(int i=0; i<5; i++){
        printf("Estas dentro de un for en la itercion %d",i);
    }

    return 0;   
    
}