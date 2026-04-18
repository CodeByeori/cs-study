// 포인터와 함수 매개변수, 문자열, 구조체 연습을 위한 포켓몬 관리 시스템 만들기

#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct stats
{
    int pikaLev;
    int pikaHp;
    int pikaAtk;
    int pikaDef;
};

void naming(char *baseName);
void training(char *nick, char *baseMove);
void candy(struct stats *pika, char *naMe);

int main()
{
    // 기본 정보
    int coin = 0;
    char pikaName[20] = {"Pikachu"};

    struct stats pikachu = {1, 30, 55, 30};

    char pikaMove[20] = {"Growling"};

    while (coin != 4)
    {

        printf("\nname: %s\n", pikaName);
        printf("Lv. %d\n", pikachu.pikaLev);
        printf("hp. %d\n", pikachu.pikaHp);
        printf("atk. %d\n", pikachu.pikaAtk);
        printf("def. %d\n", pikachu.pikaDef);
        printf("move: %s\n\n", pikaMove);

        printf("What would you like to do?\n");
        printf("1. Give a Nickname\n");
        printf("2. Rare Candy\n");
        printf("3. Teach a Move\n");
        printf("4. Quit\n> ");
        scanf("%d", &coin);

        switch (coin)
        {
        case 1:
            naming(pikaName);
            break;

        case 2:
            candy(&pikachu, pikaName);
            break;

        case 3:
            training(pikaName, pikaMove);
            break;

        default:
            break;
        }
    }

    printf("\nQuit.");
    return 0;
}

// naming 함수 만들기
void naming(char *baseName)
{
    static char newName[20] = {};
    printf("\nGive a new name to your %s\n> ", baseName);
    scanf("%19s", newName);
    strcpy(baseName, newName);
    printf("\n%s seems to like the new name.\n\n", baseName);
    usleep(2000000);
}

// candy
void candy(struct stats *pika, char *naMe)
{
    pika->pikaLev += 1;
    pika->pikaHp += 25;
    pika->pikaAtk += 30;
    pika->pikaDef += 20;

    printf("\n%s gets a level up!\n", naMe);
    usleep(1000000);
}

// move 함수 만들기
void training(char *nick, char *baseMove)
{
    char newMove[20] = {};
    printf("\nWhich one should %s learn?\n > ", nick);
    scanf("%19s", newMove);
    char preMove[20] = {};
    strcpy(preMove, baseMove);
    strcpy(baseMove, newMove);
    printf("\n1, 2, and... Poof!\n");
    usleep(1000000);
    printf("%s forgot %s and...\n", nick, preMove);
    usleep(1000000);
    printf("%s learned %s!\n\n", nick, newMove);
    usleep(2000000);
}
