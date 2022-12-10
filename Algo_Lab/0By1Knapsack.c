#include <stdio.h>
#include <stdbool.h>

int max(int a, int b)
{
    return a > b ? a : b;
}
int knapsack( int itemWeight[], int itemValue[], int WeightLeft, int itemIndex)
{
    if(WeightLeft == 0 || itemIndex < 0)
        return 0;
    if(itemWeight[itemIndex] > WeightLeft)
        return knapsack(itemWeight, itemValue, WeightLeft, itemIndex - 1);
    else return max(knapsack(itemWeight, itemValue, WeightLeft, itemIndex - 1), 
    itemValue[itemIndex] + knapsack(itemWeight, itemValue, WeightLeft - itemWeight[itemIndex], itemIndex - 1));
}


int main()
{   
    int itemWeight[] = {1,1, 3, 4, 5};
    int itemValue[] = {5,5, 4, 5, 7};
    int bagWeight = 7;
    int length = sizeof(itemWeight) / sizeof(itemWeight[0]);
    int maxProfit =knapsack(itemWeight, itemValue,  bagWeight, length - 1);
    printf("Max Profit: %d", maxProfit);
    return 0;
}