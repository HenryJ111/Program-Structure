// Hello World!!!
// July 21, 2021

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Basic hello world program
void helloWorld() {
    cout << "Hello World! ";
    cout << "I'm a C++ program";
}

//Manipulating two variables
void twoVariables() {
    int a,b;
    int result;

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    cout << result;
}

//Storing a string in a variable, ending lines, and adding strings
void stringTest() {
    string storedString = "Henry Jones";
    cout << storedString << endl;
    cout << storedString + " " + storedString << endl;
}

//Messing around with character escapes
void characterEscapes() {
    cout << "10\n9\n8\n7\n6\n5\n4\n3\n2\n1" << endl;
    cout << "\tFormal essay goes here\nWith tabs!" << endl;
    cout << "Quotes go brr \" \" \" \" \' \' \' \'" << endl;
    cout << "BING\aBING\a" << endl;
}

//Testing simple arethmetic
void simpleMath() {
    int x = 3;
    int y = 2;

    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
}

//Variable modification shorthands
void variableModification() {
    int x = 3;
    int y = 2;

    x += y;
    x -= y;
    x *= y;
    x /= y;
    ++x;
    --x;

    cout << x << endl;
}

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

//Changing variable types
void castingTest() {
    double x = 10.321;

    int y = x;

    double z = int(x);

    cout << to_string(x) + " " + to_string(y) + " " + to_string(z) << endl;
    cout << sizeof(x) << endl;
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

