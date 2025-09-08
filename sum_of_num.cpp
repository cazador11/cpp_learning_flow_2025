#include <iostream>
using namespace std;
/**
 * @brief Ask user for a number and print the sum of all numbers from 0 to
 * that number inclusive.
 *
 * @details
 * This program asks user for a number and print the sum of all numbers from 0
 * to that number inclusive. If the user enters a negative number, the program
 * ends.
 *
 * @return 0 if the program is successful.
 */
int main(){
    int sum = 0;
    int value = 0;

    cout<<"TO END ADDING NUMBERS PRESS f AND PRESS ENTER KEY"<<endl;

    while(cin >> value){
        if(value == 'f')
            break;
        sum += value;
    }

        cout<<"sum is :"<<sum <<endl;
        return 0;
    
}