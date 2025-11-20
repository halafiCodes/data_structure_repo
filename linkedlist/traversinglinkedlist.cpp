#include <iostream>
using namespace std;

class Node
{

public:
    int val;
    Node *next;

public:
    Node(int a)
    {
        val = a;
        next = nullptr;
    }
};

void traverseList(Node *head)
{

    while (head != nullptr)
    {
        cout << head->val << " ";
        if (head->next != nullptr)
            cout << "->";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(30);
    head->next->next = new Node(60);
    head->next->next->next = new Node(80);

    traverseList(head);
}