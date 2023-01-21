/*/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

David Ricardo Cruz Juárez   |   Hiring Challenge    |   30 September 2022
                                Triangule
*******************************************************************************
#include <stdio.h>

const char* triangule(unsigned char side1, unsigned char side2,unsigned char side3)
{
    /*here is where you need to develop your solution*/
    //Any side should be always greater than the sum of the other 2 sides and smaller than their difference.    
/*    if ( (((side1+side2)>side3) && ((side1-side2)<side3)) &&
         (((side1+side3)>side2) && ((side1-side3)<side2)) &&
         (((side2+side3)>side1) && ((side2-side3)<side1))
    ) {
        // Any size could be 0
        if(side1 == 0 || side2 == 0 || side3 == 0) {
            return "error";       }
         
        // All side are equal 
         else   if (side3 == side2 && side2 == side1){
                        return "equilatero";             }
        // At least 2 of the sides are equal
                else     if (side1 == side2 || side2 == side3 || side3 == side1){
                    return "isosceles";                       }
        //All side are diferents
                else    return "escaleno";
   }
   else return "error";
    
}*/

/* DO NOT MODIFY THE MAIN FUNCTION, ANY CHANGE HERE WILL NOT BE COMPILED 

int main(){
    //Example                         sideX+sideY>sideZ && sideX-sideY<sideZ                
    //printf("%s",triangule(4,4,2));    // isosceles
    //printf("%s",triangule(3,2,4));    // escaleno 
    //printf("%s",triangule(0,5,5));    // error
    //printf("%s",triangule(1,1,100));  // error
    //printf("%s",triangule(1,100,1));  // error
   
    printf("%s \n",triangule(5,5,5));   // equilatero
    printf("%s \n",triangule(100,1,1));  // error

    return 0;
}


DAVID RICARDO CRUZ JUAREZ  |    Hiring Challenge Continental    |30 September, 2022 |   Que triangulo es
*/

#include <stdio.h>

const char* triangule(unsigned char side1, unsigned char side2,unsigned char side3)
{
    //All side could not 0
    printf("%d \t %d \t %d\t",side1,side2,side3);
    
   if(side1 == 0 || side2 == 0 || side3 == 0){
       return "Error";
    }
    // All side are equal 
   else if (side3 == side2 && side2 == side1){
            return "Equilatero";      }
        
    // At least 2 of the sides are equal
    else if (side1 == side2 || side2 == side3 || side3 == side1){
            return "Isosceles";
        }
    //All side are diferents
    else    return "Escaleno";
 }


/* DO NOT MODIFY THE MAIN FUNCTION, ANY CHANGE HERE WILL NOT BE COMPILED */
int main()
{
    //Example
    //printf("%s",triangule(1,1,1)); Equilatero
    //printf("%s",triangule(1,2,1)); Isosceles
    //printf("%s",triangule(1,3,5)); Escaleno
    //printf("%s",triangule(0,0,0)); Error
    printf("%s",triangule(1,1,1));
    return 0;
}  