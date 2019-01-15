#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
int N,s,r;
int maximum;
printf("enter N\n");
scanf("%d",&N);
int a[N];
    for (int l=1;l<=N;l++)
        scanf("%d",&a[l]);
maximum=2;
    for (int j=1;j<=N;j++)
    {
        s=j+6;
        for (s;s<=N;s++)
        {
            r=a[j]*a[s];
            if ((r>maximum)&&((r%2)==0))
                maximum=r;
        }
    }
    printf("%d",maximum);
    return 0;
}
