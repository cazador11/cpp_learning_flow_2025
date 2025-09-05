/*Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
there is a decrement operator (--) that subtracts 1.
Use the decrement operator to write a while that prints the numbers from ten down to zero.*/

#include <iostream>
using namespace std;
int main(){
    int value=10;
    int sub=0;

    cout<<"numbers from 10 down to zero:" << endl;

    while(value>=0){
        cout << value <<endl;
        --value;
    }

    return 0;
}
