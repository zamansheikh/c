#include <stdio.h>
#include <stdlib.h>

void merge_sort(int a[], int l, int r);
void merge_arrays(int a[], int l, int m, int r);

int main()
{
  int array[] = { 9, 4, 8, 1, 7, 0, 3, 2, 5, 6};
  int length = sizeof(array) / sizeof(array[0]);
  merge_sort(array, 0, length - 1);
  for (int i = 0; i < length; i++)
    printf("%d ", array[i]);
  printf("\n");
  return 0;
}

void merge_sort(int a[], int l, int r){
    if ( l < r){
        int mid = l + (r - l)/2;
        merge_sort(a, l, mid);
        merge_sort(a, mid+1, r);
        merge_arrays(a, l, mid, r);
    }
}
void merge_arrays(int a[], int l, int m, int r){
    int l_lenth = m - l + 1;
    int r_length = r - m;
    int temp_l[l_lenth], temp_r[r_length];
    int i, j, k;
    for (i = 0; i < l_lenth; i++)
        temp_l[i] = a[l + i];

    for (j = 0; j < r_length; j++)
        temp_r[j] = a[m + 1 + j];

    for (i = 0, j = 0, k = l; k <= r ; k++){
        if ( i < l_lenth &&
              (j >= r_length || temp_l[i] <= temp_r[j]))
            a[k] = temp_l[i++];
        else
            a[k] = temp_r[j++];
    }
}
