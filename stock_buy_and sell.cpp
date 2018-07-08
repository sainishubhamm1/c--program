#include<iostream>
using namespace std;
void stockalgo(int a[],int n)
{int i,cur_max=-9999,cur_min=9999;;
int cur_st=-9999,cur_end=-9999;
for(int i=0;i<n;i++)
{if(a[i]<cur_min||a[i]<cur_max)
{if(cur_end>cur_st){
cur_max=a[i];
cur_min=a[i];
cur_st=i;
cur_end=i;
}
}
else if(a[i]>cur_max)
{cur_max=a[i];
cur_end=i;
}
}
if(cur_end>cur_st)
{
cout<<cur_st<<cur_end;}


}
int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
stockalgo(a,n);
return 0;}
