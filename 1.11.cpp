#include <iostream>
using namespace std;
/**
 * @brief Prints all integers from start to end inclusive
 *
 * @details
 * This function asks user for two integers, start and end, and prints all
 * integers from start to end inclusive. If start is greater than end, it prints
 * "Invalid input."
 *
 * @return 0 if the program is successful
 */
int main(){

    int start;
    int end;

    cout<<"Enter the first integer: "<<endl;
    cin>>start;
    cout<<"Enter the second integer: "<<endl;
    cin>>end;

    while(start<=end){
        cout<<start<<endl;
        ++start;
    }

    if(start>end){
        cout<<"Invalid input."<<endl;
    }

    return 0;
}
