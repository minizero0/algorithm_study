/* 없는 숫자 더하기 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int result = 0;
    int index = 0;
    int hap = 45;
    while (index < numbers_len)
    {
        result += numbers[index++];
    }
    hap -= result;
    return hap;
}