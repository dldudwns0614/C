#include <stdio.h>  //윤년 구하기 lab
int main()
{
    int year, result;

    printf("연도를 입력하시오: ", year);
    scanf("%d", &year);

    result = ( (year % 4 == 0 ) && (year % 100 != 0) ) || (year % 400 == 0);
    printf("result= %d\n", result);

    return 0;
}