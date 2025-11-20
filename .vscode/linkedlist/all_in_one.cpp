#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList()
    {
        head = nullptr;
    }

    void insertAtBeginning(int val)
    {
        Node *newNode = new Node(val);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
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
        newNode->prev = temp;
    }

    void deleteFromBeginning()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        head = head->next;

        if (head != nullptr)
            head->prev = nullptr;

        delete temp;
    }

    void displayForward()
    {
        Node *temp = head;
        cout << "Forward: ";

        while (temp != nullptr)
        {
            cout << temp->data;
            if (temp->next != nullptr)
                cout << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }

    void displayBackward()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        cout << "Backward: ";
        while (temp != nullptr)
        {
            cout << temp->data;
            if (temp->prev != nullptr)
                cout << " <-> ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList dll;

    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);

    dll.displayForward();
    dll.displayBackward();

    cout << "\nInserting 5 at beginning...\n";
    dll.insertAtBeginning(5);
    dll.displayForward();

    cout << "\nInserting 40 at end...\n";
    dll.insertAtEnd(40);
    dll.displayForward();

    cout << "\nDeleting from beginning...\n";
    dll.deleteFromBeginning();
    dll.displayForward();
    dll.displayBackward();

    return 0;
}
