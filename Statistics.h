#pragma once
#include "iostream"
#include "Peripheries.h"

using namespace std;


class Statistics:public Peripheries{
    public:
        void taxis_called(int taxi){
            cout<<taxi<<" Taxis have been requested in total"<<endl;
        }
       void taxis_came(int taxi){
            cout<<taxi<<" Taxis were available"<<endl;
       }
       void police_calls(int calls, int fines){
            cout<<"Police has intervened "<<calls<<" times."<<endl;
            cout<<"Police has issued "<<fines<<" fines/amercements."<<endl;
       }
       void day_time(int day){
            cout<<4<<day+4<<" Taxis have been requested at slay day time."<<endl;
       }
       void night_time(int night){
            cout<<5<<night+8<<" Taxis have been requested at night time."<<endl;
       }
       void money_collected(float money){
            cout<<"A total of "<<money<<"$ has been collected."<<endl;
       }
       void payless(int pay){
            cout<<"A total of "<<(pay)<<" costumers managed to not pay their fee."<<endl;
       }
       void total_dist(float dist){
            cout<<"A total distance of "<<dist<<"km has been taveled by the drivers."<<endl;
            cout<<"An estimate of "<<(11.76*dist/100)<<" liters of fuel have been used."<<endl;
            cout<<"An estimate of "<<3.78*(11.76*dist/100)<<"$ has been spent on gas."<<endl;
       }
       void feedb(int good, int bad){
            cout<<"A total of "<<good<<" costumers have left positive reviews."<<endl;
            cout<<"A total of "<<bad<<" Have left bad reviews."<<endl;
       }

       // int taxis_called, taxis_came, police_calls, money_collected, money_lost, money_stats, numerical_feedback;
        void start_stats(){
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"2022 Statistics for Taxi Inc."<<endl;
        }
            

        

};

class Statistics_controller{
     Statistics view;
     public:
        void taxis_called(int taxi){
          view.taxis_called(taxi);}
       void taxis_came(int taxi){
          view.taxis_came(taxi);}
       void police_calls(int calls, int fines){
          view.police_calls(calls,fines);}
       void day_time(int day){
          view.day_time(day);}
       void night_time(int night){
          view.night_time(night);}
       void money_collected(float money){
          view.money_collected(money);}
       void payless(int pay){
          view.payless(pay);}
       void total_dist(float dist){
          view.total_dist(dist);}
       void feedb(int good, int bad){
          view.feedb(good,bad);}
        void start_stats(){
          view.start_stats();}

};