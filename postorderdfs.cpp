#include<bits/stdc++.h>
using namespace std;

class predfs{

    public: int data;
    predfs* left;
    predfs* right;
    predfs(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }

    
};
void display(predfs* root)
    {
        if(root == nullptr)
        {
            return;
        }
        display(root->left);
        display(root->right);
        cout<<root->data<<" ";cout<<root->data<<" ";
    }
int main()
{
predfs* root= new predfs(1);
root->left = new predfs(2);
root->right = new predfs(3);
root->left->left = new predfs(4);
root->left->right = new predfs(5);
display(root);
return 0;

}