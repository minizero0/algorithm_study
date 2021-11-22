#include <stdio.h>

int main(void)
{
    int a, b, index, result;

    scanf("%d %d", &a, &b);

    index = 1;
    result = 1;
    while (index <= a && index <= b)
    {
      
       if(a % index == 0 && b % index ==0)
       {
           result = index;
       }
       index++;
    }
    printf("%d\n", result);

    printf("%d\n",(a * b) / result);
}