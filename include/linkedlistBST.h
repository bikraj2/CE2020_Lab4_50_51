#ifndef linkedlistBST_h
#define linkedlistBST_h

#include <iostream>

#include "AbstractBST.h"
using namespace std;

class node {
    node *left_child;
    node *right_child;
    int data;
};

class BST_linkedlist : public AbstractBST{

BST_linkedlist *root;

public:
BST_linkedlist() {}

    bool isEmpty() = 0;
    void add(int key, int value) = 0;
    void max(int &output) = 0;
    void min(int &output) = 0;
    void exist(int targetKey) = 0;
 };
 
 #endif
 
