// 포인터와 함수 매개변수, 문자열, 구조체 연습을 위한 포켓몬 관리 시스템 만들기

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void nameing(char *baseName);
void training(char *nick, char *baseMove);
// 이상한사탕 아직 안만듦

int main()
{
    // 기본 정보
    int coin = 0;
    char pikaName[20] = {"Pikachu"};

    int pikaLevel = 1;
    int pikaHp = 30;
    int pikaAtk = 50;
    int pikaDef = 30;

    char pikaMove[20] = {"Growling"};

    while (coin != 4)
    {

        printf("name: %s\n", pikaName);
        printf("Lv. %d\n", pikaLevel);
        printf("hp. %d\n", pikaHp);
        printf("atk. %d\n", pikaAtk);
        printf("def. %d\n", pikaDef);
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
            nameing(pikaName);
            break;

        case 3:
            training(pikaName, pikaMove);
            break;

        default:
            break;
        }
    }

    printf("\nCancelled.");
    return 0;
}

// naming 함수 만들기
void nameing(char *baseName)
{
    static char newName[20] = {};
    printf("\nGive a new name to your %s\n> ", baseName);
    scanf("%19s", newName);
    strcpy(baseName, newName);
    printf("\n%s seems to like the new name.\n\n", baseName);
    usleep(2000000);
}

// 이상한사탕 먹이기 아직 안만듦

// move 함수 만들기
void training(char *nick, char *baseMove)
{
    static char newMove[20] = {};
    printf("\nWhich one should %s learn?\n > ", nick);
    scanf("%s", newMove);
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
