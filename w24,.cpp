#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N,s,r;
    r=0;
    printf("enter N\n");
    scanf("%d",&N);
    int a[N];
    for (int k=1;k<=N;k++)
    {
        scanf("%d",&a[k]);
    }
    for (int i=1;i<=N;i++)
    {
        for (int j=1;j<=N;j++)
        {
            if (i!=j)
            {
                s=a[i]+a[j];
                if ((s%9)==0) r++;
                s=0;
            }
        }
    }
    if (r!=0)
    printf("%d",r);
    else
    printf(":(");
    return 0;
}
