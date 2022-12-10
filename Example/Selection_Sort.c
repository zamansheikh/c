#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y);
void selection_sort(int a[], int length);

int main()
{
    int a[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45};
    int length = sizeof(a) / sizeof(a[0]);
    selection_sort(a, length);
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

void selection_sort(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int minimum_pos = i;
        for (int j = i + 1; j < length; j++)
            if (a[j] < a[minimum_pos]) minimum_pos = j;
        swap(&a[i], &a[minimum_pos]);
    }
}


// An example of applying each step of the selection sort algorithm...
//
// Initial array: 5, 9, 7, 6, 4, 0, 2, 3, 8, 1
//
//        Step 0: 0, 9, 7, 6, 4, 5, 2, 3, 8, 1
//        Step 1: 0, 1, 7, 6, 4, 5, 2, 3, 8, 9
//        Step 2: 0, 1, 2, 6, 4, 5, 7, 3, 8, 9
//        Step 3: 0, 1, 2, 3, 4, 5, 7, 6, 8, 9
//        Step 4: 0, 1, 2, 3, 4, 5, 7, 6, 8, 9
//        Step 5: 0, 1, 2, 3, 4, 5, 7, 6, 8, 9
//        Step 6: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
//        Step 7: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
//        Step 8: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9