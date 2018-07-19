#include<iostream>
using namespace std;
int main()
{int t,n,d;
cin>>t;
while(t--)
{cin>>n>>d;
int a[n],p[n];
for(int i=0;i<n;i++)
{cin>>a[i];
}
for(int i=0;i<n;i++)
cin>>p[i];
int even=0,odd=0,sum=0;
for (int i=0;i<n;i++)
{
if(a[i]%2==0)
even+=p[i];
else
odd+=p[i];
}
d%2==0?cout<<odd:cout<<even;
cout<<endl;



}
return 0;




}
