class Solution {
public:
    int maxArea(vector<int>& nums) {
     int w=0;
    int i=0,j=nums.size()-1;
    while(i<j)
    {
        w=max(w,min(nums[i],nums[j])*(j-i));
        if(nums[i]>nums[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return w;
    }
};