/*Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.*/

#include <iostream>
using namespace std;
int main(){
    int val =50,sum =0;

    while (val <= 100)
    {
        sum += val;
        ++val;
    }

    cout<<sum<<endl;
    return 0;
    
}