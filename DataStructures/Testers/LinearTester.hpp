//
//  LinearTester.hpp
//  DataStructures
//
//  Created by Hillstead, Matthew on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp

#include "../Tools/Timer.hpp"
#include "../Controller/FileController.hpp"

#include "../Model/Linear/LinkedList.hpp"
#include "../Model/Linear/Stack.hpp"
#include "../Model/Linear/Queue.hpp"
#include "../Model/Linear/Array.hpp"

#include <iostream>
using namespace std;

class LinearTester
{
public:
    void testVsSTL();
    void crimeTimerSTL();
    void crimTimerOOP();
    void musicSTL();
    void musicOOP();
    
    void testListBasic();
    void testListWithData();
    
};

#endif /* LinearTester_hpp */
