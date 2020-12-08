namespace FastFood
{
    namespace LinkedList
    {
        class Node
        {
        public:
            int data;
            Node *next;
            Node();
        };

        class List
        {
        public:
            Node *head;
            List();
        };
    }
}