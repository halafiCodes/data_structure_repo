#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next = nullptr;
    Node *prev = nullptr;

    Node(int val)
    {
        data = val;
    }
};
int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;

    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    head->next->next->next = new Node(50);
    head->next->next->next->prev = head->next->next;

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->next != nullptr)
        {
            cout << " <-> ";
        }
        temp = temp->next;
    }

    return 0;
};