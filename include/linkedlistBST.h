#ifndef linkedlistBST_h
#define linkedlistBST_h

#include <iostream>

#include "AbstractBST.h"
using namespace std;
class node
{
public:
    node *left_child;
    node *right_child;

    int data, key;

    node();
};

class BST_linkedlist : public AbstractBST
{

public:
    BST_linkedlist(node *root = nullptr) : root(nullptr)
    {
    } // calling constructor

    node *root;

    bool isEmpty();
    void add(int key, int value);
    bool searchBST(int targetKey);
    void addBST(node *targetnode, node *newnode);
    void adddata(int key, int value);
    void removeBST(int keyToDelete);
    int min(node *tempo);
    int max(node *tempo);
    void max(int &output);
    void min(int &output);
    bool exist(int targetKey);
    void remove(int key, int start);
    void show();
    void showData(node *n);
    void inorder(node *n1);
};

#endif
