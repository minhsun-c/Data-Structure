void pushFront(int _data)
{
    Node *tmp = head;
    Node *newNode = new Node(_data);
    head = newNode;
    newNode -> setNext(tmp);
}
