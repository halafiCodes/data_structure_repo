#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteAtPosition(int position)
    {

        if (head == nullptr)
        {
            cout << "List is empty. Nothing to delete.\n";
            return;
        }

        if (position <= 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position 1.\n";
            return;
        }

        Node *temp = head;
        Node *prev = nullptr;
        int count = 1;

        while (temp != nullptr && count < position)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }

        if (temp == nullptr)
        {
            cout << "Position out of range.\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Deleted node at position " << position << ".\n";
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty.\n";
            return;
        }

        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    cout << "Original list: ";
    list.display();

    list.deleteAtPosition(1);
    list.display();

    list.deleteAtPosition(3);
    list.display();

    list.deleteAtPosition(10);
    list.display();

    return 0;
}
