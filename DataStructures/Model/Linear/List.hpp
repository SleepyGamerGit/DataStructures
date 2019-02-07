//
//  List.h
//  DataStructures
//
//  Created by Hillstead, Matthew on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "../Nodes/LinearNode.hpp"

template<class Type>
class list
{
protected:
    int size;
public:
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remoce(int index) = 0;
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};


#endif /* List_h */
