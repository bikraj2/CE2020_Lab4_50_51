#ifndef ArrayBST_h
#define ArrayBST_h
#include "AbstractBST.h"
#define MAX 20
class Node
{
public:
    int key;
    int value;
    // default constructor
    Node();
    Node(int key , int value );
    // members of the class node
    
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
    bool exist(int targetKey);
    void remove(int key, int start);
    void show ();
private:
    Node list[MAX];
    
};

#endif