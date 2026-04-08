#include <stdio.h>

void boostAtk(int *atkPtr);
void boostDef(int *defPtr);
char *setNickname();

int main()
{
    int baseAtk = 55;
    int *atkPtr = &baseAtk;

    int baseDef = 30;
    int *defPtr = &baseDef;

    printf("\n=== Pikachu's Stats ===\n");
    printf("Atk : %d\n", baseAtk);
    printf("Def : %d\n", baseDef);

    boostAtk(atkPtr);
    boostDef(defPtr);

    char *nickPtr = setNickname();

    printf("\n=== Pikachu's Stats ===\n");
    printf("Nickname: %s\n", nickPtr);
    printf("Atk : %d\n", baseAtk);
    printf("Def : %d\n", baseDef);

    return 0;
}

void boostAtk(int *atkPtr)
{
    int atk = 0;
    printf("\nBoost Atk: ");
    scanf("%d", &atk);
    *atkPtr += atk;
}

void boostDef(int *defPtr)
{
    int def = 0;
    printf("Boost Def: ");
    scanf("%d", &def);
    *defPtr += def;
}

char *setNickname()
{
    static char setNick[20] = {};
    printf("Type Pikachu's Nickname: ");
    scanf("%s", setNick);
    return setNick;
}
