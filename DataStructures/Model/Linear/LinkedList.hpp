//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Hillstead, Matthew on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>

protected:

    LinearNode<Type> * front;
    LinearNode<Type> * end;

public:

    LinkedList();

    virtual ~LinkedList;
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);

LinkedList<Type> :: LinkedList()
{
    this->front = nullprt;
    this->end = nullprt;
    this->size =  0;
}

LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}

void LinkedList :: add(Type item)
{
    linearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->ende = newData
    
    this->size += 1;
}

#endif /* LinkedList_h */
