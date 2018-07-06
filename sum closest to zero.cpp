#include<iostream>
using namespace std;
#include<cmath>
void minabssum(int arr[],int n)
{int count=0;
int l=0,r=n-1,sum,min_sum,min_l=0,min_r=1;
min_sum=arr[0]+arr[1];
for(l=0;l<n-1;l++)
{for(r=l+1;r<n-1;r++)
{sum=arr[l]+arr[r];
 if(min_sum>abs(sum))
 {min_sum=sum;
 min_l=l;
 min_r=r;
 }
}
}
cout<<arr[min_l]<<arr[min_r];
}
int main()
{int arr[]={1,60,-10,70,-80,85};
minabssum(arr,6);
return 0;
}
