class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int i=1;
        while(i<a.size())
        {
            if(i<=0)
            {
                i++;
            }
                if((a[i]<0&&a[i-1]>0))
                {
                    if(abs(a[i])!=abs(a[i-1]))
                  {  
                    if(abs(a[i])<abs(a[i-1]))
                    {
                        a.erase(a.begin()+i);
                        continue;
                        
                    }
                    else
                    {
                        a.erase(a.begin()+i-1);
                        i--;
                    }

                  }
                 else
                 {
                        a.erase(a.begin()+i);
                         a.erase(a.begin()+i-1);
                         i--;
                 }
                }
                else
              {  
                i++;
                }
        }
        return a;
    }
};