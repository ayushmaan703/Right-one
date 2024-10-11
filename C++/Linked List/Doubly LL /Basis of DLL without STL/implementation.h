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
    Node *prev;
    Node(int data)
    {
        value = data;
        next = NULL;
        prev = NULL;
    }
};
class linkedList
{

public:
    Node *head;
    Node *tail;
    linkedList()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
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
        newNode->prev = temp;
        tail = newNode;
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
        newNode->prev = temp;
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
        head->prev = NULL;
        free(temp);
    }
    void deleteAtTail()
    {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    }
    void deleteAtk(int k)
    {
        k -= 1;
        if (k == 0)
        {
            deleteAtStart();
            return;
        }
        int currPos = 0;
        Node *temp = head;
        while (currPos != k)
        {
            temp = temp->next;
            currPos++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    Node *reverse()
    {

        Node *curr = head;
        while (curr != NULL)
        {
            Node *nextPtr = curr->next;
            curr->next = curr->prev;
            curr->prev = curr;
            curr = nextPtr;
        }
        Node *newNode = tail;
        tail = head;
        head = newNode;
        return head;
    }
    int search(int k)
    {
        Node *temp = head;
        int loc = 0;
        while (temp != NULL)
        {
            if (temp->value == k)
                return loc + 1;
            loc++;
            temp = temp->next;
        }
        return -1;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << "<->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};
#endif
/*This is like the intenal working of a L.L likewise doubly and circluar L.L can be formed*/