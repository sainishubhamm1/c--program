#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{int n;
cin>>n;
int a[n],lsum=0,rsum=0;
for(int i=0;i<n;i++)
{cin>>a[i];
rsum+=a[i];
}
int index=-1;
for(int i=0;i<n;i++)
{lsum+=a[i];
if(lsum==rsum)
{
index=i+1;
break;}
else
rsum=rsum-a[i];}


cout<<index;
return 0;
}
