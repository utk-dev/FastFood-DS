/**
 * Program to count the number of elements in a queue
 */

#include <iostream>
#include "Queue.h"

using namespace std;
using namespace FastFood::Queue;

int main()
{
    // create a queue
    Queue *Q = new Queue();

    // insert 1, 2, 3, 4, 5 from the rear in the queue
    for(int i = 1; i <= 5; i++)
    {
        Node *temp = new Node();
        temp -> data = i;
        if(Q -> front == nullptr and Q -> rear == nullptr)
            Q -> front = Q -> rear = temp;
        else
        {
            Q -> rear -> next = temp;
            Q -> rear = temp;
        }
    }

    // print the queue
    cout << "BEGIN ";
    for(Node *iter = Q -> front; iter != nullptr; iter = iter -> next)
        cout << iter -> data << ' ';
    cout << "END" << endl;

    return 0;
}