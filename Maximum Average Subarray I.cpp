class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double av=INT_MIN,avg=0;
        int i=0,j=k-1;
        for(int l=0;l<=j;l++)
        {
            avg+=nums[l];
        }
        av=max(av,avg/k);
        while(j<nums.size()-1)
        {
            avg=avg-nums[i];
            j++;
            avg+=nums[j];
            av=max(av,avg/k);
            i++;
            
        }
        return av;
    }
};