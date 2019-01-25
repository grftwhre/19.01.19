#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
   int s,maximum,w1,w2,N;
    N=100;
    int a[N];
    for (int l=1;l<N;l++)
    {
        scanf("%d",&a[l]);
        if(a[l]==0)
        {
            s=l;
            break;
        }
    }
    int b[s];
    for (int i=1;i<=s;i++)
    {
        if (a[i]<a[i+1])
            w1=a[i];
        if (a[i+1]<a[i+2])
       {
        for (int k=1;k<=s;k++)
        {
        while(a[k+1]<a[k+2])
        {
            w2=a[k+2];
        }
        }
       }
       else w2=a[i+1];
       b[i]=w2-w1;
    }
     maximum=b[1];
     for (int j=1;j<=s;j++)
     {
        if (b[j]>maximum)
        maximum=b[j];
     }
     printf("%d numbers have received\n Highest lift height is %d",s,maximum);
    return 0;
}
