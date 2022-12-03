
#pragma once
#include "iostream"
#include "Person.h"

using namespace std;

class Police : public Person{
    public:
        string police_names[10]={"Officer Kenny", "Officer Keith ", "Officer Dahmer ", "Officer Bundy","Officer Amon G.", "Officer Barack ", "Officer Ion J.", "Officer Igor D.", "Officer Maia S.", "Officer Ozzy O."};
        bool isPerson(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }   


   
};

class Police_view{
    public:
        int calls=0;
        int fines=0;
         void text(string getName){
            int jr;
            jr= 1+(rand() % 6) ;
            if(jr!=3&jr!=4&jr!=5){
                calls+=1;
            }
            if(jr==2){
                fines+=1;
            }
            switch(jr){
                case 1:
                cout<<"\n*Police intervention*\n";
                cout<<"'I am "<<getName<<", everything seems fine, continue your trip'\n";
                    break;
                case 2:
                cout<<"*You've been stopped by police.*\n"<<"'I am "<<getName<<", license and registration please'\n";
                cout<<"'You've been going 50 in a 30 zone, you will be fined.'\n\n";
                    break;
                case 3:
                cout<<"\n*Police just passed by.*\n\n";
                    break;
                case 4:
                cout<<"\n*Be careful, you might be pulled over by the officer over there...*\n\n";
                    break;
                case 5:
                cout<<"\nDriver:    'Sir I know you are late but I cant go any faster, police is near'\n";
                    break;
                case 6:
                cout<<"\nOops! You just crashed, but the client is rushing\nRun away from the crime scene?\n'Nino Nino'\nyou are being chased by police.\n\n ";
                    break;
            }

    }
    
};

class Police_controller{
    Police object;
    Police_view view;
    public:
        int jr;
        int calls(){
            return view.calls;
        }
        int fines(){
            return view.fines;
        }
        string getName(){
                string name;
                jr= (rand() % 10) ;
                name=(object.police_names[jr]);
                return name;
            }
        void text(){
            view.text(getName());
        }

};