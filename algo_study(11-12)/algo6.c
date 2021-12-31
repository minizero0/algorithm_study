/* 나머지가 1이 되는 수 찾기 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int index = 2;
    
    while (index < n - 1)
    {
        if (n % index == 1)
            break;
        index++;
    }
    return index;
}