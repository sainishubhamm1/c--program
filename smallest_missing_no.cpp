#include<iostream>
using namespace std;
int main()
{int t,n,i;
cin>>t;
while(t--)
{cin>>n;
int b[1000]={0};
int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];
if(a[i]>0)
b[a[i]]++;


}
for(int i=1;i<100;i++)
{if(b[i]==0)
cout<<i<<endl;
break;

}

}
return 0;


}
