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

void List::print()
{
    Node *cur = this -> head;
    while (cur != NULL)
    {
        std::cout << cur -> data << " -> ";
        cur = cur -> next;
    }
    std::cout << "NULL" << std::endl;
}
