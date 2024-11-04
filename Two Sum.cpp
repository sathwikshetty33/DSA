//Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> m;
        vector <int> v;
        for(auto i=0;i<nums.size();i++)
        {
            
            if(m.find(target-nums[i])!=m.end())
            {
                
                v.emplace_back(i);
                 v.emplace_back(m[target-nums[i]]);
                 sort(v.begin(),v.end());
                 return v;

            }
            m[nums[i]]=i;
        }
         return v;
    }
};
//brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
       vector <int> sum;
        int i,it,x=0;
       for(it=0;it<v.size();it++)
       {
        for(i=0;i<v.size();i++)
        {
            if(it==i)
            {
                continue;
            }
            else if(v[it]+v[i]==t)
            {
                sum.push_back(i);
                x++;
                sum.push_back(it);
                break;
                
            }
    }
    if(x==1)
            {
                
                break;
            }
    }
   return sum;
    }
};