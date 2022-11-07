#ifndef ArrayBST_h
#define ArrayBST_h
#include "AbstractBST.h"

#define MAX 128;
class Node
{
public:
    // default constructor
    Node(int key = 0, int value = 0);
    // members of the class node
    int key;
    int value;
};

class ArrayBst : public AbstractBST
{
public:
    ArrayBst();
    ~ArrayBst();
    bool isEmpty();
    void add(int key, int value);
    void max(int &output);
    void min(int &output);
    void exist(int targetKey);
    void remove(int key);
private:
    Node list[128];
};

#endif