// Hello World!!!
// July 21, 2021

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Exploring boolean operations
void booleanOperators() {
    int x = 3;
    int y = 2;

    cout << (x == y) << endl;
    cout << (x != y) << endl;
    cout << (x > y) << endl;
    cout << (x < y) << endl;

    cout << ((x < y) && (x != y)) << endl;
    cout << ((x < y) || (x != y)) << endl;

    cout << ((x == y) ? "True" : "False") << endl;
    cout << ((x != y) ? "True" : "False") << endl;
}

//Output stream(cout = computer out)
void outputStream() {
    int year = 2021;
    string month = "July";
    int day = 22;

    cout << "The year is" << " " << year << endl;
    cout << "The date is " << month << " " << day << endl;
}

//Input stream(cin = computer in)
void inputStream() {
    int year;
    string month;
    int day;


    cout << "Please type the year below:" << endl;
    cin >> year;

    cout << "Please type the month below:" << endl;
    cin >> month;

    cout << "Please type the day below:" << endl;
    cin >> day;

    cout << "Today's date is: " << month << " " << day << ", " << year << endl;   
} 

//Input stream with multiple words(don't mix input type; just use one or the other)
void inputSentence() {
    string sentence;

    cout << "Type a sentence here:" << endl;
    getline(cin,sentence);

    cout << "Your sentence is: \"" << sentence << "\"" << endl;
}

//Casting using stringstreams(string to a different variable type)
void stringStreamTest() {
    string number1 = "1234";
    int number2 = 1234;

    int covertedNumber1;

    stringstream(number1) >> covertedNumber1;

    cout << "Are these two variables the same?" << endl;
    cout << ((number2 == covertedNumber1) ? "True" : "False") << endl;
}

int main() {

    stringStreamTest();
    return 0;
}

