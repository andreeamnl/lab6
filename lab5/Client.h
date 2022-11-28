


#pragma once
#include "iostream"
#include "Person.h"

using namespace std;


class Client:public Person{
    private:
        string client_names[10]={"Mick J.", "Keith R.", "Jeffrey D.", "Ted B.","Amon G.", "Barack O.", "Ion J.", "Igor D.", "Maia S.", "Ozzy O."};
        string feedb[11]={"'Ok'", 
        "'Whatever'", 
        "'I LITERALLY JUST GOT SCAMMED, CAN YALL COUNT MONEY?'", 
        "'My dead ancestors can drive better'", 
        "'The driver is probably drunk or something'",
         "'The driver made innapropriate comments the entire drive, I will be contacting the police'", 
         "'f******* ****'",
          "'no'",
           "'Everything good, thx'", 
           "'he charged me the wrong fee type, I will slash his tires'", 
           "'we almost crashed.'" };

    public:
        int good_feedb=0;
        int bad_feedb=0;
        int taxis_caller=0;
        string getName(){
            int jr;
            string name;
            jr= (rand() % 10) ;
            name=(client_names[jr]);
            return name;
        }
        void text(){
            cout<<"Customer:    'Hi, I am "<<getName()<<" ,currently looking for a taxi'\n";
            taxis_caller=taxis_caller+1;

            int jr;
            jr= 1+(rand() % 4) ;
            switch(jr){
                case 1:
                cout<<"Customer:    'Ugh why does it take so long'\n";
                    break;
                case 2:
                cout<<"*Patiently waiting*\n";
                    break;
                case 3:
                cout<<"Customer:    'I am so late...'\n";
                    break;
                case 4:
                cout<<"Customer:    'Why are they not picking up...'\n";
                    break;
            }
        }
        void feedback(){
            string feed; int jr;
            jr= (rand() % 11) ;
            feed=(feedb[jr]);
            cout<<"Customer:  "<<feed<<"\n";
            if(jr==2|jr==3|jr==4|jr==5){
                bad_feedb+=1;
            }else{
                good_feedb+=1;
            }

        }
        int taxis_call(){
            return taxis_caller;
        }
};