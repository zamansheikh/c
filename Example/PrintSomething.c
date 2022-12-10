#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m], s = 0;

    for(int k = 0; k < m; k++)
    {
        scanf("%d",&b[k]);
    }
    for (i = 0; i < m; i++)
    {
        s = a[0] + b[i];

        for (int j = 1; j < n; j++)
        {

            if (a[j] <= s)
            {
                s = s - a[j];
                s = s + a[j];
            }
            else
            {
                printf("No way Home\n");
                break;
            }
            if ((j+1) == n)
                printf("Homecoming\n");
        }
    }
    return 0;
}
