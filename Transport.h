
#pragma once
#include "iostream"
#include "Root.h"

using namespace std;


class Transport: public Root{ //superclass 3
    public:
        virtual bool isTransport ()=0;

};

class Car : public Transport{
    public:
          // Access specifier
        string car_brand[4] = {"Toyota Prius", "BMW", "Ford", "Mazda"};
        string car_color[5] = {"White", "Blue", "Black", "Gray", "Yellow"};     // Attribute
        string car_plate[7]={"WSA 123", "CSE 105", "GRT 456", "JYU 789", "TRE 566", "DEV 666", "BEG 777"};
        bool isTransport(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        } 
};


class Car_view{
    public: 
        bool confort;

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
        void text(string getColor, string getBrand, string getPlate){
            confort_type();
            cout<<"Taxi Company:    '"<<getColor<<" "<<getBrand<<" "<<getPlate<<" will soon be waiting for you.'"<<endl;

        }
};


class Car_controller{
    public:
    Car object;
    Car_view view;
    
        string getBrand(){
            int jr;
            string name;
            jr= (rand() % 4) ;
            name=(object.car_brand[jr]);
            return name;
        }
        string getColor(){
            int jr;
            string name;
            jr= (rand() % 5) ;
            name=(object.car_color[jr]);
            return name;
        }
        string getPlate(){
            int jr;
            string name;
            jr= (rand() % 7) ;
            name=(object.car_plate[jr]);
            return name;
        }
        void text(){
            view.text(getColor(),getBrand(),getPlate());
        }
        bool confort=view.confort;
        bool isConfort(){
            return view.isConfort();
        }

};