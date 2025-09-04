#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    string number;
    string address;
    int age;

    cout<<"Enter your name:";
    cin>>name;
    cout<<"Hello " <<name << endl;
   

    cout<<"enter your phone number: ";
    cin>>number;
    cout<<"enter your address: ";
    cin>>address;
    cout<<"enter your age: ";
    cin>>age;

    cout<<"your name is :"<<name<<endl;
    cout<<"your phone number is :"<<number<<endl;
    cout<<"your address is :"<<address<<endl;
    cout<<"your age is :"<<age<<endl;

    return 0;
}