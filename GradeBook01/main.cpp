#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main()
{
    GradeBook gradeBook1( "CS101 Introduction to Programming in C++" );
    GradeBook gradeBook2( "CS102 C++ Data Structures" );

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         << endl;

    gradeBook1.setCourseName( "CS101 C++ Programming" );

    cout << "gradeBook1's course name is: " << gradeBook1.getCourseName()
    << "\ngradeBook2's course name is: " << gradeBook2.getCourseName()
    << endl;
    return 0;
}