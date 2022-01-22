#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
};



void transverseList(Node *head)
{
    cout << "[";
    while (head != NULL)
    {
        cout << "Data -> " << head->data << "|"
             << "Next -> " << head->next;
        if (head->next != NULL)
        {
            cout << ", ";
        }
        head = head->next;
    }
    cout << "]" << endl;
}
Node* insertAtTheBeginning(Node *head, int data)
{
    Node *newHead = new Node();
    newHead->data = data;
    newHead->next = head;
    head = newHead;
    return head;
}
int main(int argc, char const *argv[])
{

    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *tail = new Node();

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = tail;

    tail->data = 4;
    tail->next = NULL;
    cout << "---------------------Without insertion----------------------" << endl;
    transverseList(head);

    head = insertAtTheBeginning(head, 5);
    cout << "---------------------With insertion----------------------" << endl;

    transverseList(head);
    return 0;
}