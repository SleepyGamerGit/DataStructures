//
//  FileController.hpp
//  DataStructures
//
//  Created by Hillstead, Matthew on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include "../Data/Music.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Model/Linear/LinkedList.hpp"
#include "../Model/Linear/Array.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readCrimeDataToList(string filename);
    
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToArray(string filename);
    static LinkedList<Music> musicDataToList(string filename);
};


#endif /* FileController_hpp */
