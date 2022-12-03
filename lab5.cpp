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

 Client_view client_obj_view;
 Client_view *client_view;
 client_view=&client_obj_view;

 Client_controller client_obj_controller;
 Client_controller *client_controller;
 client_controller=&client_obj_controller;

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
 
 Car_view car_obj_view;
 Car_view *car_view;
 car_view=&car_obj_view;
 
 Car_controller car_obj_controller;
 Car_controller *car_controller;
 car_controller=&car_obj_controller;
 
 Driver driver_obj;
 Driver *driver;
 driver=&driver_obj;

 Driver_view driver_obj_view;
 Driver_view *driver_view;
 driver_view=&driver_obj_view;

 Driver_controller driver_obj_controller;
 Driver_controller *driver_controller;
 driver_controller=&driver_obj_controller;
 
 Police police_obj;
 Police *police;
 police=&police_obj;

  
 Police_view police_obj_view;
 Police_view *police_view;
 police_view=&police_obj_view;

  
 Police_controller police_obj_controller;
 Police_controller *police_controller;
 police_controller=&police_obj_controller;
 
 
 Trip trip_obj;
 Trip *trip;
 trip=&trip_obj;

 Trip_view trip_obj_view;
 Trip_view *trip_view;
 trip_view=&trip_obj_view;

 Trip_controller trip_obj_controller;
 Trip_controller *trip_controller;
 trip_controller=&trip_obj_controller;
 
 Payment_process_view pay_obj_view;
 Payment_process_view *pay_view;
 pay_view=&pay_obj_view;

  
 Payment_process_controller pay_obj_controller;
 Payment_process_controller *pay_controller;
 pay_controller=&pay_obj_controller;

  
 Payment_process pay_obj;
 Payment_process *pay;
 pay=&pay_obj;

 Statistics stats_obj;
 Statistics *statistics;
 statistics=&stats_obj;
 
 
 Statistics_controller stats_obj_controller;
 Statistics_controller *statistics_controller;
 statistics_controller=&stats_obj_controller;
 //TaxiCompany taxi;
 //tc=&taxi;
 int i =0;
 while(true){

    //start scenarios

        cout<<"##################################################\n";
        cout<<"Scenario nr."<<i<<endl;
        client_controller->text();
        if (tc->isOpen()){
            tc_ctrl->text();
            if(tc_ctrl->isFound()){
                tc_ctrl->text_found();
                car_controller->text();
                driver_controller->text();
                police_controller->text();
                trip_controller->text_address();
                trip_controller->text_time();
                //int dist=trip->dist();
                pay_controller->payment_type(trip_controller->dist());
                pay_controller->payment_message();
                if(pay_controller->isNoPay()){
                    pay_controller->no_payment();
                }else{
                tc_ctrl->request_feedback();
                client_controller->feedback();
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
        statistics_controller->start_stats();
        statistics_controller->taxis_called(client_controller->taxis_caller());
        statistics_controller->taxis_came(driver_controller->taxis_came());
        statistics_controller->police_calls(police_controller->calls(), police_controller->fines());
        statistics_controller->day_time(pay_controller->day());
        statistics_controller->night_time(pay_controller->night());
        statistics_controller->money_collected(pay_controller->money());
        statistics_controller->payless(pay_controller->payless1());
        statistics_controller->total_dist(trip_controller->total_dist);
        statistics_controller->feedb(client_controller->good_feedb(),client_controller->bad_feedb());
        cout<<endl<<endl;
        sleep(2);
    }
 }
    return 0;
    
}