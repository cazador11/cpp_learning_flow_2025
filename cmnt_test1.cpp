// name represent character name
//age represent character age

/*
    major section does
    asks for name and age
    and print a greetings
    
*/


#include <iostream>
using namespace std;
/**
 * @brief Ask user for name and age, print a greeting
 *
 * @details
 * This program asks user for name and age, and print a greeting
 * message with the information provided.
 *
 * @param[in] name character name
 * @param[in] age character age
 *
 * @return 0 if successful
 */
int main(){

    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;
    cout<<"Enter your age: ";
    cin>> age;

    cout<<"Hello " <<name << "! You are " << age << " years old.";

    return 0;

}