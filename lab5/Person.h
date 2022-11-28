
#pragma once
#include "iostream"
#include "Root.h"

using namespace std;


class Person: public Root{ //superclass 1
    public:
        virtual string getName()=0;
        virtual void text()=0;
};
