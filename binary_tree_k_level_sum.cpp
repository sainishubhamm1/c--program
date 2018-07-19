#include<iostream>
using namespace std;
int rev(int num)
{int res=0;
while(num>0)
{res=res*10+num%10;
num=num/10;}
return res;
}
int main()
{int t;
cin>>t;
while(t--)
{int k;
cin>>k;
string str;
int c=-1;
int sum=0;
for(int i=0;i<str.length();i++)
{if(str[i]=='(')
c++;
else if(str[i]==')')
c--;
if(c==k)
{int num=0,f1=1;
  while(str[i+1]>='0'&&str[i+1]<='9')
  {
num=num+f1*int(str[i+1]-'0');
f1=f1*10;
i++;
}


sum+=rev(num);

}

cout<<sum<<endl;
}

}
return 0;




}
