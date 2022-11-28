

#pragma once
#include "iostream"
#include "Transaction.h"

using namespace std;

class Payment_process: public Transaction{
    private:
    string no_pay[4]={"Client:  Oops, My wallet is inside, lemme go bring it","*Customer doesn't pay, runs away*","'Client:     It seems I lost my wallet, sorry'","'Client:    THIS IS A ROBBERY, give me ALL your money!'"};
    
    public:
        int payless=0;
        int total=0;
        int money=0;
        int night=0;
        int day=0;
        float night_fee=5.5;
        float day_fee=4.5;
        
        bool isCard(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        bool isDaytime(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        bool isNoPay(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        void payment_type(float distance){ //final fee depends on distance and day/night fee
            
            if(isDaytime()){
                total=0;
                //cout<<"\n dist is "<<distance<<endl<<"day fee is "<<day_fee<<endl;
                cout<<"\nDay time fee is applied, 6.5 per km\n";
                total=distance*day_fee;
                cout<<total<<" USD";
                day=day+1;
                money+=total;
            }else{
                total=0;
                //cout<<"\n dist is "<<distance<<endl<<"night fee is "<<night_fee<<endl;
                cout<<"\nNight time fee is applied, 7.5 per km\n";
                total=distance*night_fee;
                cout<<total<<" USD\n";
                night+=1;
                money+=total;
            }
        }

        void payment_message(){ //payment message depends on payment type
            if (isCard()){
                cout<<"\nYou have chosen to pay by card\n "<<endl;
            }else{
                cout<<"\nYou have chosen to pay cash\n "<<endl;
            }
        }
        
        void no_payment(){
                payless+=1;
                int jr;
                jr= (rand() % 4) ;
                cout<<no_pay[jr]<<endl;
        }
};


