class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=1,c=0,mp=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            p*=nums[i];
            mp=max(mp,p);
            if(p==0)
            {
                p=1;
            }
        }
        p=1;
                for(int i=nums.size()-1;i>-1;i--)
        {
            p*=nums[i];
            mp=max(mp,p);
            if(p==0)
            {
                p=1;
            }
        }
        return mp;
    }
};