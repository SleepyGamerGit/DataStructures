//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Hillstead, Matthew on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <assert.h>

template <class Type>
class LinearNode : public Node<Type>
{
private:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNext();
    void setNext(linearNode<Type> * next);
};

//Implemtation of templates
template <class Type>
LinearNode<Type> :: LinearNode() : Node()
{}

template <class Type>
LinearNode<Type :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullprt;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

template <class Type>
LinearNode<Type> :: setNext(LinearNode<Type> * next)
{
    return this->next;
}

template <class Type>
void LinearNode<Type> :: setNext(LinearNode<Type> * next)
{
    this->next = next;
}

#endif /* LinearNode_h */
