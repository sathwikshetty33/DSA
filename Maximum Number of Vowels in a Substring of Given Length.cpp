class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=k-1,c=0,count=0;
        for(int l=i;l<=j;l++)
            {
                if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')
                {
                    count++;
                  
                }
            }
        while(j<s.size())
        {
           
            c=max(c,count);
                if(c==k)
            {
                return c;
            }
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    count--;
                }
              i++;
              j++;
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                {
                    count++;
                }
        }
        return c;
    }
};