#include <stdio.h>    //변수를 입력하고 출력
int main()
{
    int x;
    int y;
    int sum, diff, mul, div;  // 두 정수 간의 연산의 결과를 저장하는 변수이다

    x = 20;
    y = 10;
    sum = x + y;
    diff = x - y;
    mul = x * y;
    div = x / y;

    printf("두수의 합 : %d\n", sum);     //ㄴsum값 출력    
    printf("두수의 차 : %d\n", diff);   //diff값 출력
    printf("두수의 곱 : %d\n", mul);
    printf("두수의 몫 : %d\n", div);

    return 0;

}