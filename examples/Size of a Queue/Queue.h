namespace FastFood
{
    namespace Queue
    {
        class Node
        {
        public:
            int data;
            Node *next;
            Node();
        };

        class Queue
        {
        public:
            Node *front;
            Node *rear;
            Queue();
        };
    }
}