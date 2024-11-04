//Longest Sub-Array with Sum K
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int s=0;
        int ml=0;
        unordered_map <int,int> m;
        for(int i=0;i<n;i++)
        {
            s+=a[i];
           if(m.find(s)==m.end())
           {
               m[s]=i;
               
           }
            if(s==k)
            {
                ml=max(i+1,ml);
            }
            if(m.find(s-k)!=m.end())
            {
                ml=max(ml,i-m[s-k]);
            }
        }
        return ml;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends