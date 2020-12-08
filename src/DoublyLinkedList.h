namespace FastFood
{
    namespace DoublyLinkedList
    {
        class Node
        {
        public:
            int data;
            Node *next;
            Node *prev;
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