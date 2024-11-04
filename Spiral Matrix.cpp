class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> v;
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1;
        while(top<=bottom&&left<=right)
       { for(int i=left;i<=right;i++)
        {
                v.emplace_back(matrix[top][i]);
        }
        top++;
        for(int j=top;j<=bottom;j++)
        {
            v.emplace_back(matrix[j][right]);
        }
        right--;
        if(top<=bottom)
        { for(int k=right;k>=left;k--)
        {
            v.emplace_back(matrix[bottom][k]);
        }
        bottom--;
        }
        if(left<=right)
        {
         for(int l=bottom;l>=top;l--)
        {
            v.emplace_back(matrix[l][left]);
        }
        left++;
        }
        }
        return v;
    }
};