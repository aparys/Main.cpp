//
//  main.cpp
//  CSCI 360 Integer Program
//
//  Created by Brian Arias Cano on 2/24/20.
//  Copyright © 2020 Brian Arias Cano. All rights reserved.
//

#include <iostream>

using namespace std;


namespace  {

int savedIntegers[10]; //array where the inputted integers are stored

//MARK: - default values for minimum and maximum
int currentMaximum = 0;
int currentMinimum = 999999999;

/**
 function to get a single integer
 
 @param pos position in the array where the integer will be stored
 */
void getInteger(int pos) {
    
    cin >> savedIntegers[pos]; //store integer in the array
    
}

}

int main(int argc, const char * argv[]) {
    
    //for loop for getting the integers
    for (int i = 0 ; i < 9; i++) {
        
        cout << "input an integer: ";
        
        getInteger(i); //get integer
        
        //change the current minimum and maximum values if needed
        currentMaximum = savedIntegers[i] > currentMaximum ? savedIntegers[i] : currentMaximum;
        
        currentMinimum = savedIntegers[i] < currentMinimum ? savedIntegers[i] : currentMinimum;
        
        //output minimum and maximum
        cout << "Max: " << currentMaximum << " " << "Min: " << currentMinimum << " " << endl;
   
    }
    
    return 0;
}
