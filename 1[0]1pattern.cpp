#include<iostream>
using namespace std;
int main()
{int t,n;
cin>>t;
while(t--)
{string s;
cin>>s;
int i,c=0,count=0,flag=0;
for(int i=0;i<s.length();i++)
{if((s[i]=='1'&&c==0)||s[i]=='1'&&flag==1))
c++;
else if(c==1)
    { if(s[i]=='0')
       flag=1;1
       else if(s[i]=='1')
       c=1;
       else
       c=0;
    }
   else if(c==2)
   {count++;
   c=1;
   flag=0;



   }



}
cout<<count<<endl;

}
return 0;

}
