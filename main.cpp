#include <iostream>
#include "AbstractBST.h"
#include "ArrayBST.h"
using namespace std;

int main(){
    cout<< "\n\n\n";
    cout<<"------------------------Implementation of Binary Search Tree -------------------------"<<endl;
    AbstractBST * binaryTree = new ArrayBst();
    if(binaryTree->isEmpty()){
        cout<<"The binary tree is empty."<<endl;
    }
    binaryTree->add(40,999);
    binaryTree->add(50,999);
    binaryTree->add(60,999);
    binaryTree->add(48,999);
    binaryTree->add(35,999);
    binaryTree->add(37,999);
    binaryTree->add(20,999);
    binaryTree->add(21,999);
    binaryTree->add(33,999);
    cout<<"The binary Search Tree is: "<<endl;
    binaryTree->show();
    binaryTree->remove(48,0);
    cout<<"After removing "<<endl;
    binaryTree->show();
    //Checking if the BST is empty
    if(!binaryTree->isEmpty()){
        cout<<"The tree is not empty"<<endl;
    }
    // Finding the min value in the binary search tree
    int min;
    binaryTree->min(min);
    cout << "THe minimum element in the tree is: " << min << endl;
    //After removing the minimum element
    binaryTree->remove(min,0);
    binaryTree->min(min);
    cout<<"The minimum element after removing is : "<<min<<endl;
    //Finding the max value in the binary search tree
    int max;
    binaryTree->max(max);
    cout<<"THe maximum element in the tree is: " <<max<<endl;
    binaryTree->remove(60,0);
    binaryTree->show();
    binaryTree->max(max);
    cout << "The maximum element after removing is : " << max << endl;
    //finding min and max after adding two values
    binaryTree->add(15,1231);
    binaryTree->add(89,123);
    binaryTree->max(max);
    cout<<"The maximum and minimum element after adding two node are."<<endl;
    cout << "The maximum element after removing is : " << max << endl;
    binaryTree->min(min);
    cout << "THe minimum element in the tree is: " << min << endl;

    delete binaryTree;
}