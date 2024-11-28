#include<bits/stdc++.h>
using namespace std;

class bfs{

    public: int data;
    bfs* left;
    bfs* right;
    bfs(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }

    
};
void display(bfs* root)
    {
        queue <bfs*> q;
        if (root == nullptr)
        {
            return;
        }
        q.push(root);
        while(!q.empty())
        {
            bfs* cur = q.front();
            q.pop();
            cout<<cur->data<<" ";
            if(cur->left!=nullptr)
            {
                q.push(cur->left);
            }
            if(cur->right!=nullptr)
            {
                q.push(cur->right);
            }
        }
    }
int main()
{
bfs* root= new bfs(1);
root->left = new bfs(2);
root->right = new bfs(3);
root->left->left = new bfs(4);
root->left->right = new bfs(5);
display(root);
return 0;

}