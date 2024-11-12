class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set <vector<int>> s;
        int l=0,k=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                l=j+1;
                k=nums.size()-1;
                while(l<k)
            {
                long long sum = static_cast<long long>(nums[i]) + static_cast<long long>(nums[j]) + static_cast<long long>(nums[l]) + static_cast<long long>(nums[k]);
                if(sum == target)
                {
                vector <int> v{nums[i],nums[j],nums[k],nums[l]};
                s.emplace(v);
                l++;
                k--;  
                }
                else if(sum < target)
                {
                    l++;
                }
                else
                {
                    k--;
                }
            }
            }
        }
        vector <vector<int>> v1;
        for(auto i: s)
        {
            v1.emplace_back(i);
        }
        return v1;
    }
};