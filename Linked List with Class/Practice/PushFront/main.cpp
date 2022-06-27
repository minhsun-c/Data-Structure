#include <iostream>

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

class List
{
private:
    Node *head;
public:
    List();
    Node *getHead();
    void setHead(Node *);
    void pushFront(int);
    void print();
};

void List::pushFront(int _data)
{
    // Finish this function
}

int main()
{
    List *list = new List;
    int len;
    std::cin >> len;
    for (int i=0; i<len; i++)
    {
        int input;
        std::cin >> input;
        list -> pushFront(input);
    }
    list -> print();
}

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

List::List() { this -> head = NULL; }

Node *List::getHead() { return this -> head; }
void List::setHead(Node *_head) { this -> head = _head; }

void List::print()
{
    Node *cur = this -> head;
    while (cur != NULL)
    {
        std::cout << cur -> getData() << " -> ";
        cur = cur -> getNext();
    }
    std::cout << "NULL" << std::endl;
}
