class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int k) {
        int l=0,n=0;
        while(l<f.size())
        {
            if(l==0)
            {
                if(f[l]==0)
               { 
                if((f.size()==1&&f[l]==0)||f[l+1]==0)
                {
                    f[l]++;
                    n++;
                   
                }
                }
            }
            if(f[l]==0&&l!=f.size()-1&&l>0)
            {
                if(f[l-1]==0&&f[l+1]==0)
                {
                    f[l]++;
                    n++;
                }
            }
            if(l==f.size()-1&&f[l]==0)
            {
                if(f[l-1]==0)
                {
                    n++;
                }
            }
            l++;
            
        }

        if(n>=k)
        {
            return true;

        }
        return false;
    }
};