//
// Created by kainos on 16. 5. 15.
//

#ifndef DEFINECLASS_GRADEBOOK_H
#define DEFINECLASS_GRADEBOOK_H

using std::string;


// GradeBook class definition
class GradeBook
{
public:
    GradeBook(string name)
    {
        setCourseName( name );
    }
    // function that sets the course name
    void setCourseName( string name )
    {
        courseName = name;
    }

    // function that gets the course name
    string getCourseName()
    {
        return courseName;
    }

    // function that displays a welcome message to the GradeBook user
    void displayMessage(string courseName)
    {
        cout << "Welcome to the Grade Book for\n" << courseName << "!" << endl;
    } // end function displayMessage
private:
    string courseName; // course name for this Gradebo
}; // end class GradeBook

#endif //DEFINECLASS_GRADEBOOK_H
