#include<iostream>
#include <bits/stdc++.h>
using namespace std;
string del(string s)
{
stack<char>st;
int flag=0;
for(int i=0;i<s.length();i++)
{if(st.empty())
st.push(s[i]);
else if(st.top()==s[i])
flag=1;
else {
if(flag==1)
{st.pop();
}

}
st.push(s[i]);
flag=0;


}
if(flag==1)
st.pop();
string ans="";
while(!st.empty())
{ans+=st.top();
 st.pop();

}
reverse(ans.begin(),ans.end());
return ans;


}
int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        string s;
        cin >> s;

        string ans = del(s);

        while(s.length() != ans.length())
        {
            s =  ans;
            ans = del(s);
        }

        cout << ans << endl;
    }

	return 0;
}
