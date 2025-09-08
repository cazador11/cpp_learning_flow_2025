Here's a C++ homework assignment that covers fundamental concepts:

## Programming Assignment: Student Grade Management System

**Objective:** Create a program that manages student grades and calculates statistics.

**Requirements:**

1. Create a `Student` struct with:
   - Name (string)
   - ID (integer)
   - Array of 5 test scores (doubles)
   - Average score (double)

2. Implement these functions:
   - `void inputStudentData(Student& s)` - Input student info and scores
   - `double calculateAverage(const Student& s)` - Calculate and return average
   - `char getLetterGrade(double average)` - Return letter grade (A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: below 60)
   - `void displayStudent(const Student& s)` - Display all student info
   - `int findHighestScorer(Student arr[], int size)` - Return index of student with highest average

3. In `main()`:
   - Create an array of 3 students
   - Input data for each student
   - Calculate averages
   - Display all students with their letter grades
   - Find and display the highest scorer

**Sample Output:**
```
Enter data for student 1:
Name: Alice Smith
ID: 12345
Enter 5 test scores: 85 92 88 90 87

[After all input...]

Student Records:
Name: Alice Smith, ID: 12345
Scores: 85 92 88 90 87
Average: 88.4, Grade: B

[...]

Highest Scorer: Bob Johnson with average 92.6
```

**Bonus Challenges:**
- Add input validation (scores must be 0-100)
- Sort students by average (descending)
- Save/load student data to/from a file

Submit your `.cpp` file with proper comments and formatting.