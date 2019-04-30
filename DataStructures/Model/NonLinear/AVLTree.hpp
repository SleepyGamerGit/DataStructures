//
//  AVLTree.hpp
//  DataStructures
//
//  Created by Hillstead, Matthew on 4/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"


template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
       {
           parent = new BinaryTreeNode<Type>(inserted);
           
           if (this->getRoot() == nullptr)
           {
               this->setRoot(parent);
           }
           return parent;
       }
       else if(inserted < parent->getNodeData())
       {
           parent->setLeftChild(insertNode(parent->getLeftChild(), inserted));
           parent->balancedSubTree(parent)
       }
       else if (inserted > parent->geNodeData())
       {
           parent->setRightChild(insertNode(parent->getRightChild(), inserted));
           parent = balanceSubTree(parent);
       }
       return parent;
       
}
       
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        return parent
    }
    if(inserted < parent->getNodeData())
    {
        parent->setLeftChild(removedNode(parent->getLeftChild(), inserted));
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightChild(removeNode(parent->getRightChild(), inserted));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftChild() == nullptr && parent->getRightChild() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftChild() == nullptr)
        {
            *parent = *parent->getRightChild();
        }
        else if(parent->getRightChild() == nullptr)
        {
            *parent = *parent->getLeftChild();
        }
        else
        {
            BinaryTreeNode<Type> * leftMost = this->getLeftMostChilld(parent->getRightChild());
            parent->setNodeData(leftMost->getNodeData());
            parent->setRightChild(removeNode(parent->getRightChild(), inserted));
        }
    }
    
    if(parent == nullptr)
    {
        return parent
    }
    
    return balenceSubTree(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightDifference(parent->getLeftChhild()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balnceFactor < -1)
    {
        if(heightDifference(parent->getRightChild()) > 0)
        {
            parent = rightLeftRotaiton(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}

template <class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertedNode(this->gotRoot(), item);
}

template <class Type>
void AVLTree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item);
}

template <class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}







#endif /* AVLTree_hpp*/
