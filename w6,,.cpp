#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
int N,m;
int mnm;
int v;
int c;
printf("enter N");
scanf("%d",&N);
printf("enter m");
scanf("%d",&m);
printf("enter c");
scanf("%d",&c);
int a[c-m+1];
int b[c-m+1];
 for (int i=0;i<c-m+1;i++)
{
a[i]= 0;
}
for (int l=0;l<=c-m;l++)
{
    b[l]=0;
}
for(int l=0 ; l<c-m+1 ;l++){
             v=0;
           mnm=0;
       if((l-2)>=0)
       {
            mnm=a[l-2] + 1;
            v=1;
       }
       if(l-4 >=0)
       {
            if(mnm>a[l-4]+1)
            {
                mnm=a[l-4]+1;
                  v=2;
            }
       }
       if((l-5)>=0)
       {
            if(mnm>a[l-5]+1)
            {
                mnm=a[l-5]+1;
                  v=3;
            }
       }
       if((((l+m)%3)==0)&&((l+m)/3)>=m)
       {
             if(mnm>a[((l+m)/3)-m]+1)
             {
                mnm=a[((l+m)/3)-m]+1;
                  v=4;
            }
       }
       a[l]=mnm;
       b[l]=v;
}
int Q[N-c+1];
int Z[N-c+1];
for(int i=0; i<N-c+1; i++){
Q[i] = 0;
}
for(int i=0; i<=N-c; i++)
{
    Z[i]=0;
}
for(int i=0 ; i<N-c+1 ; i++){
             v=0;
           mnm= 0;
       if(i-2>=0)
       {
            mnm=Q[i - 2] + 1;
            v=1;
       }
       if(i-4 >=0)
       {
            if(mnm>Q[i-4]+1)
            {
                mnm=Q[i-4]+1;
                  v=2;
            }
       }
       if((i-5)>= 0)
       {
            if(mnm > Q[i - 5] + 1){
                mnm = Q[i - 5] + 1;
                  v = 3;
            }
       }
       if(((i + c) % 3 == 0) && ((i + c) / 3 >= c)){
             if(mnm > Q[(i + c) / 3 - c] + 1){
                mnm = Q[(i + c) / 3 - c] + 1;
                  v = 4;
            }
       }
       Q[i] = mnm;
       Z[i] = v;
}
if(Q[N-c]==0)
{
    cout<<"NO";
}
else{
    for(int i = N - c; i > 0; i-=1){
    cout<<Z[i]<<" ";
    if(Z[i]==4)
    {
        i = ((i + c) / 3) - c + 1;
        continue;
    }
    if(Z[i] == 3){
        i = i - 4;
         continue;
    }
    if(Z[i] == 2){
        i = i - 3;
         continue;
    }
    if(Z[i] == 1){
        i = i - 1;
         continue;
    }
}
for(int i = c - m; i > 0; i-=1){
    cout<<b[i]<<" ";
    if(b[i] == 4){
        i=((i+m)/3)-m+1;
        continue;
    }
    if(b[i] == 3){
        i = i - 4;
         continue;
    }
    if(b[i] == 2){
        i = i - 3;
         continue;
    }
    if(b[i] == 1){
        i = i - 1;
         continue;
    }
}
}
return 0;
}
