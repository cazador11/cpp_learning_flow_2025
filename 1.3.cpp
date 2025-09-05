/*
 Exercises Section 1.3

Exercise 1.7: Compile a program that has incorrectly nested comments.
Exercise 1.8: Indicate which, if any,
of the following output statements are legal:
After you’ve predicted what will happen, 
test your answers by compiling a program with each of these statements.
 Correct any errors you encounter.

*/
#include <iostream>

/*
 * comment pairs /* */ cannot nest.
 * "cannot nest" is considered source code,
 * as is the rest of the program
 */

int main() { return 0; }

// this is intentd error