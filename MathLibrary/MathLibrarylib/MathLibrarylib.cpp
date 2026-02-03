#include "pch.h"
#include "framework.h"

#include "MathLibrary.h"
#include <cmath>
using namespace std;


double calculatePerimeter(const Triangle& t) {
    return t.a + t.b + t.c;
}


double calculateArea(const Triangle& t) {
    double s = (t.a + t.b + t.c) / 2.0; 
    return sqrt(s * (s - t.a) * (s - t.b) * (s - t.c));
}

void fnMathLibrarylib()
{
}
