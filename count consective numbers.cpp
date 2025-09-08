#include <iostream>

/**
 * @brief Prints the count of consecutive occurrences of each integer in the input.
 *
 * If the input is empty, the program prints nothing and exits.
 *
 * @return 0 if the program is successful
 */
int main()
{
    int currVal = 0, val = 0;
    
    if (std::cin >> currVal) {
        int cnt = 1;
        
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    }
    
    return 0;
}

