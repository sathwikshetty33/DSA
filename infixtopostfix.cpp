#include<bits/stdc++.h>
using namespace std;

int pre(char c){
    if(c=='^')
    {
        return 3;
    }
    if(c=='/' || c=='*')
    {
        return 2;
    }
    if(c=='+' || c=='-')
    {
        return 1;
    }
    return 0;
}

bool op(char c)
{
    if(c=='^' || c=='/' || c=='*' || c=='+' || c=='-' )
    { return true;}
    return false;
}

int main()
{
    string s,r;
    stack <char> v;
    getline(cin, s);
    for(auto i:s)
    {
        if(i=='(')
        {
            v.push(i);
        }
        else if(i ==')')
        {
            while(v.top()!='(')
            {
                r+=v.top();
                v.pop();
            }
            v.pop();
        }
        else if(!op(i))
        {
            r+=i;
        }
        else{
            
                while(!v.empty() && pre(v.top())>=pre(i) && i != '^')
                {
                    r+=v.top();
                    v.pop();
                }
                
           v.push(i); 
        }
    }
    while(!v.empty())
    {
        r+=v.top();
        v.pop();
    }
    cout<<r;
    return 0;
}