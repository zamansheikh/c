#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y);
void bubble_sort(int a[], int length);
int main()
{
    int a[] = {10,11,23,44,8,15,3,9,12,45,56,45,45};
    int length = sizeof(a)/sizeof(a[0]);
    bubble_sort(a, length);

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

void bubble_sort(int a[], int length){
    bool swapped;
    int i = 0;
    do{
        swapped = false;
        for ( int j = 0; j < length - 1 - i ; j ++){
            if( a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
                swapped = true; 
            }
        }
        i++;
    }while(swapped);
}
