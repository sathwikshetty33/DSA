#include<bits/stdc++.h>
using namespace std;

class heap{

    public:
    int arr[100];
    int size;
    heap()
    {
        size = 0;
        arr[0]=-1;
    }
    void insert(int val)
    {
        size++;
        arr[size]=val;
        int c=size;
        while(c > 1)
        {
            int parent= c/2;
            if(arr[c]>arr[parent])
            {
                swap(arr[c],arr[parent]);
            }
            c= parent;
        }
        
    }
    void heap_delete()
    {
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size)
        {
            int left = i*2;
            int right= i*2+1;
            if(left<size&&arr[left]>arr[i])
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(right<size&&arr[right]>arr[i])
            {
                swap(arr[i],arr[right]);
                i=right;
            }
            else
            {
                return;
            }
        }
    }
    void display()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;
    if(left<n&&a[left]>a[largest])
            {
                        largest=left;
            }
    if(right<n&&a[right]>a[largest])
            {
    
               largest=right;
            }
        if(largest != i)
        {
            swap(a[largest],a[i]);
            heapify(a,n,largest);
        }
    
    
}
int main()
{
    heap h;
    h.insert(50);
    h.display();
    h.insert(20);
    h.display();
    h.insert(30);
    h.display();
    h.insert(70);
    h.display();
    h.insert(60);
    h.display();
    h.heap_delete();
    h.display();
    int a[7]={-1,1,2,3,6,5,7};
    int n = 7;
    for(int i=n/2;i>0;i--)
    {
        heapify(a, n, i);
    }
    for(int i =0;i <n ; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}