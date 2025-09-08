/*Exercise 1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
*/

#include <iostream>
using namespace std;
/**
 * @brief Print the sum of all numbers from 1 to 10 inclusive
 *
 * This program prints the sum of all numbers from 1 to 10 inclusive to stdout.
 *
 * @return 0 if the program is successful
 */
int main(){
    int sum = 0;
    int value;

    for(int value = 1 ;value<=10;value++)
    sum += value;

    cout<<"sum of 1 to 10 inclusive is:" << sum << endl;
}