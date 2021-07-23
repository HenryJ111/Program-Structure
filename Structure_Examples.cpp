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

//If, else, and else if syntax
void ifElse() {
    int x = 20;
    int y = 20;

    if (x > y) {
        cout << "X is greater than Y!";
    } else if (x < y) {
        cout << "Y is greater than X!";
    } else {
        cout << "Y is equal to X!";
    }
}

//While loop example
void whileLoop() {
    int timer = 20;
    
    cout << "This is a while loop:" << endl;

    while (timer > 0) {
        cout << timer << endl;
        --timer;
    }

    cout << "This is a do-while loop:" << endl;

    timer = 20;

    do {
        cout << timer << endl;
        --timer;
    } while (timer > 20);
}

//For loop example using multiple initialization variables
void forLoop() {
    for (int timer = 20, reverseTimer = 0; timer > -1; timer--, reverseTimer++) {
        if (timer > 9) {
            cout << "Timer: " << timer  << "     " << "Inverse Timer: " << reverseTimer << endl;
        } else {
            cout << "Timer: " << timer  << "      " << "Inverse Timer: " << reverseTimer << endl;
        }  
    }
}

//Basic iteration using a range-based for loop
void forIteration() {
    string str = "Hello!";

    for (int k = str.length(); k > 0; --k) {
        cout << str[k - 1] << endl;
    }

}

int main() {

    forIteration();
    return 0;
}
