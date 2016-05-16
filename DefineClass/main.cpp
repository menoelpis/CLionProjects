#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"
using std::string;

int main() {
    string nameOfCourse; // string of characgters to store the course name
    GradeBook myGradeBook("CS101 C++ Programming"); // create a GradeBook object named myGradeBook

    // display initial value of courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
    // prompt for and input course name
    cout << "Please enter the course name: " << endl;
    getline( cin, nameOfCourse ); // read a course name with blanks
    cout << endl; // output a blank line

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage( nameOfCourse );
    return 0; // indicate successful termination
} // end main