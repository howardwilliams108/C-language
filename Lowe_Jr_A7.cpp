/******************************************************
STUDENT NAME: Howard Lowe Jr
Due Date: 04/06/2026
Course: Systems Programming with C++
Assignment: #07
Professor: Sorgente
Description: The program performs basic search techniques that involve
            using string and character arrays, along with performing operations
            on static and dynamic arrays.
*******************************************************/

#include <algorithm> // reverse function 
#include <iostream>
#include <string>
#include <cctype> // for toupper

using namespace std;

//input: const reference string
// return the reverse of the string
// use const to ensure that the value does not changed that is word
// use & as & means reference - another name for same variable(no copy is made)
string ReverseIT(const string& word);

//input: const reference string
//return the string in all capital letters
string MakeUpper(const string& word);

//input: const reference string and a string pointer
// dynamically create a string array and fill it with the NATO phonetic strings
//print the string arrays
//delete the new string arrays
//use * - pointer to store the memory address for NATO
void StringArray(const string& word, string* NATO); //calls MakeNATO and PrintStringArray

//input: character by value and string by reference
//assign the NATO phonetric string that matches the character from A to Z 
//for any other character assign space " "
void MakeNATO(char letter, string& word);

//input: string array and the length of the array 
//prints the strings in the array in a column
void PrintStringArray(int len, string NATO[]);

//input: const reference string and pointer to an integer
//dynamically create an integer array and fill it with the corresponding numerical (ASCII) value
//print the integer array
//delete the new integer array
void MakeASCII(const string& word, int* nums); //calls PrintNumberArray and Calculate Average

//input: integer arry and the length of the array
//print the integers in the array in a row separated by spaces
void PrintNumberArray(int len, int nums[]);

//input: integer array and length of the array
//calculates and returns average of the numbers in an array
double CalculateAverage(int len, int nums[]);

int main()
{
    //declare strings for users first name, reverse first name, upper first name and pointer for NATO array
    string fName, fNameReverse, fNameUpper;
    string* NATOname;
    
    cout << "Hello. Please enter your first name: ";
    cin >> fName;
    
    //reverse the name
    fNameReverse = ReverseIT(fName);
    
    //make the case all uppercase
    fNameUpper = MakeUpper(fName);
    
    //print three first name versions onto the screen
    cout << "Your first name: " << fName << endl;
    cout << "Name Reversed: " << fNameReverse << endl;
    cout << "Made in Uppercase only: " << fNameUpper << endl;
    
    //call the string function
    StringArray(fNameUpper, NATOname); //NATO alphabet only works with uppercase letters
    
    //declare an integer pointer
    int *ptr = nullptr; // prevents garbage memory as it may lead to crashes or bugs
    
    //call the MakeASCII function twice(original first name and uppercase first name)
    MakeASCII(fName, ptr);
    MakeASCII(fNameUpper, ptr);
    
    char again; //this ensures as long as user enters y, title will continue
    do {
        // declare 3 strings for title(original, reversed, uppercase)
        string title, titleReverse, titleUpper;
        
        //ask and get book title
        cout << "Please enter the title: ";
        cin.ignore();
        getline(cin, title);
        
        //reverse the title
        titleReverse = ReverseIT(title);
        
        //making the title all uppercase
        titleUpper = MakeUpper(title);
        
        //printing the three title versions onto the screen
        cout << "The book title: " << title << endl;
        cout << "Book title reversed: " << titleReverse << endl;
        cout << "Book title in uppercase: " << titleUpper << endl;
        
        //call the StringArray function
        StringArray(titleUpper, NATOname);
        
        //call the MakeASCII function twice(original title and uppercase title)
        MakeASCII(title, ptr);
        MakeASCII(titleUpper, ptr);
        
        cout << "\nWould you like to enter another title 'y' or 'n'?";
        cin >> again;
        again = tolower(again);
    } while(again == 'y');
    return 0; 
}

//function defintions go here

//input: const reference string
//return of the reverse of the string
string ReverseIT(const string& word)
{
    string word2 = word;
    reverse(word2.begin(), word2.end());
    return word2;
}

string MakeUpper(const string& word)
{
    string upper = word;
    for(int i =0; i < upper.length(); i++)
    {
        upper[i] = toupper(upper[i]);
    }
    return upper;
}

void MakeNATO(char letter, string& word)
{
    if(letter == 'A') word = "Alpha";
    else if(letter == 'B') word = "Bravo";
    else if(letter == 'C') word = "Charlie";
    else if(letter == 'D') word = "Delta";
    else if(letter == 'E') word = "Echo";
    else if(letter == 'F') word = "Foxtrot";
    else if(letter == 'G') word = "Golf";
    else if(letter == 'H') word = "Hotel";
    else if(letter == 'I') word = "India";
    else if(letter == 'J') word = "Juliet";
    else if(letter == 'K') word = "Kilo";
    else if(letter == 'L') word = "Lima";
    else if(letter == 'M') word = "Mike";
    else if(letter == 'N') word = "November";
    else if(letter == 'O') word = "Oscar";
    else if(letter == 'P') word = "Papa";
    else if(letter == 'Q') word = "Quebec";
    else if(letter == 'R') word = "Romeo";
    else if(letter == 'S') word = "Sierra";
    else if(letter == 'T') word = "Tango";
    else if(letter == 'U') word = "Uniform";
    else if(letter == 'V') word = "Victor";
    else if(letter == 'W') word = "Whiskey";
    else if(letter == 'X') word = "X-ray";
    else if(letter == 'Y') word = "Yankee";
    else if(letter == 'Z') word = "Zulu";
    else word = " ";
}

void MakeASCII(const string& word, int* nums)
{
    int len = word.length();
    nums = new int[len];
    for(int i = 0; i < len; i++)
    {
        nums[i] = static_cast<int>(word[i]);
    }
    cout << "\n\nASCII name: " << word << endl;
    //print integer array
    PrintNumberArray(len, nums);
    
    //calculate the array
    double avg = CalculateAverage(len, nums);
    cout << "\nThe average is: " << avg << endl;
    delete[] nums;
}

double CalculateAverage(int len, int nums[])
{
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        sum += nums[i];
    }
    double avg = static_cast<double>(sum)/len;
    
    return avg;
}
void PrintStringArray(int len, string NATO[])
{
    for (int i = 0; i < len; i++)
    {
        if(NATO[i] != " ")
        {
            cout << NATO[i] << endl;
        }
    }
}
void StringArray(const string& word, string* NATO)
{
    int len = word.length();
    NATO = new string[len]; //dynamic array
    for(int i = 0; i < len; i++)
    {
        MakeNATO(word[i], NATO[i]);
    }
    cout << "\nNATO phonetic name: " << endl;
    
    //print the string array
    PrintStringArray(len, NATO);
    delete[] NATO;
}

void PrintNumberArray(int len, int nums[])
{
    for(int i = 0; i < len; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}