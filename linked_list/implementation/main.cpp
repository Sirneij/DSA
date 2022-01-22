#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
};

Node *head = new Node();

void transverseList(Node *head = head)
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
Node *insertAtTheBeginning(Node *head, int data)
{
    Node *newHead = new Node();
    newHead->data = data;
    newHead->next = head;
    head = newHead;
    return head;
}

void insertAtNthPosition(int data, int n)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    // Insert at the beginning?
    if (n == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *nMinusOnethNode = head;
    for (int i = 0; i < n - 2; i++)
    {
        nMinusOnethNode = nMinusOnethNode->next;
    }
    newNode->next = nMinusOnethNode->next;
    nMinusOnethNode->next = newNode;
}
int main(int argc, char const *argv[])
{

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
    transverseList(head);

    // head = insertAtTheBeginning(head, 5);
    insertAtNthPosition(9, 2);
    transverseList();

    return 0;
}