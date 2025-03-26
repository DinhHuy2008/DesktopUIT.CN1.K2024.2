#include <iostream>

using namespace std;


struct Node
{
    int data;
    Node* next;
};


void push(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}


Node* chuyendoidsdon(int x)
{
    Node* head = nullptr;
    
    if (x == 0) {
        push(head, 0);
        return head;
    }

    while (x > 0)
    {
        push(head, x % 2);
        x /= 2;
    }

    return head;
}


void inds(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        head = head->next;
    }
}

void giaiphong(Node*& head)
{
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int x;
    cout << "Nhap so nguyen x: ";
    cin >> x;

    Node* dslk = chuyendoidsdon(x);

    cout << "So nhi phan cua " << x << " la: ";
    inds(dslk);
    cout << endl;

    giaiphong(dslk);

    return 0;
}

