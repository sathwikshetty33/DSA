//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
       int i=0,j=0;
       vector <int> v;
       while(i<a.size()&&j<b.size())
       {
           if(a[i]<=b[j])
           {
               if(v.size()==0||v.back()!=a[i])
               {
                   v.emplace_back(a[i]);
               }
               i++;
           }
           else
           {
               if(v.size()==0||v.back()!=b[j])
               {
                   v.emplace_back(b[j]);
               }
               j++;
               
           }
       }
       while(i<a.size())
       {
           if(v.size()==0||v.back()!=a[i])
               {
                   v.emplace_back(a[i]);
               }
               i++;
       }
       while(j<b.size())
       {
           if(v.size()==0||v.back()!=b[j])
               {
                   v.emplace_back(b[j]);
               }
               j++;
       }
       return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}