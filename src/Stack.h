#include <stack>
namespace FastFood
{
    namespace Stack
    {
        class Stack
        {
            std::stack<int> st;
        public:
            int& top();
            void push(int h);
            void pop();
            bool empty();
        };
    }
}