#pragma once

#ifndef MATHLIBRARY_H
#define MATHLIBRARY_H

#include <iostream>
using namespace std;


struct Triangle {
    double a; 
    double b; 
    double c; 
};

double calculatePerimeter(const Triangle& t);

double calculateArea(const Triangle& t);

#endif
