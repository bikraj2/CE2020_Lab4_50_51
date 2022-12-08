#include <iostream>
#include "AbstractBST.h"
#include "ArrayBST.h"
#include "linkedlistBST.h"

using namespace std;

int main(){
    AbstractBST * binaryTree = new ArrayBst();
    BST_linkedlist BST;
    node *x ;
    cout<< "\n\n\n";
    int response ;
    cout<<"Which implementation do you want to see?\n Press 1 for Array \n Press 2 for Linkedlist "<<endl;
    cin>>response;
    switch (response){
        case 1: 
        cout<<"------------------------Implementation of Binary Search Tree -------------------------"<<endl;

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
   break;
   case 2:
    cout<<"\n \n -----------------------Implementation of BST using linkedlist----------------------------\n"<<endl;

    
    //Checking if the tree is empty
    if (BST.isEmpty()){
        cout<<"The list is empty"<<endl;
    }
    
    
    //adding data to the BST using the adddata function
    BST .adddata(12,222);

    BST.adddata(52, 222);
    BST.adddata(9, 222);
    BST.adddata (1,222);


    cout <<"\nChecking if the tree is empty"<<endl;
    if (BST.isEmpty()){
        cout<<"The list is empty"<<endl;
    }
    else{
        cout<<"The list is not empty"<<endl;
    }
        
    
    //function to display the minimum valued key in the BST
    int smallest = BST.min(BST.root);
    cout<<"The smallest key in the tree is "<<smallest<<endl;


    //function to display the maximum valued key in the BST
    int largest =BST.max(BST.root);
    cout<<"The largest key in the tree is "<<largest<<endl;

    BST.showData(BST.root);
    //function to remove a node from the BST
    BST.removeBST(1);
    cout<<"\n Node removed"<<endl;
    
    BST.showData(BST.root);
    //function to carry a search in the tree
    BST.searchBST(12);
    BST.searchBST(91);
    // BST.inorder(BST.root); In order not working
    break;
    }

}