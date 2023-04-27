#include <stdio.h>   //환율
int main()
{
double rate;
double usd;
int krw;

printf("환율을 입력 하시오: ");
scanf("%lf", &rate);

printf("원화 금액을 입력하세요: ");
scanf("%d", &krw);

usd = krw / rate;
printf("원화 금액 %d는 %lf달러입니다", krw, usd);

return 0;
}