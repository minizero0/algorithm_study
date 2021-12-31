/* 음양 더하기 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int index;
    int result;
    
    result = 0;
    index = 0;
    while(index < absolutes_len)
    {
        if (signs[index] == false)
        {
            result += -absolutes[index];
        }
        else
            result += +absolutes[index];
        index++;
    }
    int answer = 123456789;
    return result;
}