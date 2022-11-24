#include <stdio.h>

long long Factorial(long long n){
    if (n == 0)
        return 1;
    else
        return n * Factorial(n-1);
}

int main()
{

    int n; 
    scanf("%d", &n);
    
    printf("%lld\n", Factorial(n));
    return 0;
}
