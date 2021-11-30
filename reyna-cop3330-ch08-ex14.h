#include<iostream>
using namespace std;

int add_some_number(const int a, const int b)
{
    int sumation = a + b;

    // if a = 16; was placed here, there would be an error since a is a constant integer
    return sumation;
}

int main() 
{
    cout << add(1, 3);
    cout << ("\n");
    cout << add (2, 3);
}

// Declaring a non-reference function argument constant makes it so that the argument cannot be changed.
// You would want to do this if you have a value that you don't want to change accidentally.
// People do not do this often since a lot of times, they want to change values at compile time.