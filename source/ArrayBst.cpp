#include "ArrayBST.h"
#define MAX 128
#include <iostream>
ArrayBst ::ArrayBst()
{
    for (int i = 1; i < MAX; i++)
    {
        list[i] = -1;
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
void ArrayBst::add(int key, int value)
{

    if (exist(key))
    {
        throw 1;
    }

    for (int i = 0; i < MAX;)
    {
        if (list[i].key = NULL)
        {
            list[i].key = key;
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
void ArrayBst::max (int & output){
    while (list[i].key!=
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