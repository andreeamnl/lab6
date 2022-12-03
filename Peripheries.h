#pragma once
#include "iostream"
#include "Root.h"

using namespace std;


class Peripheries:public Root{

    public:
        virtual void start_stats()=0;

};