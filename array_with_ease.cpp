#include<bits/stdc++.h>
using namespace std;
int main()
{int i,j,n,t;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
if(a[i]!=0&&a[i]==a[i+1])
{a[i]=2*a[i];
a[i+1]=0;
}
}
int count=0;
	    for(int i=0;i<n;i++){
	        if(a[i]!=0){
	            a[count++]=a[i];
	        }
	    }
	    while(count<n){
	        a[count++]=0;
	    }









for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n";
}

}

