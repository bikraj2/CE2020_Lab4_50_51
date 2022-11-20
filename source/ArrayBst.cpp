#include "ArrayBST.h"
#include "AbstractBST.h"

#include <iostream>

using namespace std;// declaring std on global namespace
// default constructor for a node of the binary search tree
Node::Node( ){
    this->key =0;
    this->value = 0;
}
//parameterized constructor for node
Node::Node(int key ,int value ){
    this->key =key;
    this->value = value;
}
//default constructor for the binary search tree by using array
//assigns -1 to all the node's keys :: -1 indicated the node is empty
ArrayBst ::ArrayBst()
{
    for (int i = 1; i < MAX; i++)
    {
        list[i].key = -1;
    }
}

// A function definition to figure out if the binary search tree is empty
bool ArrayBst ::isEmpty()
{
    if (list[1].key == -1)
    {
        return true;
    }
    return false;
}
//Adds an incoming to the binary serach tree in the appropriate place 
// left node of a parent node contains all nodes smaller and the right contains the ne bigger than the parent node's key
void ArrayBst::add(int key, int value)
{

    if (exist(key))
    {
        std::cout<<"The data already Exists"<<std::endl;
    }
    for (int i = 1; i < MAX;)
    {
        if (list[i].key == -1)
        {
            list[i].key = key;
            break;
        } 
        int val = list[i].key;

        if (key>val)
        {
            i = 2*i+1;
        }else {
            i= 2*i;
        }
    }
}
//iterated through the tress's left node till the last left node
// the last left node is the one containing the maximum value
void ArrayBst::max (int & output){
    int i =1;
        
    while (list[i].key!=-1 && i <MAX){
        i=2*i+1;
    }
    output = list[(i-1)/2].key;
}
bool ArrayBst ::exist(int targetKey)
{
    for (int i = 1; i < MAX;)
    {
        if (list[i].key == -1)
        {
            return false;
        }
        int val = list[i].key;
        if (targetKey == val)
        {
            return true;
        }
        else if (targetKey > val)
        {
            i = 2 * i + 1;
        }
        else
        {
            i = 2 * i;
        }
    }
    return false;
}
void ArrayBst:: min (int &output){
    int i =1;
    
    while (list[i].key!=-1 && i <MAX){
            
        i=2*i;
    }
    output = list[(i)/2].key;
}
void ArrayBst:: remove (int targetKey,int root)
{
    for (int i=root; i < MAX; i++)
    {
        if(list[i].key==targetKey){
            Node rightChild = list[2*i+1];
            Node leftChild = list[2*i];
            if(rightChild.key == -1 &&  leftChild.key == -1){
                list[i].key=-1;
                list[i].value=-1;
            }else if( rightChild.key == -1){
                list[i].key = leftChild.key;
                list[i].value = leftChild.value;
                i=2*i;
                remove(leftChild.key,i);
            }else if(leftChild.key == -1){   
                list[i].key = rightChild.key;
                list[i].value = rightChild.value;
                i=2*i+1;
                remove(rightChild.key,i);
            }else{
                int j = 2 *i;
                while (list[j].key!=-1 && j <MAX){
                        j=2*j+1;
                }
                int maxPosi =(j-1)/2;
                list[i].key = list[maxPosi].key;
                list[i].value = list[maxPosi].value;
                list[maxPosi].key = -1;
                list[maxPosi].value = -1;
            }
            break;
        }
    }
}

void ArrayBst:: show(){
    for(int i = 0;i<MAX;i++){
        std::cout<<"The Element is :"<<list[i].key<<std::endl;
    }
}
