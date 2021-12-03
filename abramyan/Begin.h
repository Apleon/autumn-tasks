#include "superHeader_993-7.h"

//task 1
double perimeterSquare(double side) 
{
    return side * 4;
}

//task 2
double squareOfSquare(double side)
{
    return goolSSrang::pow(side, 2);
}

//task 3
double squareandPerimeterRectangle(double side_a, double side_b, double& P)
{
    P = 2 * (side_a + side_b);
    return side_a * side_b;
}

//task 4
double length(double diameter)
{
    return diameter * 3.14;
}

//task 5
double volumeandSurfaceareacube(double length, double& V)
{
    V = pow(length, 3);
    return 6 * goolSSrang::pow(length, 2);
}

//task 7
double lengthandSquarecircle(double R, double& L)
{
    L = 2 * 3.14 * R;
    return 3.14 * goolSSrang::pow(R, 2);
}

//task 18
double productSegments(double point_a, double point_b, double point_c)
{
    point_a = point_c - point_a;
    point_b -= point_c;
    return point_a * point_b;
}

// task22
void changeVeriablescontent(double& a, double& b)
{
    goolSSrang::swap(a, b);
    cout << a << ' ' << b;
}

//task 27
void powerOf8(double a)
{
    a *= a;
    cout << a;
    a *= a * a;
    cout << a;
    a *= a * a;
    cout << a;
}

//task 29
double angleInRadians(double angle)
{
    return angle * 3.14 / 180;
}

//task 32
double celsiusIntoFarenheit(double temperature)
{
    return temperature * 9 / 5 + 32;
}

//task 33
double priceOfcandies(double candiesWeght, double price, double& pricePer1)
{
    pricePer1 = price / candiesWeght;
    return candiesWeght / pricePer1;
}

//task 40
void systemOfLinearEquations(double a1, double b1, double c1, double a2, double b2, double c2, double& D, double& x, double& y)
{
    D = a1 * b2 - a2 * b1;
    x = (c1 * b2 - c2 * b1) / D;
    y = (a1 * c2 - a2 * c1) / D;
}