#ifndef linkedlistBST_h
#define linkedlistBST_h

#include <iostream>

#include "AbstractBST.h"
using namespace std;

class node {
    public:
    node *left_child;
    node *right_child;
    int data, key;
};

class BST_linkedlist : public AbstractBST{

    node *root;



public:
BST_linkedlist() {}

    bool isEmpty() = 0;
    void add(int key, int value) = 0;
    bool searchBST(int targetKey) = 0;
    void addBST(node *targetnode, node *newnode)=0;
     void adddata(int key, int value) = 0;
     void removeBST(int keyToDelete)=0;
     node min(node *tempo)=0;
     node max(node *tempo)=0;
 };
 
 #endif
 
