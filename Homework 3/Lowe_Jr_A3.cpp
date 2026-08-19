/******************************************************
STUDENT NAME: Howard Lowe Jr
Due Date: 02/16/2026
Course: Systems Programming with C++
Assignment: #03
Professor: Sorgente

Description: The program will determine the age of three persons,
             their generations, which person is the youngest and oldest.
             This program will run through separate compilations; compiling
             and linking multiple files.
*****************************************************/
#include "age.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //
    string name1, name2, name3;
    int year1, year2, year3;
    int age1, age2, age3;
    char input;
    
    do{
        // calling GetInfo 3 times to ask and get the names and birthyear for
        // three people
        cout << "&&&&&&&&&&&&&&&&&&@@@@@@@@\n"; // added symbols to make program more presentable
        year1 = GetInfo(name1);
        cout << "&&&&&&&&&&&&&&&&&&++++++++++\n";
        year2 = GetInfo(name2);
        cout << "&&&&&&&&&&&&&&&&&&########\n";
        year3 = GetInfo(name3);
        cout << "&&&&&&&&&&&&&&&&&&!!!!!!!!!\n";
        
        // calling Categories 3 times
        cout<<endl;
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
        Categories(name1, year1);
        Categories(name2, year2);
        Categories(name3, year3);
        
        //calling CalculateAge 3 times
        cout << endl;
        cout << "++++++++++++++++++++++++++++++++++++\n";
        age1 = CalculateAge(name1, year1);
        age2 = CalculateAge(name2, year2);
        age3 = CalculateAge(name3, year3);
        
        //ages
        //Find Youngest
        FindYoungest(name1, age1, name2, age2, name3, age3);
        
        //Find Find Oldest
        FindOldest(name1, age1, name2, age2, name3, age3);
        
        cout << "\n\n Again? (Enter 'Y' to continue or 'N' to quit)";
        cin >> input;
        
    } 
    while (input == 'Y' || input == 'y');
    
    return 0;
    
}
    