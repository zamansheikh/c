#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bSort(int a[], int n)
{
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int main()
{

    int n; 
    bool swapped;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int n2of3 = (n/3)*2;
    bSort(a, n2of3);
    int rest = n - (int)(n /4.0 * 3);
    for (int i = rest; i < n; i++)
    {
        for (int j = rest; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}