//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Hillstead, Matthew on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/mhil6834/Documents/c++/DataStructures/DataStructures/Data/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readCrimeDataToList("/Users/mhil6834/Documents/c++/DataStructures/DataStructures/Data/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL read Time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "this is the OOP Node Rade time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeMicroseconds() - crimeTimerSTL.getTimeMicroseconds() << " microseconds" << endl;

    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/mhil6834/Documents/c++/DataStructures/DataStructures/Data/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/mhil6834/Documents/c++/DataStructures/DataStructures/Data/music.csv");
    musicOOP.stopTimer();
    
     cout << "This is the STL read Time: " << endl;
    musicSTL.displayInformation();
    cout << "this is the OOP Node Rade time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeMicroseconds() - musicSTL.getTimeMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    {
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
}


//void LinearTester :: testListBasic()

    
}
