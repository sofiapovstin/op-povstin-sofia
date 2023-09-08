#pragma once
#include <cmath>
#include <exception>
using namespace std;

class Function {
private:
    double x;

public:
    Function(double x);
    double calculateY();
};