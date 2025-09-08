//Exercise 1.16: Write your own version of a program that prints the sum of a set of integers read from cin.

#include<iostream>
int main(){
    int sum =0,value=0;

    std::cout<<"press f and press ENTER KEY to get total sum"<<std::endl;

    while(std::cin>>value){
    if(value == 'f')
    break;
    sum +=value;
    }

    std::cout<<"total sum is: "<< sum<<std::endl;
}