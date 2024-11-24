class Solution {
public:
    string predictPartyVictory(string senate) {
        queue <char> q1;
        stack <char> q2;
        for(auto i: senate)
        {
            q1.push(i);
        }
        while(!q1.empty())
        {
            if(q2.empty()||q2.top()==q1.front())
            {
                q2.push(q1.front());
                q1.pop();
            }
            else
            {
                q1.push(q2.top());
                q1.pop();
                q2.pop();
            }
        }
        if(q2.top()=='R')
        {
            return "Radiant";
        }
        return "Dire";
    }
};