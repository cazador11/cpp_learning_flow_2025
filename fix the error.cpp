#include <iostream>

/**
 * @brief Main entry point of the program
 *
 * This function is the first function to be called when the program is
 * executed. It is responsible for initializing the program and
 * calling other functions to perform the desired operations.
 *
 * @details
 * This program multiplies the number of hours by the number of minutes per
 * hour and prints the total number of minutes.
 *
 * @return 0 if the program is successful
 */
int main() {
    const int MINUTES_PER_HOUR = 60;
    int hours = 4;
     
    int totalMinutes = hours * MINUTES_PER_HOUR;

    std::cout << "Total minutes: " << totalMinutes << std::endl;

    return 0;
}