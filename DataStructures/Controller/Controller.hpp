//
//  Controller.hpp
//  DataStructures
//
//  Created by Hillstead, Matthew on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Controller/FileController.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "../Model/Nodes/Node.hpp"
#include "../Testers/LinearTester.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
public:
    void start();
};


#endif /* Controller_hpp */
