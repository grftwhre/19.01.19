#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N,d,k,ost,m,mm;
    printf("enter N\n");
    scanf("%d",&N);
    int b[N],a[N];
    for (int j=1;j<=N;j++)
    {
        b[j]=0;
    }
    for (int i=1;i<=N;i++)
    {
     scanf("%d",&d);
     scanf("%d",&k);
    if ((k%d)==0)
     a[i]=0;
    else
    {
        ost=k%d;
        b[ost]++;
        a[i]=ost;
    }
     d=0;
     k=0;
   }
   m=b[1];
    for (int s=1;s<=N;s++)
    {
        if (b[s]>m)
            m=b[s];
    }
    for (int k=N;k>=1;k--)
    {
        if (b[k]==m)
            printf ("ost = %d, kolvo raz = %d",a[k],b[k]);

    }
    return 0;
}
