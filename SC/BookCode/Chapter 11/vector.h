// 程序清单11.13 P400
// vect.h -- Vector class with <<, mode state
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>

using namespace std;

namespace VECTOR

{
    class Vector
    {
    public:
        enum Mode
        {
            RECT,
            POL
        };
        // RECT for rectangular, POL for polar modes
    private:
        double x;   // horizontal value
        double y;   // vertical value
        double mag; // length of vector
        double ang; // direction of vector in degrees
        Mode mode;  // RECT or POL
        // private methods for setting values
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();
        Vector(double n1, double n2, Mode from = RECT);
        void reset(double n1, double n2, Mode from = RECT);
        ~Vector();
        double xval() const { return x; }     // report x value
        double yval() const { return y; }     // report y value
        double magval() const { return mag; } // report magnitude
        double angval() const { return ang; } // report angle
        void polar_mode();                    // set mode to POL
        void rect_mode();                     // set mode to RECT
        // operator overloading
        Vector operator+(const Vector &b) const;
        Vector operator-(const Vector &b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        // friends
        friend Vector operator*(double n, const Vector &a);
        friend ostream &operator<<(ostream &os, const Vector &v);
    };

} // end namespace VECTOR

#endif