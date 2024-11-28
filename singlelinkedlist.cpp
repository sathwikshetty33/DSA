#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};
void display(node* head) {
    node* temp = head;
    while (temp != nullptr) { 
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    if (n <= 0) { 
        cout << "Linked list is empty!" << endl;
        return 0;
    }

    cout << "Enter the elements: ";
vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Create the head node
    node* head = new node(a[0]);
    node* mover = head;

    // Create the rest of the linked list
    for (int i = 1; i < n; i++) {
        node* temp = new node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    display(head);
    node* current = head;
    while (current != nullptr) {
        node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
