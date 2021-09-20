#pragma once
#include <string.h>

class Beverage {
public:
       char* description;
       char *getDescription();
       virtual double cost() = 0;
}      
