class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <int> v;
        int i=0,j=0,c=nums.size()/3;
        while(j<nums.size())
        {
            while(j<nums.size()&&nums[i]==nums[j])
            {
                j++;
            }
            if(j-i>c)
            {
                v.emplace_back(nums[i]);
            }
            i=j;
            
        }
        return v;
    }
};