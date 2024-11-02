//Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(auto i:nums)
        {
            x=x ^ i;
        }
        return x;
    }
};
approach-2

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
                
            }
            else
            {
                if(nums[i+1]!=nums[i+2])
                {
                    return nums[i+1];
                }
                else
                {
                    return nums[i];
                }
            }
        }
        return nums[nums.size()-1];
    }
};