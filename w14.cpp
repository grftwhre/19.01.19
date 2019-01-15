#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
int N,s;
int maximum;
printf("enter N\n");
scanf("%d",&N);
int a[N];
    for (int l=1;l<=N;l++)
        scanf("%d",&a[l]);
maximum=a[1]+a[6];
    for (int j=1;j<=N;j++)
    {
        s=j+5;
        for (s;s<=N;s++)
        {
            if ((a[j]+a[s])>maximum)
                maximum=a[j]+a[s];
        }
    }
    printf("%d",maximum);
    return 0;
}
