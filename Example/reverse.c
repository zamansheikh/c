#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a String: ");
    scanf("%s", str);
    int StrLength = 0;
    for (int i = 0; str[i] != '\0'; i++) StrLength++;
    printf("The length of the string is %d", StrLength);

    return 0;
}