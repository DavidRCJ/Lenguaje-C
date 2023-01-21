/******************************************************************************
Hiring Challeng
David Ricardo Cruz Juarez
CODE CHALLENGE
Distance between 2 points

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned int calculate_distance (char *stringtocheck);
/*
*   function that receives a string that has 2 integers in the range of -100 to 100 and returns the "distance" between both points.
*   Notice that the distance is always a possitive number.
*   Parameter 1: String that contains the two integers values divided by 2 blank spaces (example: "-20  40")
*/
unsigned int calculate_distance (char *stringtocheck)
{
  int flag = 0;
  char value[10]={0};
   char value2[10]={0};
  int aux, j=0;
  for (int i = 0; i < 10; i++)    {
      if (stringtocheck[i]!=' '&& flag == 0)	{
	            value[i] = stringtocheck[i];
	            	 		                    }
    else	{       flag =1;
                    value2[j] = stringtocheck[i];
	   	            j++;     }
	   	            
    }
    
    int sum = ( atoi(value) - atoi(value2));
      if(sum<0){sum= sum * -1;}
         else  if(atoi(value)== 0 && atoi(value2) ==0 ){   sum=0;}
                 printf("%d\t,%d\t,%d\t",atoi(value),atoi(value2),sum);
         return sum;
  /*Implement your code here, notice that you can use string.h and math.h libraries APIs */
 }

int main ()
{
  /*In this main function we have the call of the "calculate_distance" function and also the implementation of some TestCases,
     please DO NOT edit any code of this main function and just implement your logic inside calculate_distance() */
  char index = 0;
  unsigned int expectedoutcomes[5] = { 55, 140, 20, 20, 0};
  char stringarray[5][10] = {
    "-20  35",
    "100  -40",
    "-80  -60",
    "-10  10",
    "0  0"  };

  while (5 > index)    {
      if (expectedoutcomes[index] == calculate_distance (&stringarray[index][0])){
	  printf ("TC%i: OK\n", index + 1);
	}
      else	{
	  printf ("TC%i: NOT OK\n", index + 1);
	}
      index++;
    }

  return 0;
}

