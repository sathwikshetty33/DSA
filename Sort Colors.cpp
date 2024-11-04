//Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<nums.size()&&mid<=high)
        {
            if(nums[mid]==0)
            {
               int temp=nums[mid];
               nums[mid]=nums[low];
               nums[low]=temp;
                low++;
                 mid++;
        
            }
        
            else if(nums[mid]==2)
            {
                int temp=nums[mid];
               nums[mid]=nums[high];
               nums[high]=temp;
                high--;
            }
            else
            mid++;
    }
           
        
    }
};