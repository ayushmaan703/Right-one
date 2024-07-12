/*given 2 ll check if they are equal (here equal mean everything same ) */
#include <iostream>
#include "../../Basis of LL without STL/implementation.h"
using namespace std;
void isEqual(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->value != temp2->value)
        {
            cout << "Not equal\n";
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 == NULL && temp2 == NULL)
    {
        cout << "Both LL are equal\n";
    }
    else
    {
        cout << "Not equal\n";
    }
    return;
}
int main()
{
    linkedList ll;
    linkedList ll1;
    ll.insertAtHead(4);
    ll.insertAtHead(4);
    ll.insertAtHead(4);
    ll1.insertAtHead(4);
    ll1.insertAtHead(0);
    ll1.insertAtHead(4);
    ll1.insertAtHead(4);
    ll.display();
    ll1.display();
    isEqual(ll.head, ll1.head);
    return 0;
}