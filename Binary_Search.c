#include<stdio.h>
int main(){
    int size = 5, i, j;
    int array[] = { 20, 10 , 30, 5, 9};
    int kulsum = 7; //find the 7
    //bubbleSort
    for(i=0; i<size-1; i++){
        for(j=0; j<(size-1- 1); j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }
    //[ 5 9 10 20 30 ]
    int left = 0, right = 4, mid ;
    while(left<=right){
        mid = (left+right)/2; //2

        if(kulsum == array[mid]){
            printf("data found");
            break;
        }
        else if(kulsum < array[mid]){
            right = mid-1;
        }
        else if(kulsum>=array[mid]){
            left = mid+1;
        }
    }
    

    return 0;
}