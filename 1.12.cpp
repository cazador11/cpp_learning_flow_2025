#include <iostream>

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
}

//OUTPUT : 0
/*
    Exercise 1.12:
    What does the following for loop do? What is the final value of sum?
 */