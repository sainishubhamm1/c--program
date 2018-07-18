#include<bits/stdc++.h>
using namespace std;
void isbalanced(string s)
{ stack<char> st;
bool flag=1;
for(int i=0;i<s.length();i++)
{if(s[i]=='[')
st.push(']');
else if(s[i]=='{')
st.push('}');
else if(s[i]=='(')
st.push(')');
else if(!st.empty()&&s[i]==st.top())
st.pop();
else
{flag=0;
break;
}
}
if(flag==1&&st.empty())
cout<<"balanced"<<endl;
else
{cout<<"not balanced"<<endl;
}
}
int main()
{string s;
getline(cin,s);
isbalanced(s);
return 0;

}
