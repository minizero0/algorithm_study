/* 길이가 같은 두 1차원 정수 배열 a, b가 매개변수로 주어집니다. a와 b의 내적을 return 하도록 solution 함수를 완성해주세요.  */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a_len은 배열 a의 길이입니다.
// b_len은 배열 b의 길이입니다.
int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int result;
    int index;
    
    index = 0;
    result = 0;
    while(index < a_len)
    {
        result += (a[index] * b[index]);
        index++;
    }
    int answer = 1234567890;
    return result;
}