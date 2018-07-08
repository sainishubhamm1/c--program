#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int i,n;
cin>>n;
int a[n];
//zigzag pattern is a<b>c<d>e<f
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
if(i%2==0)
{if(a[i]>a[i+1])
{ swap(a[i],a[i+1]);
}

}
else
{if(a[i]<a[i+1])
swap(a[i],a[i+1]);
}
for(i=0;i<n;i++)
cout<<a[i];
return 0;

}
