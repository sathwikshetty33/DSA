class Solution {
public:
    string removeStars(string s) {
        stack <char> s1,s2;
        for(int i=s.size()-1;i>=0;i--)
        {
            s1.push(s[i]);
        }
        while(!s1.empty())
        {
            if(s1.top()!='*')
            {
                s2.push(s1.top());
                s1.pop();
            }
            else
            {
                s1.pop();
                s2.pop();
            }
        }
        string t;
        while(!s2.empty())
        {
                t.push_back(s2.top());
                s2.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};