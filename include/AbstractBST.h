#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST
{
public:
    // function delcration for some basic information in a BST
    virtual bool isEmpty() = 0;
    virtual void addBST(node *targetnode, node* newnode)=0;
    virtual void add(int key, int value) = 0;
    virtual void adddata(int key, int value) = 0;
    virtual void max(int &output) = 0;
    virtual void min(int &output) = 0;
    virtual bool exist(int targetKey) = 0;
    virtual void remove(int key, int start) = 0;
    virtual void show()=0;
    virtual bool searchBST(int targetkey)=0;
    virtual void removeBST(int keyToDelete)=0;
    virtual node min(node *tempo)=0;
    virtual node max(node *tempo)=0;
};

#endif