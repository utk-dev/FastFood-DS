#include "Queue.h"

FastFood::Queue::Node::Node() : data{0}, next{nullptr}
{
}

FastFood::Queue::Queue::Queue() : front{nullptr}, rear{nullptr}
{
}
