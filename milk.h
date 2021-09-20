#pragma once
#include "condimentdecorator.h"
#include "beverage.h"

class Milk : public CondimentDecorator {
public:
       Beverage *beverage;
       Milk();
       char* getDescription(Beverage*);
       double cost();
}             
         
