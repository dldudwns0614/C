#include <stdio.h>
int main()
{
    int money, change;
    int price, c1000, c500, c100;

    printf("물건 값을 입력하시오:");
    scanf("%d", &price);

    printf("투입한 금액을 입력하시오:");
    scanf("%d", &money);
    change = money - price;

    c1000 = change/1000;
    change = change %1000;

    c500 = change/500;
    change = change %500;

    c100 = change/100;
    change = change %100;

    printf("\n천원권: %d장\n", c1000);
    printf("오백원 동전: %d개\n", c500);
    printf("백원 동전: %d\n", c100);
    return 0;
}