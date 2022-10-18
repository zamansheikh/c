#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y);
void quicksort(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
  int a[] = {10,11,23,44,8,15,3,9,12,45,56,45,45};
  int length = sizeof(a) / sizeof(a[0]);
  quicksort(a, 0, length - 1);
  
  for (int i = 0; i < length; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void quicksort(int array[], int l, int r)
{
  if (l < r)
  {
    int pivot_index = partition(array, l, r);
    quicksort(array, l, pivot_index - 1);
    quicksort(array, pivot_index + 1, r);
  }
}


int partition(int a[], int l, int r)
{
  int pivot_value = a[r];
  int i = l; 
  for (int j = l; j < r; j++)
  {
    if (a[j] <= pivot_value)
    {
      swap(&a[i], &a[j]);
      i++;
    }
  }
  swap(&a[i], &a[r]);
  return i;
}