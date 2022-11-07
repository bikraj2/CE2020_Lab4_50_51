#include "ArrayBST.h"
#define MAX 128
#include <iostream>
ArrayBst :: ArrayBst(){
    for (int i = 0; i < MAX; i++)
    {
        list[i]=-1;
    }
    
}

// A function definition to figure out if the binary search tree is empty
bool ArrayBst :: isEmpty(){
    if(list[0].key ==NULL){
        return true;
    }
    return false;
}
void ArrayBst:: add(int key,int value){


}

bool ArrayBst :: exist (int targetKey){
    
}