#include<bits/stdc++.h>
using namespace std;

class queues{
    public:
    int front,rear,size;
    int* q;
    queues(int n){
        front = -1;
        rear = -1;
        size= n;
        q = new int[n];
    }
    bool isfull(){
        if((rear+1)%size == front)
        {
            return true;
        }
        return false;
    }
    bool isempty()
    {  
        if(front==-1 && rear==-1 )
        {
            return true;
        }
        return false;
    }
    void enqueue(int val)
    {
        if(isfull())
        {
            cout<<"The queue is full cannot be inserted"<<endl;
        }
        else{
            q[(rear+1)%size] = val;
            rear = (rear+1)%size;
            if(front == -1)
            {
                front = rear;
            }
        }
    }
    void dequeue()
    {
        if(isempty())
        {
            cout<<"The queue is empty cannot be deleted"<<endl;
        }
        if(front == rear)
        {
            front = rear =-1;
        }
        else{
            front = (front+1)%size;
        }
        
    }
    void display()
    {
        if(isempty())
        {
            cout<<"The queue is empty ";
        }
        int i = front;
       while(true)
       {
        cout<<q[i]<<" ";
        if(i==rear)
        {
            break;
        }
        i=(i+1)%size;
       }
        cout<<endl;
    }
};
int main()
{
queues qu(5);
qu.enqueue(6);
qu.enqueue(63);
qu.enqueue(62);
qu.enqueue(67);
qu.enqueue(68);
qu.enqueue(69);
qu.display();
}