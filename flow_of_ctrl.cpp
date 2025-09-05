#include <iostream>
using namespace std;
int main(){
    int sum =0;
    int value =1;

    while(value <= 10){
        sum = sum + value;
        ++value;
    }

    cout<<"the sum is "<< sum << endl;
    return 0;
}