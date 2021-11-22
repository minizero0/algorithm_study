#include <stdio.h>

int main(void)
{
    int a, count;
    char str;

    count = 0;
    scanf("%d", &a);
    while(a)
    {
        scanf("%c", &str);
        if (str == '(')
            count++;
        else if (str == ')')
            count--;
        a--;
    }
    if (count == 0)
        printf("YES");
    else
        printf("NO");
    return (0);
}