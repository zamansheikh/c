#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y);
void bubble_sort(int a[], int length);
int main()
{
    int Coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    const int length = sizeof(Coins) / sizeof(Coins[0]);
    bool trackNotes[10] = {false};
    int trackCoins[10] = {0};

    bubble_sort(Coins, length);
    int restOfMoney = 225;
    int totalCoins = 0;

    while (restOfMoney > 0)
    {
        for (int i = 0; i < length; i++)
        {
            if (restOfMoney >= Coins[i] && trackNotes[i] == false)
            {
                trackCoins[i] = restOfMoney / Coins[i];
                totalCoins += trackCoins[i];
                restOfMoney -= Coins[i] * trackCoins[i];
                trackNotes[i] = true;
                break;
            }
        }
    }
    printf("Total Notes Needed: %d\nNotes are: \n", totalCoins);
    for (int i = 0; i < length; i++)
    {
        if (trackNotes[i])
        {
            printf("%3d Notes Need: %dX\n", Coins[i], trackCoins[i]);
        }
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int a[], int length)
{
    bool swapped;
    int i = 0;
    do
    {
        swapped = false;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                swapped = true;
            }
        }
        i++;
    } while (swapped);
}
