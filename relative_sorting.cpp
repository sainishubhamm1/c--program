#include<iostream>
#include<vector>
using namespace std;
vector<int> v2;
bool comp(int a,int b)
{int i,j;
for(i=0;i<v2.size();i++)
{if(v2[i]==a)
break;
}
for(j=0;j<v2.size();j++)
{if(v2[j]==b)
break;
}
if(i<j)
return true;
else if(i>j)
return false;
return a<b;
}
int main()
{int i,n,m;
cin>>n>>m;
vector<int>v1(n);
v2.clear();
v2.resize(m);
for(i=0;i<n;i++)
cin>>v1[i];
for(i=0;i<m;i++)
cin>>v2[i];
sort(v1.begin(),v1.end(),comp())
for(i=0;i<n;i++)
cout<<v1[i];
return 0;




}
