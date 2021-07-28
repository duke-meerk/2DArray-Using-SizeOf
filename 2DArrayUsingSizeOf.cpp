//////////////////////////////////////////
//Author: Cristian880                   //
//Multiplication table using sizeof     //
//////////////////////////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    


    int  nums[6][6]{ // this can be changed                   // //////// //
        {0, 1, 2, 3, 4, 5},                                   // 2d array //
        {0, 1, 2, 3, 4, 5}                                    // 2d array //
    };                                                        // //////// //

    cout << "============================================" << endl;
    cout << "This is sizeof nums : " <<sizeof(nums) << endl;  // outputs sizeof array
    cout << "This is sizeof int : " <<sizeof(int) << endl;    // outputs sizeof int
    cout << "============================================" << endl;

    int rows = 6;                                             // amount of rows - also works with cin 
    int cols = 6;                                             // amount of cols - also works with cin 

  
    

    cout << "============================================" << endl;
    cout << "=      Multiplication Table From 1-6       =" << endl;
    cout << "=              Using sizeof                =" << endl;
    cout << "=        by: Barau Andrei Cristian         =" << endl;
    cout << "============================================" << endl;
    //nested for loop

    for(int i=1;i<sizeof(nums)/sizeof(int)/6;i++){            
        for(int j=1;j<sizeof(nums)/sizeof(int)/6;j++){
            //multiplication
            nums[i][j]=i*j;
            //align text
            cout.width(4);                                    //align cout

        }
    }

    for(int i=1;i<sizeof(nums)/sizeof(int)/6;i++){
        for(int j=1;j<sizeof(nums)/sizeof(int)/6;j++){
            // output nums
            cout << nums[i][j] << flush;
            //align text
            cout.width(4);                                    //align cout


        }
        
        cout << endl;

    }
    cout << "============================================" << endl;

    return 0;


    //if you have any question please add me on steam or instagram. 
















    //Author: Cristian880
    
}

