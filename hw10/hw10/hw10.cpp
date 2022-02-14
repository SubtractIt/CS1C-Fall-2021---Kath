// hw10.cpp
// to illustrate copy & move constructors, assignment operators

/*************************************************************************
 * AUTHOR     : Adit Mohindra
 * Lab #6     : copy & move constructors, assignment operators
 * CLASS      : CS 1C
 * SECTION    : Tu Th & 12:30 PM
*************************************************************************/

#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

// file hw10.h

namespace hw10 {

    //--Q#1,2,3,4-------------------------------------------------------------------

    // a basic implementation of our stl like vector class
    // basic vector is a fixed size array of doubles

    class vector {
        int vsize;
        double* elem;
        void copy(const vector& source);              // copy elements from source into *elem
    public:
        vector(int s) : vsize{ s }, elem{ new double[s] {0} } {}  // constructor
        vector(const vector& v);                        // copy constructor: defines the copy operation
        vector(vector&&) noexcept;                             // move constructor: defines the move operation
        ~vector() { delete[] elem; }                  // destructor

        int size() const { return vsize; }            // the current size

        double get(int n) { return elem[n]; }         // access: read
        void set(int n, double v) { elem[n] = v; }      // access: write

        vector& operator=(const vector&);             // copy assignment
        vector& operator=(vector&&) noexcept;                  // move assignment
    };

    //------------------------------------------------------------------------------

} // hw10

//------------------------------------------------------------------------------

// class member function, function definitions go into hw10.cpp:

// hw10.cpp

namespace hw10 {

    // member function definitions:

    //------------------------------------------------------------------------------

    void vector::copy(const vector& source)
        // copy elements 0 to original.vsize-1
    {
        for (int i = 0; i < source.vsize; ++i)
        {
            elem[i] = source.elem[i];
        }
            
    }

    //--Q#1-------------------------------------------------------------------------

    vector::vector(const vector& source) // copy constructor
        // allocate elements, then initialize them via copy operation
        // : ...
    {
        // ... // use class defined copy operation
        vsize = source.vsize;
        elem = new double[vsize];
        copy(source);
    }

    //--Q#3-------------------------------------------------------------------------

    vector::vector(vector&& source) noexcept// move constructor
        // copy source elem and vsize only, no need for copy operation
        // : ...
    {
        vsize = source.vsize;
        elem = source.elem;
        source.vsize = 0;
        source.elem = nullptr;     // now that source vector contents have been moved, empty the vector
        // ... 
    }

    //--Q#2-------------------------------------------------------------------------

    vector& vector::operator=(const vector& rhs) // copy assignment
        // make this vector a copy of the rhs (i.e. source)
    {
        double* pD = new double[rhs.vsize];             //allocate new space for double[]
        std::copy(rhs.elem, rhs.elem + rhs.vsize, pD); // use std::copy algorithm to copy rhs elements into pD double[]
        delete this->elem;                              // deallocate old space
        this->elem = pD;                                // now that we've copied new, deallocated old elems, reset elem pointer
        this->vsize = rhs.vsize;                        // reset vector size
         return *this;                                  // return a self-reference
    }

    //--Q#4-------------------------------------------------------------------------

    vector& vector::operator=(vector&& rhs) noexcept// move assignment
        // move rhs (i.e. source) to this vector
    {
        delete elem;                                // deallocate old space
        elem = new double[rhs.vsize];               // copy rhs’s elements and size, move implies copying element pointer only
        copy(rhs);
        delete rhs.elem;                                     // empty the rhs vector
        // ... 
        return *this;         // return a self-reference
    }

    //------------------------------------------------------------------------------

    // function definitions:

    //--Q#5-------------------------------------------------------------------------

    vector fill_doubles(istream& is, int size)
    {
        vector temp{ size };          // instantiate temp vector
        for (int i = 0; i < size; i++)
        {
            double x;
            is >> x;                // store double from input stream in vector
            temp.set(i, x);
        }
        return temp;                // return temp by value, move constructor invoked
    }

    //------------------------------------------------------------------------------

    ostream& print(ostream& os, vector& v)
        // print vector element values to the output stream
    {
        for (int i = 0; i < v.size(); ++i) os << v.get(i) << " ";
        return os;
    }

    //------------------------------------------------------------------------------

} // hw10

//------------------------------------------------------------------------------

using namespace hw10;

int main()
{
    // console header
    cout << endl;
    cout << "****************************************** " << endl;
    cout << "*           Running HW10                 * " << endl;
    cout << "*      Programmed by Adit Mohindra       * " << endl;
    cout << "*      CS1C TuT & 12:30                  * " << endl;
    cout << "****************************************** " << endl;
    cout << endl;

    // Q#1,2 - vector copy constructor and assignment operatior

    vector v{ 3 };        // define a vector
    v.set(1, 100.5);     // set v[1] to 100.5

    vector v2 = v;      // [1.1] copy v to v2: what happens here?
    v2.set(0, 25);       // set v2[0] to 25

    cout << "v double values: ";
    print(cout, v);
    cout << endl;
    cout << "v2 double values (after copy, set): ";
    print(cout, v2);
    cout << endl << endl;

    vector v3{ 3 };
    vector v4{ 4 };
    v3.set(2, 3.3);
    v4.set(2, 4.4);

    cout << "v3 double values: ";
    print(cout, v3);
    cout << endl;
    cout << "v4 double values: ";
    print(cout, v4);
    cout << endl;

    v3 = v4;            // [2.1] assign v4 to v3: what happens here?

    cout << "v3 double values (after assignment): ";
    print(cout, v3);
    cout << endl << endl;

    vector v5{ 10 };
    v5 = v5;            // [2.2] self assignment: what happens here, any problems?

    // Q#5 - move assignment

    cout << "fill up v6 with five doubles" << endl;
    vector v6 = fill_doubles(cin, 5); // temp vector in function scope moved to v6
    cout << "v6 double values: ";
    print(cout, v6);
    cout << endl;


    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// add written answers here ... Q#5
// [1.1] - Copy assignment is called and copy algorithm is called, setting vaylue of v2 to v
// [2.1] - Copy assignment is invoked, allocating new space and then deallocating it for v3
// [2.2] - No issues, copy constructor handles it
// Q #5:
/*
* The difference between a copy and move operation is that the copy operations creates a deep copy of all the elements in a class object, 
* whereas a move operation simply assigns the old object elements to a new one, hence no 'copying' is actually performed, only a move of
* an object. When tehmp is returned by value from 'fill_doubles' and assigned to v6 in main, the move constructor in invoked, as the temp 
* vector in the function scope, as there is no copying being done and the objects is simply being moved. This results in improved performance
* as it decreases overhead, as the compiler does not have to invoke a copy constructor to create an expensive copy of the object, and it can 
* simply move that object, decreasing compile time and cost.
*/
