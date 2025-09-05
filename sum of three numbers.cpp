#include <iostream>
using namespace std;
/**
 * @brief Asks user for 3 numbers and prints their sum
 *
 * @details
 * This program asks user for 3 numbers and prints their sum
 *
 * @return 0 if the program is successful
 */
int main(){

    int v1;
    int v2;
    int v3;
    int sum;

    cout << "enter a number: ";
    cin>>v1;
    cout << "enter a number: ";
    cin>>v2;
    cout << "enter a number: ";
    cin>>v3;

    sum = v1+v2+v3;

    cout<<"sum of three numbers is " << sum << endl;

    return 0;
}