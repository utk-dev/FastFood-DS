#include "Stack.h"

int& FastFood::Stack::Stack::top()
{
    return st.top();
}

void FastFood::Stack::Stack::push(int h)
{
    st.push(h);
}

void FastFood::Stack::Stack::pop()
{
    st.pop();
}

bool FastFood::Stack::Stack::empty()
{
    return st.empty();
}