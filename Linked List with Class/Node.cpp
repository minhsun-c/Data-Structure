class Node
{
private:
    int data;
    Node *next;
public:
    /* constructor */
        Node ();
        Node (int);
        Node (Node &);
    /* end constructor */

    /* member access function */
        int getData();
        void setData(int);
        Node *getNext();
        void setNext(Node *);
    /* end member access function */
};

Node::Node ()
{
    this -> data = 0;
    this -> next = NULL;
}
Node::Node (int _data)
{
    this -> data = _data;
    this -> next = NULL;
}
Node::Node (Node &node)
{
    this -> data = node.data;
    this -> next = node.next;
}
int Node::getData() { return this -> data; }
void Node::setData(int _data) { this -> data = _data; }
Node *Node::getNext() { return this -> next; }
void Node::setNext(Node *_next) { this -> next = _next; }
