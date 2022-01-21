#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *pointer;
};

void transverseList(Node *head)
{
    cout << "[";
    while (head != NULL)
    {
        cout << "Data -> " << head->data << "|"
             << "Pointer->" << head->pointer;
        if (head->pointer != NULL)
        {
            cout << ", ";
        }
        head = head->pointer;
    }
    cout << "]" << endl;
}
int main(int argc, char const *argv[])
{

    Node *firstHead = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *tail = new Node();

    firstHead->data = 1;
    firstHead->pointer = first;

    first->data = 2;
    first->pointer = second;

    second->data = 3;
    second->pointer = tail;

    tail->data = 4;
    tail->pointer = NULL;

    transverseList(firstHead);

    Node *secondHead = new Node();
    Node *firstNum = new Node();
    Node *secondNum = new Node();
    Node *thirdNum = new Node();
    Node *fourthNum = new Node();
    Node *fifthNum = new Node();
    Node *secondtail = new Node();

    secondHead->data = 5;
    secondHead->pointer = firstNum;

    firstNum->data = 6;
    firstNum->pointer = secondNum;

    secondNum->data = 7;
    secondNum->pointer = thirdNum;

    thirdNum->data = 8;
    thirdNum->pointer = fourthNum;

    fourthNum->data = 9;
    fourthNum->pointer = fifthNum;

    fifthNum->data = 10;
    fifthNum->pointer = secondtail;

    secondtail->data = 11;
    secondtail->pointer = NULL;

    transverseList(secondHead);
    return 0;
}
