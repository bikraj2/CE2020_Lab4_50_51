#include <iostream>
#include "linkedlistBST.h"
using namespace std;
node :: node (){
    this -> key = 0;
    this -> data = 0;
node *left_child = NULL;
node *right_child = NULL;

}
BST_linkedlist ::BST_linkedlist (){ root = NULL;}; // calling constructor 

//function to determine if the tree is empty or not//
bool  BST_linkedlist ::isEmpty (){
    if (root == NULL)
    {
        return true;
    }
}


bool BST_linkedlist ::searchBST(int targetkey){
    int t = isEmpty();
    if(t == 1){
        cout<<"The tree is empty"<<endl;
        return 0;
    }
    else if (root -> key == targetkey) {
        cout<<"The key of the root is the key"<<endl;
        return true;
    }
    else
       {
        node *temp = root;
        while (temp != NULL){
            if (targetkey > temp->key){
                temp= temp->right_child;
            }
            else if (targetkey< temp->key){
                temp= temp ->left_child;
            }
            else if(targetkey == temp->key){
                cout<<"Key found"<<endl;
                return true;
            }
    }
    }
    
}
void BST_linkedlist ::adddata(int key, int value){
    node *addednode;
    addednode->key = key;
    addednode->data = value;
    
    addBST(root, addednode);

    
}

void BST_linkedlist :: addBST(node *targetnode, node *newnode){
     
    if(targetnode->key > newnode->key){
        node *targetnode = targetnode->left_child;
        if (targetnode = NULL){
            targetnode = newnode;
        }
        else {
        void addBST(node *targetnode, node *newnode);
        }
    }
    else {
        node*targetnode = targetnode->right_child;
          if (targetnode = NULL){
            targetnode = newnode;
        }
        else {
        void addBST(node *targetnode, node *newnode);
        }
    }
}


void BST_linkedlist :: removeBST (int keyToDelete){
   int c;
    c = searchBST(keyToDelete);
    if( c== 0 ){
        cout<<"The entered key is not in the BST"<<endl;
    }
    else if(c==1 && keyToDelete==root->key){

    }
    else{
        
        node *temp, *predecessor;

        temp = root;
        while (temp != NULL){
        if (keyToDelete> temp->key){
            *predecessor = *temp;
            temp= temp->right_child;
        }
        else if (keyToDelete < temp->key){
            *predecessor = *temp;
            temp= temp->left_child;
        }
        else if (keyToDelete==temp->key){
            if (predecessor->key < temp->key){
                node *extra;
                *extra = min(temp);
                extra->left_child= temp->left_child;
                extra->right_child = temp->right_child;
                predecessor->right_child = extra;
                

            }
            else{
                node *extra;
                *extra = max(temp);
                extra->left_child= temp->left_child;
                extra->right_child = temp->right_child;
                predecessor->left_child = extra;
            }
            delete temp;
        }
        }

    }
}



node BST_linkedlist :: min(node *tempo){
    node *temporary = tempo;
    while (temporary->left_child != NULL){
        temporary = temporary->left_child;
        return *temporary;
    }

}

node BST_linkedlist :: max(node *tempo){
    node *temporary = tempo;
    while (temporary->right_child != NULL){
        temporary = temporary->right_child;
        return *temporary;
    }

}

