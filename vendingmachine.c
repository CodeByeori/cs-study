#include <stdio.h>
#include <unistd.h>

int main()
{
    int wallet = 0;
    printf("어서오세요! 자판기C입니다.\n");
    usleep(1000000);
    printf("금액을 충전하세요: ");
    scanf("%d", &wallet);
    printf("\n%d원 충전 중...\n", wallet);
    usleep(1000000);

    int choice = 0;
    int change = 0;

    while (wallet >= 2000)
    {
        printf("\n원하시는 상품을 선택하세요! (잔돈: %d원)\n1. 콜라(3000원)\n2. 사이다(3500원)\n3. 환타(4000원)\n4. 커피(2000원)\n5. 잔돈 반환\n> ", wallet);
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (wallet >= 3000)
            {
                printf("\n철컹!\n");
                usleep(1000000);
                printf("콜라 나왔습니다.\n");
                usleep(1000000);
                wallet -= 3000;
                change = wallet;
            }
            else
            {
                printf("잔돈이 부족합니다.\n");
                usleep(1000000);
            }
            break;

        case 2:
            if (wallet >= 3500)
            {
                printf("\n철컹!\n");
                usleep(1000000);
                printf("사이다 나왔습니다.\n");
                usleep(1000000);
                wallet -= 3500;
                change = wallet;
            }
            else
            {
                printf("잔돈이 부족합니다.\n");
                usleep(1000000);
            }
            break;

        case 3:
            if (wallet >= 4000)
            {
                printf("\n철컹!\n");
                usleep(1000000);
                printf("환타 나왔습니다.\n");
                usleep(1000000);
                wallet -= 4000;
                change = wallet;
            }
            else
            {
                printf("잔돈이 부족합니다.\n");
                usleep(1000000);
            }
            break;

        case 4:
            if (wallet >= 2000)
            {
                printf("\n철컹!\n");
                usleep(1000000);
                printf("커피 나왔습니다.\n");
                usleep(1000000);
                wallet -= 2000;
                change = wallet;
            }
            else
            {
                printf("잔돈이 부족합니다.\n");
                usleep(1000000);
            }
            break;

        case 5:
            printf("\n잔돈 반환해드리겠습니다.\n");
            usleep(1000000);
            change = wallet;
            wallet = 0;
            break;

        default:
            break;
        }
    }
    printf("잔돈 %d원입니다.\n", change);
    usleep(1000000);
    printf("\n이용해주셔서 감사합니다!");
    return 0;
}