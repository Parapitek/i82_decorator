#include "beverage.h"

Beverage::Beverage() {
    description = new char [200];
    strcpy(description, "Unknown Bevearage");
}

char* Beverage::getDescription() {
      return description;
}        
