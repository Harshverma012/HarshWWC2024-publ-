// QUESTION.3: Print your whole Acedemic Bio data Name , UID , Section Area of interest , Age , Last year CGPA , DOB, Home Town , Aim in Life...

// Code.

#include <iostream>
using namespace std;

int main() 
    {
    string name, uid, section, areaOfInterest, dob, homeTown, aimInLife;
    int age;
    float lastYearCGPA;

    // Taking user inputs
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your UID: ";
    getline(cin, uid);

    cout << "Enter your section: ";
    getline(cin, section);

    cout << "Enter your area of interest: ";
    getline(cin, areaOfInterest);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your last year CGPA: ";
    cin >> lastYearCGPA;

    cin.ignore(); // Clear input buffer

    cout << "Enter your date of birth (DOB): ";
    getline(cin, dob);

    cout << "Enter your hometown: ";
    getline(cin, homeTown);

    cout << "Enter your aim in life: ";
    getline(cin, aimInLife);

    // Using conditional operator to validate inputs
    cout << "\nAcademic Bio Data:\n";
    cout << "Name: " << (!name.empty() ? name : "Not Provided") << endl;
    cout << "UID: " << (!uid.empty() ? uid : "Not Provided") << endl;
    cout << "Section: " << (!section.empty() ? section : "Not Provided") << endl;
    cout << "Area of Interest: " << (!areaOfInterest.empty() ? areaOfInterest : "Not Provided") << endl;
    cout << "Age: " << (age > 0 ? to_string(age) : "Invalid Age") << endl;
    cout << "Last Year CGPA: " << (lastYearCGPA >= 0.0 ? to_string(lastYearCGPA) : "Invalid CGPA") << endl;
    cout << "Date of Birth: " << (!dob.empty() ? dob : "Not Provided") << endl;
    cout << "Home Town: " << (!homeTown.empty() ? homeTown : "Not Provided") << endl;
    cout << "Aim in Life: " << (!aimInLife.empty() ? aimInLife : "Not Provided") << endl;

    return 0;
}

// OUTPUT:

// Academic Bio Data:
// Name: Harsh
// UID: 22BCS17164
// Section: iot-630
// Area of Interest: CSE
// Age: 21
// Last Year CGPA: 6.58
// Date of Birth: 15/11/2003
// Home Town: Panipat
// Aim in Life: software engineer
