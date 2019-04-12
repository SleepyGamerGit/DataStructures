//
//  BinaryTreeNode.h
//  DataStructures
//
//  Created by Hillstead, Matthew on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include "Node.hpp"
#include <assert.h>

template <class Type>
class BinaryTreeNode: public Node<Type>
{
private:
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
    BinaryTreeNode<Type> * root;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type> * getRoot();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    
    void setRootBinary(BinaryTreeNode<Type * next);
    void setLeftChild(BinaryTreeNode<Type * next);
    void setRightChild(BinaryTreeNode<Type * next);
};

#endif /* BinaryTreeNode_hpp */
