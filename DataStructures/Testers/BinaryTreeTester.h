//
//  BinaryTreeTester.h
//  DataStructures
//
//  Created by Hillstead, Matthew on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "BinaryTreeTester.cpp"

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};


#endif /* BinaryTreeTester_hpp */
