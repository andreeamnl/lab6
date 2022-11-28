#pragma once
#include "iostream"
#include "Building.h"

using namespace std;


class TaxiCompany: public Building{  
    public:
        string company_name[4]={"Uber", "iTaxi", "Yandex", "14448"};

        bool isOpen(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }   
   
};


class TaxiCompany_view{
    public:
        int rg;
        void text(string name){
            cout<<"Taxi company:    '"<<name<<"' has been contacted, we are looking for a driver.'\n";
            }
        void text_closed(){
            cout<<"Taxi Company:    'We are sorry to inform that our working hours are over, have a nice day!'\n";
        }
        void text_found(){
             cout<<"Taxi company:   'Driver is on his way.'\n";
        }
        void text_notfound(){
            cout<<"Taxi company:    'It seems we couldn't find a driver at the moment, try later.'\n";

        }
        void request_feedback(){
            cout<<"Taxi company:    'So that was it, please leave a feedback.'\n";
        }

};

class TaxiCompany_controller{
    TaxiCompany object;
    TaxiCompany_view view;

public:
    int jr;
        string getName(){
            string name;
            jr= (rand() % 4) ;
            name=(object.company_name[jr]);
            return name;
                }
        bool isFound(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }

        bool isOpen=object.isOpen();
        
        void text(){
            view.text(getName());
        }

        void text_closed(){
            view.text_closed();
         }

        void text_notfound(){
            view.text_notfound();
          }

        void text_found(){
            view.text_found();
        }

        void request_feedback(){
            view.request_feedback();
        }

};