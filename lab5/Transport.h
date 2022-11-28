
#pragma once
#include "iostream"
#include "Root.h"

using namespace std;



class Transport: public Root{ //superclass 3
    public:
        virtual string getColor()=0;
        virtual string getBrand()=0;
        virtual string getPlate()=0;
};

class Car : public Transport{
    private:          // Access specifier
        string car_brand[4] = {"Toyota Prius", "BMW", "Ford", "Mazda"};
        string car_color[5] = {"White", "Blue", "Black", "Gray", "Yellow"};     // Attribute
        string car_plate[7]={"WSA 123", "CSE 105", "GRT 456", "JYU 789", "TRE 566", "DEV 666", "BEG 777"};

    public:
        bool confort;
        string getBrand(){
            int jr;
            string name;
            jr= (rand() % 4) ;
            name=(car_brand[jr]);
            return name;
        }
        string getColor(){
            int jr;
            string name;
            jr= (rand() % 5) ;
            name=(car_color[jr]);
            return name;
        }
        string getPlate(){
            int jr;
            string name;
            jr= (rand() % 7) ;
            name=(car_plate[jr]);
            return name;
        }
        bool isConfort(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        void confort_type(){
            if(isConfort()){
                cout<<"Taxi Company:    'You chose confort.'"<<endl;;
            }else{
                cout<<"Taxi Company:    'You chose standard.'"<<endl;
            }
        }
        void text(){
            confort_type();
            
            cout<<"Taxi Company:    '"<<getColor()<<" "<<getBrand()<<" "<<getPlate()<<" will soon be waiting for you.'"<<endl;

        }
};