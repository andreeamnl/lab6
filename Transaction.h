
#pragma once
#include "iostream"
#include "Root.h"

using namespace std;


class Transaction:public Root{ //superclass 5
    public:
        virtual bool isCard()=0;
};

