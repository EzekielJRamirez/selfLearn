// selfLearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
// follow tutorial here https://www.youtube.com/watch?v=vLnPwxZdW4Y

/*
* Multiline comment notatoion looks like this
*/
#include <iostream>

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
    }

    void hh() {
        std::cout << "\n\n";
        std::cout << "//////////////////////////////////////////\n";
        std::cout << "//////////////////////////////////////////\n";
    }
};

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
    h1.m1();
    h1.m2();
    h1.m3();
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
