#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int x;
    int y;
    int sum;

    printf("첫번째 변수를 입력하세요.");  //printf: 출력
    scanf("%d", &x);                     //scanf: 입력
    printf("두번째 변수를 입력하세요.");
    scanf("%d", &y);
    
    sum = x + y;
    printf("두수의 합 : %d", &sum);

    return 0;
}