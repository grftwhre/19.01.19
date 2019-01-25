#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N,m,ost;
    printf("enter N\n");
    scanf("%d",&N);
    int a[N];
    int b[10];
    for (int l=0;l<=9;l++)
        b[l]=0;
    for (int k=1;k<=N;k++)
    {
        scanf("%d\n",&a[k]);
        while (a[k])
         {
         ost=a[k]%10;
         b[ost]++;
         a[k]=(a[k]/10);
         }
    }
    m=b[0];
    for (int i=1;i<10;i++)
    {
        if (b[i]>m)
            m=b[i];
    }
    for (int j=N;j>=1;j--)
    {
        if (b[j]==m)
        printf("%d",b[j]);
    }
    return 0;
}
