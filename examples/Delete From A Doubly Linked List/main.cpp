/** 
 * Program to Delete An Element from the back of a doubly linked list
*/

#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;
using namespace FastFood::DoublyLinkedList;

int main()
{
    List *Ls = new List();
    
    // insert 5 elements in the doubly linked list
    int elem;

    for (int i = 0; i < 5; i++)
    {
        cin >> elem;

        // insert element
        Node *Element = new Node();
        Element -> data = elem;
        Element -> next = Ls -> head;
        if(Ls -> head != nullptr)
        {
            Ls -> head -> prev = Element;
        }
        Ls -> head = Element;
    }

    // print the list before deletion
    for(Node *i = Ls -> head; i != nullptr; i = i -> next)
    {
        cout << i -> data << " ";
    }
    cout << "END" << endl;

    // navigate to the last element
    Node *temp = Ls -> head;
    if(temp == nullptr)
    {
        cout << "There are no elements in the Linked List" << endl;
        return 1;
    }

    while(temp -> next != nullptr)
    {
        temp = temp -> next;
    }

    if(temp == Ls -> head)
    {
        // If there is only one element in the List
        Ls -> head = nullptr;
    }
    else
    {
        Node *newLast = temp -> prev;
        newLast -> next = nullptr;
    }

    // delete the last node
    delete temp;
    
    // print the list after deletion
    for(Node *i = Ls -> head; i != nullptr; i = i -> next)
    {
        cout << i -> data << " ";
    }
    cout << "END" << endl;

    return 0;
}
