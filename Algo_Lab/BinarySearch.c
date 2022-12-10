#include <stdio.h>

int binary_search(int a[], int e, int l, int r);

int main()
{
  int sortedArray[] =   {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int key = 9;
  int index = binary_search(sortedArray, key, 0, 12);
  printf("The Elemnet %d Found on index :[%d] \n", sortedArray[index], index);
  
  return 0;
}

int binary_search(int a[], int key, int l, int r)
{

  int mid = l + (r - l) / 2;
  
  if (l > r) return -1;
  if (a[mid] == key)
    return mid;
  else if (key < a[mid])
    return binary_search(a, key, l, mid - 1);
  else
    return binary_search(a, key, mid + 1, r);
  
}