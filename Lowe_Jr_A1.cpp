/******************************************************
STUDENT NAME: Howard Lowe Jr
Due Date: 01/26/2026
Course: Systems Programming with C++
Assignment: #01
Professor: Sorgente

Description: To compile, build and execute an interactive
             application written in the C++ programming
             language.
*****************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fName, lName, color, food;   // all terms used will be in string format
    char init;                          // init will be in char format
    double num;                       // num will be in floating point format
    int age;                         // age will be in integer format
    
    cout << "Welcome to the Personal Info Collector! \n" << endl <<endl;
    
    cout << "What is your first name? ";
    cin >> fName;
    
    cout << "What is your middle initial? ";
    cin >> init;
    
    cout << "What is your last name? ";
    cin.ignore(); // the line will ignore the space from the initial return
    cin >> lName;
    
    cout << "\n"; // I alternately used \n to create line space and make the code neater
    
    cout << "Hi " << fName <<" " << init <<"." << " "<< lName << "!"<< " " <<" How old are you? ";
    cin >> age;
    
    cout << "What is your favorite color? ";
    cin >> color;
    
    cout << "Nice! Next! What's your favorite number (No worries! Decimals are allowed friend)? ";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cin >> num;
    
    cout << "Awesome! And what's your favorite food? ";
    cin.ignore();
    getline(cin, food); // the line will allows spaces in input
    
    cout << "\n";
    cout << "\n";
    
    cout<< "Thanks, " << fName << "!" <<" Here's what I learned about you: \n" <<endl;
    cout << " * You're " << age << " years old! \n";
    cout << " * Your favorite color is " << color << ".\n";
    cout << " * Your favorite number is " << num << ".\n";
    cout << " * And your favorite food is " << food << ". \n"  << endl <<endl;
    
    cout<< "Take care and have a great day " << fName <<"!";
    cout << endl;
    return 0;
}

