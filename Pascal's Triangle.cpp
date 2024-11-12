class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        
        
        for(int i=1;i<=n;i++)
        {
            vector <int> a;
            int c=1;
            a.push_back(c);
            for(int j=1;j<i;j++)
            {
                c=c*(i-j);
                c=c/j;
                a.push_back(c);
            }
            v.push_back(a);
        }
       erd
        return v;
    }
};