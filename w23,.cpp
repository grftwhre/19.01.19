#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
 int N,s,m;
 scanf("%d",&N);
 int a[N];
 int b[10];
 for (int k=1;k<=10;k++)
    b[N]=0;
 for (int i=1;i<=N;i++)
 {
    s=0;
    scanf("%d",&a[i]);
    while (a[i])
    {
        a[i]=(a[i]/10)-(a[i]%10);
        s++;
    }
    b[s]++;
 }
 m=b[1];
 for (int l=1;l<=10;l++)
 {
  if (b[l]>m)
    m=b[l];
 }
 for (int d=10;d>=1;d--)
 {
  if (b[d]==m)
  printf("max kolvo zifr = %d, kolvo raz = %d",d,b[d]);
 }
    return 0;
}
