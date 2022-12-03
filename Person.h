
#pragma once
#include "iostream"
#include "Root.h"

using namespace std;


class Person: public Root{ //superclass 1
    public:
        virtual bool isPerson()=0;
};
