class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        sort(i.begin(),i.end());
        vector<vector<int>> m;
         for(int j=0;j<i.size();j++)
         {
          if(m.empty())
          {
            vector <int> v;
            v.emplace_back(i[j][0]);
            v.emplace_back(i[j][1]);
            m.emplace_back(v);
          }
          if(m[m.size()-1][1]>=i[j][0])
          {
            m[m.size()-1][1]=max(m[m.size()-1][1],i[j][1]);
          }
          else
          {
            if(j<i.size())
            {
            vector <int> v;
            v.emplace_back(i[j][0]);
            v.emplace_back(i[j][1]);
            m.emplace_back(v);
            }
          }
         }
         return m;
    }
};