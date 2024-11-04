class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> m;
        m[0]++;
       int sum=0;
       int c=0;
        for(auto i :nums)
        {
            sum+=i;
            c+=m[sum-k];
            m[sum]++;
        }
        return c;
    }
};