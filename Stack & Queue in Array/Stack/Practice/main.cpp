#include <iostream>

class Stack
{
private:
    int top; // init as 0
    int db[100]; // array for database
public:
  /*.finish these functions */
    Stack(); // default constructor
    Stack(Stack &); // copy constructor
    int getTop(); // return top
    void setTop(int); // set top to new top
    void push(int); // add data to db, top ++
    int pop(); // pop from db, top --
  /*.finish these functions */
  
    void print(); // written below int main
};

int main()
{
    Stack stack;

    int N;
    std::cin >> N;

    for (int i=0; i<N; i++)
    {
        int op;
        std::cin >> op;
        if (op == 0)
            stack.pop();
        else if (op == 1)
        {
            int data;
            std::cin >> data;
            stack.push(data);
        }
    }

    stack.print();
}

void Stack::print()
{
    std::cout << "bottom -> ";
    for (int i=0; i<this -> top; i++)
        std::cout << this -> db[i] << " -> ";
    std::cout << "top\n";
}
