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

    // Insert at the end (helper for testing)
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

    // 🔹 Insert at middle (after given position)
    void insertAtMiddle(int val, int position)
    {
        Node *newNode = new Node(val);

        // Case 1: Empty list or insert at beginning
        if (head == nullptr || position <= 1)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node *temp = head;
        int count = 1;

        // Traverse until one node before the desired position
        while (temp->next != nullptr && count < position - 1)
        {
            temp = temp->next;
            count++;
        }

        // Insert the node
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display all nodes
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main()
{
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    cout << "Before insertion: ";
    list.display();

    list.insertAtMiddle(30, 3); // insert 30 at position 3

    cout << "After insertion at position 3: ";
    list.display();

    return 0;
}
