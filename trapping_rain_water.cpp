#include<iostream>
using namespace std;
int main()
{int i,tower[1000],n,maxright[1000],maxseenright,maxseenleft,water;
for(int i=0;i<n;i++)
cin>>tower[i];
maxseenright=0;
for(int i=n-1;i>0;i--)
{if(tower[i]>maxseenright)
{maxright[i]=tower[i];
maxseenright=tower[i];
}
else
maxright[i]=maxseenright;
}
maxseenleft=0;
water=0;
for(int i=0;i<n;i++){
water=max((min(maxseenleft,maxright[i])-tower[i]),0);
if(tower[i]>maxseenleft)
maxseenleft=tower[i];

}
cout<<water<<endl;




}
