/*
DAVID RICARDO CRUZ JUAREZ  |    Hiring Challenge Continental    |30 September, 2022 |   Multiplos de un numero
*/
#include <stdio.h>

void multiples(unsigned char number){
    /*here is where you need to develop your solution*/
    // Cast into an integer  Counts up to 10 
    for (int i=1;i<number;i++){
        // if the modulus is 0 means that the division has no decimals 
        if (number%i == 0){
            printf("\t %i\t|",i);
        }
    }
}

int main()
{
    unsigned char number = 21 ;
    
    multiples(number);

    return 0;
}
/******************************************************************************************************/
