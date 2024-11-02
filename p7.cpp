//Missing Number
class Solution {
public:
    int missingNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
      int  n=v.size();
        int sum2=(n*(n+1))/2;
        return sum2-sum;
           }
};