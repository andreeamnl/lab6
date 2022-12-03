
#pragma once
#include "iostream"
#include "Root.h"

using namespace std;

class Route: public Root{ //superclass 4
    public:
        virtual bool isTrip()=0;

};
