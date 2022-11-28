
#pragma once
#include "iostream"
#include "Root.h"

using namespace std;

class Route: public Root{ //superclass 4
    public:
        virtual string pickup_address()=0;
        virtual string final_address()=0;
        virtual float distance()=0;
};
