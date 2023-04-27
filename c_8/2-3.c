#define _CRT_SECURE_NO_WARNINGS           //원의 면적

#include <stdio.h>
int main(void)
{
    float radius; //float 실수
    float area;

    radius=printf("반지름을 입력하시오: ");
    scanf("%f\n", &radius);

    area = 3.14 * radius * radius;
    printf("원의 면적: %f\n", &area);

    return 0;
}