class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i=0,j=nums.size()-1;
        sort(nums.begin(),nums.end());
        int z=0;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
            {
                z++;
                i++;
                j--;
            }
            if(nums[i]+nums[j]>k)
            {
                j--;
            }
            if(nums[i]+nums[j]<k)
            {
                i++;
            }

        }
        return z;
    }
};