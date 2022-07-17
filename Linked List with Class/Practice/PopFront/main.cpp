#include <iostream>
#include <vector>

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
    int popFront();
};

void List::pushFront(int _data)
{
    // Finish this function
}

void List::print()
{
    // Finish this function
}

int List::popFront()
{
    // Finish this function
}

int main()
{
    List *list = new List;
    std::vector <int> v;
    int len;
    std::cin >> len;
    for (int i=0; i<len; i++)
    {
        int input;
        std::cin >> input;
        list -> pushFront(input);
    }
    while (true)
    {
        list -> print();
        int r = list -> popFront();
        v.push_back(r);
        if (r == -1)
            break;
    }
    for (int i: v)
        std::cout << i << " ";
    std::cout << std::endl;
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
