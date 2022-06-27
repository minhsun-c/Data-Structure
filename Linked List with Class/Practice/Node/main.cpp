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

int main()
{
    // by default constructor
    Node nodeA;
    std::cout << "NodeA data = " << nodeA.getData() << std::endl; // 0
    std::cout << "NodeA next = " << nodeA.getNext() << std::endl; // 0x0 or NULL
    std::cout << "NodeA address = " << &nodeA << std::endl; // address of nodeA
    
    // by constructor with given data
    Node nodeB(100);
    nodeB.setNext(&nodeA); // nodeB.next 紀錄 nodeA記憶體前緣
    std::cout << "NodeB data = " << nodeB.getData() << std::endl; // 100
    std::cout << "NodeB next = " << nodeB.getNext() << std::endl; // address of nodeA
    std::cout << "NodeB address = " << &nodeB << std::endl; // address of nodeB

    // by copy constructor
    Node nodeC(nodeB);
    std::cout << "NodeC data = " << nodeC.getData() << std::endl; // 100
    std::cout << "NodeC next = " << nodeC.getNext() << std::endl; // address of node A
    std::cout << "NodeC address = " << &nodeC << std::endl; // address of nodeC
}
