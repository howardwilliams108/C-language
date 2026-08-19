/******************************************************
STUDENT NAME: Howard Lowe Jr
Due Date: 02/01/2026
Course: Systems Programming with C++
Assignment: #01
Professor: Sorgente

Description: To compile, build and execute an interactive
             application written in the C++ programming
             language with simple data types, control constructs
             and mathematical equations.
*****************************************************/
#include <iostream>
#include <string>

using namespace std;

// reference parameter for the names
int GetInfo(string &name);

void Categories(string name, int year); //input name and birth year by value

int CalculateAge(string name, int year); // calculate ages of random person for 2026

void FindYoungest(string name1, int age1, string name2, int age2, string name3, int age3);

void FindOldest(string name1, int age1, string name2, int age2, string name3, int age3);

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

// Function Definitions follows below for reference parameters for name and age
// and return the year

int GetInfo(string &name)
{
    int year;
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter the year you were born " << name << ": ";
    cin >> year;
    return year;
    
    cout << endl;
}


//Prints the name and the generation category
void Categories(string name, int year)
{   
    if (year < 1901){
        cout << name <<"A generation before the 1900s!";
    } 
    else if (year >= 1901 && year <= 1927) {
        cout << name << ": You are part of The Greatest Generation(G.I. Generation!";
        
    }
    else if (year >= 1928 && year <= 1945) {
        cout << name << ": You are part of The Silent Generation(Traditionalists)!";
        }
    else if (year >= 1946 && year <= 1964) {
        cout << name << ": You are part of Baby Boomers!";
        
    }
    else if (year >= 1965 && year <= 1980) {
        cout << name << ": You are part of Generation X!";
    
    }
    else if (year >= 1981 && year <= 1996) {
        cout << name << ": You are part of Millennials(Generation Y)!";
        
    }
    else if (year >= 1997 && year <= 2012) {
        cout << name << ": You are part of Centennials or iGen(Generation Z)!";
    }
    else if (year >= 2013 && year <= 2024) {
        cout << name << ": You are part of Generation Alpha!";
    }    
    else  {
        cout << name << ": You are part of Genereation Beta!";
    }
    cout << endl;
}
// Calculating the age at the end of 2026
int CalculateAge(string name, int year)
{
    
    int age = 2026 - year;
    cout << name << ", your age at the end of 2026 will be " << age << ".";
    cout << endl;
    return age;
    
}

// determining the Youngest
void FindYoungest(string name1, int age1, string name2, int age2, string name3, int age3)
{
    cout << "\n";
    if (age1 <= age2 && age1 <= age3) {
    cout << "The youngest person is: " << name1 << " and the youngest age is " << age1
    << "." << endl;
    }

    else if (age2 <= age1 && age2 <= age3) {
    cout << "The youngest person is: " << name2<< " and the youngest age is " << age2
    << "." << endl;
    }


    else  {
    cout << "The youngest person is: " << name3 << " and the youngest age is " << age3
    << "." << endl;
    }
}

//determining the Oldest
void FindOldest(string name1, int age1, string name2, int age2, string name3, int age3)
{
    cout << "\n";
    if (age1 >= age2 && age1 >= age3) {
    cout << "The oldest person is: " << name1 << " and the oldest age is " << age1
    << "." << endl;
    }
    else if (age2 >= age1 && age2 >= age3) {
    cout << "The oldest person is: " << name2 << " and the oldest age is " << age2
    << "." << endl;
    }
    else  {
    cout << "The oldest person is: " << name3 << " and the oldest age is " << age3
    << "." << endl;
    }
}


                  