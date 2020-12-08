#include "DoublyLinkedList.h"

FastFood::DoublyLinkedList::Node::Node() : data{0}, prev{nullptr}, next{nullptr}
{
}

FastFood::DoublyLinkedList::List::List() : head{nullptr}
{
} 