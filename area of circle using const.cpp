#include<iostream>
using namespace std;
/**
 * @brief Computes the area of a circle with a given radius
 *
 * @details
 * This function computes the area of a circle with a given radius
 * using the formula area = pi * radius * radius.
 *
 * @return 0 on success
 */
int main(){
    double PI =3.14159;
    double radius =10;
    double area =PI*radius*radius;

    cout<<"area : "<<area<<" cm"<<endl;
    return 0;

}