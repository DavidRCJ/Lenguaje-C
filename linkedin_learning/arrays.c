#include <stdio.h>
int main()
{
    char array1[]={'A','B','C','D','F'};
    int array2[]={1,2,3,4,5};
    float array3[]={1.25,2.250,3.694,4.51,5.545};

    for (int i = 0; i < 5; i++)
    {
        printf("\t %c ",array1[i]);
        printf("\t %d ",array2[i]);
        printf("\t %f \n",array3[i]);
    }
    
    return 0;
}
