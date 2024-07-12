// making a linked list
#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <iostream>
using namespace std;
class Node
{

public:
    int value;
    Node *next;
    Node(int data)
    {
        value = data;
        next = NULL;
    }
};
class linkedList
{

public:
    Node *head;
    linkedList()
    {
        this->head = NULL;
    }
    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void insertAtTail(int data)
    {
        Node *newNode = new Node(data);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertATk(int data, int k)

    {
        if (k == 0)
        {
            insertAtHead(data);
            return;
        }
        Node *newNode = new Node(data);
        Node *temp = head;
        int currPos = 1;
        while (currPos != k - 1)
        {
            temp = temp->next;
            currPos++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void updateAtk(int data, int k)
    {
        Node *temp = head;
        int currPos = 0;
        while (currPos != k - 1)
        {
            temp = temp->next;
            currPos++;
        }
        temp->value = data;
    }
    void deleteAtStart()
    {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
    void deleteAtTail()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *tailNodeToBeDeleted = temp->next;
        temp->next = NULL;
        free(tailNodeToBeDeleted);
    }
    void deleteAtk(int k)
    {
        if (k == 0)
        {
            deleteAtStart();
            return;
        }
        int currPos = 0;
        Node *prevNode = head;
        while (currPos != k)
        {
            prevNode = prevNode->next;
            currPos++;
        }
        Node *nodeToBeDeleted = prevNode->next;
        prevNode->next = prevNode->next->next;
        free(nodeToBeDeleted);
    }
    Node *reverse()
    {
        Node *prev = NULL;
        Node *curr = head;
        while (curr != NULL)
        {
            Node *nextPtr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextPtr;
        }
        Node *newHead = prev;
        return newHead;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};
#endif
// int main()
// {
//     linkedList ll;
//     ll.insertAtHead(4);
//     ll.insertAtHead(3);
//     ll.insertAtHead(2);
//     ll.insertAtHead(1);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//     ll.insertATk(0, 3);
//     ll.updateAtk(9, 3);
//     ll.deleteAtStart();
//     ll.deleteAtTail();
//     ll.deleteAtk(2);
//     ll.head = ll.reverse();
//     ll.display();
//     return 0;
// }
/*This is like the intenal working of a L.L likewise doubly and circluar L.L can be formed*/