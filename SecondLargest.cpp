#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  

    int getSecondLargest(vector<int> &arr) {
        int i=0;
        int s=INT_MIN;
        int l=arr[i];
  
        for( i=0;i<arr.size();i++)
        {
         if(arr[i]>l)
            {
               s=l;
               l=arr[i];
                
            }
          else if(arr[i]!=l&&arr[i]>s)
            {
                s=arr[i];
            }
        
        }
        if(s!=l&&s!=INT_MIN)
        {
        return s;
        }
        else return -1;
    }
};



int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}