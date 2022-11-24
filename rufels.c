#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
// UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{

    int Case;
    scanf("%d", &Case);
    for (int i = 0; i < Case; i++)
    {
        int num, upo;
        scanf("%d %d", &num, &upo);
        printf("Case %d: ", i + 1);
        int finalNum = upo;
        for (int j = 0; j < upo; j++)
        {
            finalNum = finalNum * 10;
        }
        finalNum /= 10;
        if (finalNum == 1)
            finalNum == 0;
        finalNum = finalNum + num;
        printf("%d", finalNum);
    }

    return 0;
}