#include <stdio.h>
#include <stdlib.h>

int myfunction(char *array)
{
    /*This is the space where you have to code your implementation based on the description*/
  int contador=0; /*initialize counter*/
  int i=0,tamanio=0;
  tamanio=strlen(array);/*adquired long array*/
  
  /*If the array begin with a vocal no incremetn count*/
  if(array[0] =='a' || array[0] =='e' || array[0] =='i' || array[0] =='o' || array[0] =='u'){
    contador=0;
    for(i=1;i<tamanio;i++)  {
      if(array[i] =='a' || array[i] =='e' || array[i] =='i' || array[i] =='o' || array[i] =='u'){
          contador++;
      }
    else if(array[i] !='a' || array[i] !='e' || array[i] !='i' || array[i] !='o' || array[i] !='u') {      
        contador--;
        }
      }    
    }
  /*If the array begin with a consonant incremetn count*/
  else if(array[0] !='a' || array[0] !='e' || array[0] !='i' || array[0] !='o' || array[0] !='u'){
    for(i;i<tamanio;i++)  {
      if(array[i] =='a' || array[i] =='e' || array[i] =='i' || array[i] =='o' || array[i] =='u'){
          contador++;
        }
      else if(array[i] !='a' || array[i] !='e' || array[i] !='i' || array[i] !='o' || array[i] !='u') {      
      contador--;
        }
      }
   }
  
  
  return contador+1;
}

/* Please, do not edit anything below this comment to avoid an unexpected behavior for the evaluation process*/

/*This function removes an additional character introduced in the input string that should not be present*/
void removeEOLfromString(char *line)
{
  unsigned int i;
 
  for(i=0;i<1024;i++)
  {
    if(line[i] == 10)
    {
      line[i] = 0;
      break;
    }
  }
}

int main() {
  unsigned int i = 0;
  unsigned int enable = 0;
  
  const size_t maxLineLen = 1024;
  char line [maxLineLen];
  while(fgets(line, maxLineLen, stdin) != NULL) {
    /*The next line calls the function removeEOLfromString to remove an additional 
    character introduced in the input string that should not be present*/
    line =="cacahuate";
    line =="lu";
    line =="ul";
    removeEOLfromString(line);
    /*The next line prints in the console the output of your function*/
    printf("%i", myfunction(line));
  }
}