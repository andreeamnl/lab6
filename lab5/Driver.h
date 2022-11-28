#pragma once
#include "iostream"
#include "Person.h"

using namespace std;

class Driver: public Person{
    private:
        string driver_names[10]={"Mick J.", "Keith R.", "Jeffrey D.", "Ted B.","Amon G.", "Barack O.", "Ion J.", "Igor D.", "Maia S.", "Ozzy O."};
    public:
    int taxis_came=0;
    string getName(){
            int jr;
            string name;
            jr= (rand() % 10) ;
            name=(driver_names[jr]);
            return name;
        }
    void text(){
        cout<<"Driver:  'We'll be there in no time'\n";
        taxis_came+=1;
        int jr;
        jr= 1+(rand() % 4) ;
        switch(jr){
            case 1:
            cout<<"Driver:  'I hope you don't mind the music'\n *the worst song you've ever heard starts playing*\n";
                break;
            case 2:
            cout<<"Driver:  'Don't worry, I know a shorter way'\n";
                break;
            case 3:
            cout<<"*Driver makes an innapropriate comment*\n";
                break;
            case 4:
            cout<<"Driver:  'Oops, almost hit a pedestrian'\n";
                break;
        }
    }
};
