//************************************************************************
// Author: Noel Latsha
// Date: 28 Mar 2025
// Language: C++
// Assignment: More string functions demos
// Description:  more string function demos
//************************************************************************
#include <iostream>
#include <string>
using namespace std;


int main()
{
    // Declare local variables
    string str1, str2, str3;
    string school = "Computer science ";
    string course;

    str1 = "C++";
    str2 = "Programming";
    course = str1 + " " + str2;
    cout << "School: " << school << "\nCourse: " << course << endl;


    cout << "Chracter at index 5: " << course[5] << endl;
    cout << "Character at index 6: " << course.at(6) << endl;

    cout << "Is str2 empty[0 = false / 1 = true]: " << str2.empty() << endl;
    cout << "Is str3 empty? " << str3.empty() << endl;
    str2.clear();
    cout << "is str2 empty? " << str2.empty() << endl;

    cout << "How long is school: " << school.length() << endl;
    cout << "What is the size of school? " << school.size() << endl;
    cout << "How long is course: " << course.length() << endl;

    school.erase(12, 4);
    school.erase(4,4);
    cout << "school after erase: " << school << endl;

    str1 = "The quick brown fox";
    str2 = "quick";
    cout << "Where does 'brown' start? " << str1.find("brown") << endl;
    cout << "Where does str2 ( quick ) start? " << str1.find(str2) << endl;

    cout << "The 1st 'o' is at: " << str1.find("o") << endl;
    cout << "The next 'o' is at: " << str1.find("o", 13) << "\n";

    str3 = str1.substr(4,5);
    cout << "A substring of str1: " << str3 << endl;

    cout << "Str1 compared to str2 [0 = same] " << str1.compare(str2) << endl;
    cout << "Str2 compared to st3 [0 = same] " << str2.compare(str3) << endl;

    school.insert(4, "uter"); 
    cout << "school after intsert: " << school << endl;
    school.insert(8, 3, '-');
    cout << "school after second insert: " << school << endl;

    school.append(5, '!');
    cout << "School after append: " << school << endl;

    school.replace(12, 3, "Engineering");
    cout << "school after replce: " << school << endl;
    return 0;
}