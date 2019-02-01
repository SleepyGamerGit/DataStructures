//
//  Timer.hpp
//  DataStructures
//
//  Created by Hillstead, Matthew on 2/1/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <iostream>
#include <assert.h>
#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeMicroseconds();
};

#endif /* Timer_hpp */
