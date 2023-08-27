// selfLearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
// follow tutorial here https://www.youtube.com/watch?v=vLnPwxZdW4Y
// eventually I will replace the std:: with not std::, use the search function and hit replace with BLANK

// TODO 
// add more comments to clarify code!

#include <iostream>
#include <string>
#include <cmath>

// using namespace std;

class HelperClass {
public:
    void m1() {
        hh();
        std::cout << "I am practicing my method calls\n";
    }

    void m2() {
        hh();
        std::cout << "Can I really get away with being lazy in the code here???\n";
    }

    /*
    * Mess with the data types in here
    * VARIABLES
    *   int
    *   double
    *   float
    *   
    * STRING
    *   char
    *   other string functions
    * 
    */
    void m3() {
        hh();
        // experiment with variables and strings
        int a = 22;
        int b = 13;
        int c = a + b;
        std::cout << a << "\t" << b << "\t" << c;

        double aa = 6.26;
        float aza = 9.79;

        char zeekr = 'Z';
        std::string sentr = "This sentence is ";

        bool testr = true;

        std::cout << "\n";

        std::cout << sentr << testr;

        std::cout << "\n\n";
        // test out some string fxns
        std::string phrase = "Hello my name is Ezekiel Ramirez, I have an interest in computers and software and programming!";
        std::cout << phrase.length();
        // find any character in the phrase with sqaure brackets
        // phrase[0] finds the first character
        // substring is a good function to get back only part of the string
        // phrase.substring(start index, length from start index)

        // work on number transformations next
        std::cout << "\n\n";
        double powP = pow(2, 4);
        std::cout << powP << "\n";

        double sqaure = sqrt(64);
        std::cout << sqaure;

        std::cout << "\n";

        // get input from the user
        int value = 0;
        std::cout << "Please enter any value ";
        std::cin >> value;
        std::cout << "\nYou chose the value of " << value;
        // getline(cin, varName) is a good way to get back more than one word from user
    }

    void m4() {
        hh();
        // use this to practice with array
        int serialNum[] = { 2, 10, 22, 35, 38, 17, 3, 1 };
        std::cout << serialNum[0];
    }

    void hh() {
        std::cout << "\n\n";
        std::cout << "//////////////////////////////////////////\n";
        std::cout << "//////////////////////////////////////////\n";
    }
};

////////////////////////////////////////////////////////
// here starts the rest of the normal code, it uses functions rather than a separate class

void metHelper() {
    std::cout << "\n\n-----------------------------------------------------\n";
}

// hello function
void sayHi() {
    metHelper();
    std::cout << "hello function";
}

void gameFact(std::string Name) {
    std::string gName;
    std::cout << "what is your favorite game?\n";
    std::cin >> gName;

    std::cout << "\n" << Name << " you like " << gName;
}

std::string retPractice() {
    metHelper();
    return "Thenith";
}

// you can not return an array in c++
// :(
void buildArray() {
    metHelper();
    int serialNum[] = { 2, 22, 31, 0 };
    std::cout << "\n" << serialNum[0];
}

void callMeMe() {
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
    std::cout << "hello Line\n";
}

// using a technique to get many lines to appear on the screen with only 20 lines of code
// this can be done with fewer lines and even with out the other method by using a loop!!!
void callMe() {
    metHelper();
    // call the next method
    callMeMe();
    callMeMe();
    callMeMe();
    callMeMe();
    callMeMe();
    callMeMe();
    callMeMe();
    callMeMe();
    callMeMe();
    callMeMe();
}

int main()
{
    std::cout << "Hello World!\n";

    std::cout << "     /|\n";
    std::cout << "    / |\n";
    std::cout << "   /  |\n";
    std::cout << "  /   |\n";
    std::cout << " /    |\n";
    std::cout << "/_____|\n";

    HelperClass h1;
    //h1.m1();
    //h1.m2();
    //h1.m3();
    h1.m4();

    //sayHi();
    //gameFact("zeek");

    std::cout << retPractice();
    buildArray();

    //callMe();


    metHelper();
    bool isReady = true;
    if (isReady) {
        std::cout << "You are ready\n";
    }
    else {
        std::cout << "You were not ready\n";
    }

    //TODO
    // make a switch case
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
