#include <cmath>
#include <math.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <ctime>
#include"Root.h"
#include "Peripheries.h"
#include "Statistics.h"
#include "Person.h"
#include "Police.h"
#include "Root.h"
#include "Route.h"
#include "Statistics.h"
#include "TaxiCompany.h"
#include "Transaction.h"
#include "Transport.h"
#include "Trip.h"
#include "Payment_Process.h"
#include "Client.h"
#include "Driver.h"
#include "Building.h"


using namespace std;


int main()
{  

 Client client_obj;
 Client *client;
 client=&client_obj;

 TaxiCompany taxi;
 TaxiCompany *tc;
 tc=&taxi;

TaxiCompany_view taxi_view;
 TaxiCompany_view *tc_view;
 tc_view=&taxi_view;

TaxiCompany_controller taxi_ctrl;
 TaxiCompany_controller *tc_ctrl;
 tc_ctrl=&taxi_ctrl;
 
 Car car_obj;
 Car *car;
 car=&car_obj;
 
 Driver driver_obj;
 Driver *driver;
 driver=&driver_obj;
 
 Police police_obj;
 Police *police;
 police=&police_obj;
 
 
 Trip trip_obj;
 Trip *trip;
 trip=&trip_obj;
 
 Payment_process pay_obj;
 Payment_process *pay;
 pay=&pay_obj;

 Statistics stats_obj;
 Statistics *statistics;
 statistics=&stats_obj;
 //TaxiCompany taxi;
 //tc=&taxi;
 int i =0;
 while(true){

    //start scenarios

        cout<<"##################################################\n";
        cout<<"Scenario nr."<<i<<endl;
        client->text();
        if (tc->isOpen()){
            tc_ctrl->text();
            if(tc_ctrl->isFound()){
                tc_ctrl->text_found();
                car->text();
                driver->text();
                police->text();
                trip->text_address();
                trip->text_time();
                //int dist=trip->dist();
                pay->payment_type(trip->dist());
                pay->payment_message();
                if(pay->isNoPay()){
                    pay->no_payment();
                }else{
                tc_ctrl->request_feedback();
                client->feedback();

                }
                
            }else{
                tc_ctrl->text_notfound();
            }
        }else{
            tc_ctrl->text_closed();
        }
        cout<<"\n\n";
        i++;
        //cout<<"etf";

    if((i % 15) == 0){
        statistics->start_stats();
        statistics->taxis_called(client->taxis_caller);
        statistics->taxis_came(driver->taxis_came);
        statistics->police_calls(police->calls, police->fines);
        statistics->day_time(pay->day);
        statistics->night_time(pay->night);
        statistics->money_collected(pay->money);
        statistics->payless(pay->payless);
        statistics->total_dist(trip->total_dist);
        statistics->feedb(client->good_feedb,client->bad_feedb);
        cout<<endl<<endl;
        sleep(2);
 }






 }
    return 0;
    
}