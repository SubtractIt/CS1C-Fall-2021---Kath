// hw06.cpp
// recursion

//*************************************************************************
// * AUTHOR     : Adit Mohindra
// * HW08       : recursion
// * CLASS      : CS 1C
// * SECTION    : Tu Th & 12:30pm
//*************************************************************************//

#include <iostream>

#include <string>

using namespace std;

//void function - reverse
//reverses a portion of a string based on given start and end index
void reverse(string& a, int x, int y)     //function reverse
{
    char t;

    if ((x > y))
    {                                  
        return;
    }

    t = a[x];
    a[x] = a[y];
    a[y] = t;
    reverse(a, x + 1, y - 1);
}

int main()
{
    string a;
    int u, k;

    cout << "Starting string:";          //reading input string.
    cin >> a;

    cout << "Starting index:"; //reading starting index.
    cin >> u;

    cout << "Ending index:";     //reading ending index.
    cin >> k;

    reverse(a, u, k);

    cout << endl << "Modified String: " << a;      //printing modified string
    return 0;
}