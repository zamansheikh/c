#include <stdio.h>

int linearSearch(int a[], int e, int l, int r);

int main()
{
  int sortedArray[] =   {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int key = 9;
  int index = linearSearch(sortedArray, key, 0, 12);
  printf("The Elemnet %d Found on index :[%d] \n", sortedArray[index], index);
  
  return 0;
}

int linearSearch(int a[], int key, int l, int r)
{

  for( int i = l; i <= r; i++)
  {
    if (a[i] == key)
      return i;
  }
  
}