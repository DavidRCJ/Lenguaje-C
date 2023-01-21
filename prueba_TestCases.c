/******************************************************************************
Hiring Challenge
David Ricardo Cruz Juarez
CODE CHALLENGE
Add number series
*******************************************************************************/


#include <stdio.h>

int getSum(int n)
{
int sum = 0;
   for(int i=1; i<=n;i++) {
    
      if (i%3!=0 && i%7!=0){
          sum=i+sum;
         
        }
   }
    return sum;
}

int main()
{
    /*In this main function we have the call of the "getSum" function and also the implementation of some TestCases,
    please DO NOT edit any code of this main function and just implement your logic inside getSum()*/
    
	int inputToTest[3] = {3, 10, 100};
	int expectedResult[3] = {3, 30, 2842};
    int sum;
    int testCounter;
    
    
    for(testCounter = 0 ; testCounter < 3 ; testCounter++) {
        sum = getSum(inputToTest[testCounter]);
        if(sum == expectedResult[testCounter]){
            printf("TC%i: OK\n", testCounter + 1);
        }
        else {
            printf("TC%i: NOK\n", testCounter + 1);
        }
    }
    
    return 0;
}
