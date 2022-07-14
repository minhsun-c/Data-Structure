#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    
    /* constructor */
        Node ();
        Node (int);
        Node (Node &);
    /* end constructor */
};

class List
{
public:
    Node *head;
    
    List();
    
    void pushFront(int);
    void print();
};

void List::pushFront(int _data)
{
    Node *tmp = this -> head;
    Node *newNode = new Node(_data);
    this -> head = newNode;
    newNode -> next = tmp;
}

void List::print()
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

List::List() { this -> head = NULL; }

