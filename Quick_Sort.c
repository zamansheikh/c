#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y);
void insertion_sort(int a[], int length);

int main()
{
    int a[] = {10,11,23,44,8,15,3,9,12,45,56,45,45};
    int length = sizeof(a)/sizeof(a[0]);
    insertion_sort(a, length);
    printf("This is the sorted array: ");
    for( int i = 0; i < length; i++)
        printf("%d ", a[i]);
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
} 