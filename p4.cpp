//Rotate Array by k places
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i=0;i<k%nums.size();i++)
        {
            int l=nums[nums.size()-1];
        for(int j=nums.size()-2;j>=0;j--)
        {
            nums[j+1]=nums[j];
        }
        nums[0]=l;
    }
    }
};