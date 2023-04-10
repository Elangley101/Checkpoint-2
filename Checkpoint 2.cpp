// Ethan Langley
// CIT 163 Checkpoint program 2

// This program will input data about the classes and grades for a student
// and then compute data about their GPA

#include <iostream>
#include <string>
#include <vector>

// Holds data about one course a student has taken
struct CourseData {
    int creditHours;
    std::string grade;
};

// Holds summary data about a student's GPA and total hours
struct GPAData {
    double gpa;             // Overall GPA
    double graduationHours; // Total hours that count towards graduation - not counting NC or F
    double qualityHours;    // Total hours that count toward GPA - not counting CR or NC
    double qualityPoints;   // Total quality points - not counting CR or NC
};


// Read the course data one class at a time
// Each class has a number of credit hours followed by a grade
// Input stops when -1 is entered for the credit hours
// The grade is one of "A", "B", "C", "D", "F", "CR", or "NC".
// The grade is stored as as string, not a char. 
//
// This function stores each class in a CourseData object,
// stores those objects in a vector, and returns the vector

std::vector<CourseData> inputData() {

    std::string grade;


}


// This function computes information about a student's GPA:
// - Total hours towards graduation, not including F or NC courses
// - Total hours that count towards GPA, not including CR or NC coures
// - Total quality points, which ignores CR and NC courses
// - Overall GPA
// The function stores the info in a GPAData object and returns that object
//
// Note: there is no input or output in this function, only calculation

GPAData computeGPA(const std::vector<CourseData>& data) {
     
    qualityTotal = qualityPoint5 + qualityPoint4 + qualityPoint3 + qualityPoint2 + qualityPoint1;

}


// Please do not edit this function. 
// The only output in your program will be in this function

void outputGPAinfo(const GPAData& myGPA) {

    std::cout << "Total credit hours towards graduation: ";
    std::cout << myGPA.graduationHours << std::endl;
    std::cout << "Total quality points: " << myGPA.qualityPoints << std::endl;
    std::cout << "Total quality hours: " << myGPA.qualityHours << std::endl;

    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << "GPA: " << myGPA.gpa << std::endl;

    if (myGPA.gpa < 2.0) {
        std::cout << "You might be on probation." << std::endl;
    }

    if (myGPA.gpa >= 3.3) {
        std::cout << "You made the dean's list!" << std::endl;
    }
}

// Please do not edit this "main" function. It shows you how the
// functions above are used.  You can read the main function
// to help understand how the program will work. 

int main() {
    std::vector<CourseData> myGrades = inputData();
    GPAData myGPA = computeGPA(myGrades);
    outputGPAinfo(myGPA);
}