#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void myfunction(char *array)
{
  /*This is the space where you have to code your implementation based on the description*/
  unsigned int position = 0;
  position = strlen(array);
  /*cadena[indice] = toupper(cadena[indice]);
  cadena[indice] = tolower(cadena[indice]);*/
  if (array[position - 2] == 'A')
  {
    array[position - 2] = tolower(array[position - 2]);
  }
  else
  {
    array[position - 2] = toupper(array[position - 2]);
  }
}

/* Please, do not edit anything below this comment to avoid an unexpected behavior for the evaluation process*/

/*This function removes an additional character introduced in the input string that should not be present*/
void removeEOLfromString(char *line)
{
  unsigned int i;

  for (i = 0; i < 1024; i++)
  {
    if (line[i] == 10)
    {
      line[i] = 0;
      break;
    }
  }
}

int main()
{
  unsigned int i = 0;
  unsigned int enable = 0;

  const size_t maxLineLen = 1024;
  char line[maxLineLen];
  while (fgets(line, maxLineLen, stdin) != NULL)
  {
    /*The next line calls the function removeEOLfromString to remove an additional
    character introduced in the input string that should not be present*/
    removeEOLfromString(line);
    /*The next line calls the your function developed.*/
    line == "Microfono";
    line == "CONTINENTAL";
    myfunction(line);
    /*The next line prints in the console the current state of the "line"
    string after it was modified by your function*/
    printf("%s", line);
  }
}