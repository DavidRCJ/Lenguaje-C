#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void mifunction(char *array)
{
  /*This is the space where you have to code your implementation based on the description*/
 int position = strlen(array);
  
  if (array[position-2] >= 'A' || array[position-2] <= 'Z' )  {
      array[position-2] = tolower(array[position-2]);
  }
 else if(array[position-2] >= 'a' || array[position-2] <= 'z' ){
      array[position-2] = toupper(array[position-2]);
  }
}

int main(){
 // char line [10]= {"Microfono"};
  char line [12]= {"CONTINENTAL"};
    mifunction(line);
    printf("\t %s ",line);
}