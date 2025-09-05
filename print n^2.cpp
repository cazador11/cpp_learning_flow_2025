#include <iostream>
using namespace std;
int square;
int sum;
/**
 * @brief Print the squares of numbers from 0 to 4
 *
 * @details
 * This program prints the squares of numbers from 0 to 4 to stdout.
 *
 * @return 0 if the program is successful
 */
int main(){
    int i = 0;
    

        while (i<=4) {
        square = i*i;
        sum ++;
        
    cout << square << endl;
    i++;    
}
return 0;
}

  