/** 
 * Program to insert 5 elements one-by-one in the front of a singly linked list
*/

#include <iostream>
#include "LinkedList.h"

using namespace std;
using namespace FastFood::LinkedList;

int main()
{
    List *Ls = new List();
    int elem;

    cout << "Enter 5 elements to be inserted in the beginning of a Linked List one-by-one" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> elem;
        
        // Create new node and insert at the beginning
        Node *Element = new Node();
        Element -> data = elem;
        Element -> next = Ls -> head;
        Ls -> head = Element;
    }

    // Print the List
    cout << "The created list is: ";
    for(Node *temp = Ls -> head; temp != nullptr; temp = temp -> next)
    {
        cout << temp -> data << " ";
    }
    cout << "END" <<  endl;

    return 0;
}
