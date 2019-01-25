#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
int N,t,a,b,i,j;
 printf("enter N\n");
 scanf("%d",&N);
 printf("enter t\n");
 scanf("%d",&t);
i=t;
j=0;
 for(int k=0;k<N;k++)
    {
    scanf("%d",&a);
    scanf("%d",&b);
    j+=a;
    if((i+b)>(j+t))
        i=j+t;
    else
        i=i+b;
}
printf("%d",i);
return 0;
}
