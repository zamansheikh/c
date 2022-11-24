#include <stdio.h>

int factorical(int n) 
{
    if (n == 0)
        return 1; 
    else
        return n * factorical(n - 1);
        
}

int main()
{
    //int n;
    //scanf("%d", &n);
    printf("%d", factorical(5));
    infiniteloop();
    return 0;
}


void infiniteloop()
{   
    printf("Hello World\n");
    infiniteloop();
}