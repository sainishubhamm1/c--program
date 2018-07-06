#include<iostream>
using namespace std;
void swap(int *x,int *y)
{int temp=*x;
*x=*y;
*y=temp;
}
void heapify(int arr[],int n,int i)
{int l=2*i+1;
 int r=2*i+2;
 int smallest=i;
 if(l<n&&arr[l]<arr[smallest])
 smallest=l;
 if(r<n&&arr[r]<arr[smallest])
 smallest=r;
 if(smallest!=i)
 {swap(&arr[smallest],&arr[i]);
 heapify(arr,n,smallest);
}

}
void buildheap(int arr[],int k)
{for(int i=k/2-1;i>=0;i--)
heapify(arr,k,i);
}
void checkfinal(int arr[],int n,int e)
{for(int i=e;i<n;i++)
{if(arr[i]>arr[0])
{swap(&arr[i],&arr[0]);
heapify(arr,e-1,0);
}
}
}int klargest(int arr[],int n ,int k)
{buildheap(arr,k);
checkfinal(arr,n,k+1);
return arr[0];

}
int main()
{ int arr[]={3,6,2,8,10,54,5,9};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<klargest(arr,n,4);

}
