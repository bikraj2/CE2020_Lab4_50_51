#include <iostream>
#include "linkedlistBST.h"
using namespace std;

node ::node (){//calling constructor
    this -> key = 0;
    this -> data = 0;
    left_child = NULL;
    right_child = NULL;

}


//function to determine if the tree is empty or not//
bool  BST_linkedlist ::isEmpty (){
    if (root == NULL)
    {
        return true;
    }
    else {
        return false;
    }
}


bool BST_linkedlist ::searchBST(int targetkey){//function to check whether the key is present in the tree or not
    if(isEmpty()){
        cout<<"The tree is empty"<<endl;
        return 0;
    }
    node*temp = root;
    while(temp != NULL){
        if (temp -> key == targetkey) {
            cout<<"The key is in the tree"<<endl;
            return true;
        }
        else if(temp->key>targetkey){
            temp=temp->left_child;
        
        }else if(temp->key<targetkey){
            temp=temp->right_child;
        }
    }
    cout<<"The key is not in the tree"<<endl;
    return false;   
}


void BST_linkedlist :: addBST(node *targetnode, node *newnode){//function to add node into the tree

    if(this->root==NULL){
        root = newnode;
        
        cout<<"Root added "<<endl;
        //showData(root);
    }
     
    else if(targetnode->key > newnode->key){
        if(targetnode->left_child == nullptr) // if left child's position is empty
        {
            targetnode->left_child = newnode;
        }
        else
        {
            addBST(targetnode->left_child, newnode);
        }
    }
    else {
        if(targetnode->right_child == nullptr) // if right child's position is empty
        {
            targetnode->right_child = newnode;
        }
        else
        {
            addBST(targetnode->right_child, newnode);
        }
    }
}

void BST_linkedlist ::adddata(int key, int value){ //function to add data into the tree
    node *addednode = new node();
    addednode ->key = key;
    addednode ->data = value;
    
    addBST(root, addednode);
}

void BST_linkedlist ::removeBST(int keyToDelete)// function to remove the key from the tree
{
    node *temp = root;
    if(temp->key == keyToDelete){
        node *temp2 = temp->left_child;
        node *parent2 = temp;
        while(temp2->right_child != nullptr){
            parent2 = temp;
            temp2 = temp2->right_child; 
        }
        parent2->right_child = nullptr;
        temp2->left_child = temp->left_child;
        temp2->right_child = temp->right_child;
        delete[] temp;
        root = temp2;
        return;
    
    }
    node *parent = root;
    while(true){
        if(temp->key == keyToDelete
    )
        {
            break;
        }else if(temp->key < keyToDelete
    ){
            parent = temp;
            temp = temp->right_child;
        }else if(temp->key > keyToDelete
    ){
            parent = temp;
            temp = temp->left_child;
        }
        if(temp == nullptr){
            return;
        }
    }
    if(temp->left_child == nullptr && temp->right_child == nullptr)
    {   
        
        delete[] temp;
        return;
    }else if(temp->left_child == nullptr && temp->right_child != nullptr){
        if(parent->left_child ==  temp){
            parent->left_child = temp->right_child;
        }else{
            parent->right_child = temp->right_child;
        }
        delete[] temp;
        return;
    }else if(temp->left_child != nullptr && temp->right_child == nullptr){
        if(parent->left_child ==  temp){
            parent->left_child = temp->left_child;
        }else{
            parent->right_child = temp->left_child;
        }
        delete[] temp;
        return;
    }else{
        node *temp2 = temp->left_child;
        node *parent2 = temp;
        while(temp2->right_child != nullptr){
            parent2 = temp;
            temp2 = temp2->right_child;
        }
        parent2->right_child = nullptr;
        if(parent->left_child ==  temp){
            parent->left_child = temp2;
        }else{
            parent->right_child = temp2;
        }
        temp2->left_child = temp->left_child;
        temp2->right_child = temp->right_child;
        delete[] temp;
        return;
    }
    
}


int BST_linkedlist :: min(node *tempo){//function to return the minimum key in the tree
    node *temporary = tempo;
    while (temporary->left_child != NULL){
        temporary = temporary->left_child;
        
    }
    return temporary->key;

}

int BST_linkedlist :: max(node *tempo){ //function to calculate the maximum key in the tree and return it
    node *temporary = tempo;
    while (temporary->right_child != NULL){
        temporary = temporary->right_child;
        
    }
    return temporary->key;

}

void BST_linkedlist ::showData(node *n){ //shows the data at the desired node
    if (n== NULL){
        cout<<"\n\nkey==NULL"<<"value==NULL"<<endl;
    }
    cout <<"Key = "<< n->key<<endl;
    cout <<"Data = "<<n->data <<endl;
    
    

}

void BST_linkedlist:: inorder(node *node)
{
    // if(node!= NULL)
    // {
    //     inorder(node->left_child);
    //     cout<< node->key << ":" << node->data<<endl;
    //     inorder(node->right_child);
    // }
}
    void BST_linkedlist :: max(int &output){}
    void BST_linkedlist :: min(int &output) {}
     bool  BST_linkedlist :: exist(int targetKey) {return 0;}
     void BST_linkedlist ::  remove(int key, int start) {}
     void BST_linkedlist ::  show(){}
     void BST_linkedlist :: add(int key, int value){}