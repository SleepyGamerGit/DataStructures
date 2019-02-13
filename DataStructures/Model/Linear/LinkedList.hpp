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
class LinkedList : public list<Type>
{

protected:

    LinearNode<Type> * front;
    LinearNode<Type> * end;

public:

    LinkedList();

    virtual ~LinkedList();
    virtual int getSize() const;
    virtual LinearNode<Type> * getFront();
    virtual LinearNode<Type> * getEnd();
    
    virtual void add(Type item);
    virtual void addAtIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
//bool contains (Type item);
};
template <class Type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size =  0;
}
template <class Type>
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
template <class Type>
void LinkedList<Type>:: add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->ende = newData;
    
    this->size += 1;
}

template <class Type>
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if (index == 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for (int position = 0; position < index; position++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}

template <class Type>
Type LinkedList<Type> :: remove (int index)
{
    assert(index >= 0 && index < this->size);
    Type data;
    
    LinearNode<Type> * current = front;
    
    for (int position = 0; position < index; position++)
    {
        current = current->getNextNode();
    }
    
    data = current->getData();
    
    return data;
}
template <class Type>
Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index  < this->size);
    
    LinearNode<Type> * current
}

//template <class Type>
//bool LinkedList<Type> :: contains(Type thingToFind)
//{
 //   bool exists = false;
    
 //   LinearNode<Type> * searchPointer = front;
    
  //  for (int index = 0; index < getSize(); index++)
   // {
    //    if (searchPointer->getData() == thingToFind)
      //  {
    //        return true;
       // }
       // searchPointer = searchPointer->getNextNode();
  //  }
    
  //  return exists;
//}

#endif /* LinkedList_h */
