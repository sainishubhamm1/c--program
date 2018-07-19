#include<iostream>
using namespace std;
int main()
{int n,k;
cin>>n>>k;
int a[n];
vector<int>v
for(int i=0;i<n;i++)
{cin>>a[i];
v.push_back(a[i]);
}
for(int i=0;i<n-k;i++)
{ auto itr=max_element(v.begin()+k,v.begin()+i+k);
 cout<<*itr<<" ";

}
cout<<endl;
return 0;









}
