#ifndef NODE_HPP
#define NODE_HPP

class Node
{
private:
    /* data */
public:
    Node(int value);
    ~Node();
    Node *next;
    int data;
};

#endif // !