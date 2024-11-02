//Majority Element
class Solution {
public:
   int majorityElement(vector<int>& nums) {
        map <int,int> m;
        int ma=0;
        int i;
        for( i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>nums.size()/2)
            {
            
            return nums[i];
            }
        }
                  return nums[i];
    }
};
