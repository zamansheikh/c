#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y);
void insertion_sort(int a[], int length);

int main()
{
    int a[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45};
    int length = sizeof(a) / sizeof(a[0]);
    insertion_sort(a, length);
    printf("This is the sorted array: ");
    for (int i = 0; i < length; i++)
        printf("%d ", a[i]);
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertion_sort(int a[], int length)
{
    int key,i,j;
    for (i = 1; i < length; i++)
    {
        int key = a[i];
        j = i-1;
        while ( j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}