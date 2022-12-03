
#pragma once
#include "iostream"
#include "Route.h"

using namespace std;

class Trip: public Route{
    public:
        string pickup[13]={"Mun. Chișinău, bd. Ștefan cel Mare și Sfînt nr. 200", "Mun. Chișinău, str. Mihail Sadoveanu, nr. 24/1", "1828 Courtney Avenue Los Angeles, CA 90046", "80033 Sunset Boulevard #88 Los Angeles, CA 90046","12711 Ventura Boulevard #40", "Mun. Chișinău, str. Kiev, nr. 3", "Beverly Hills, CA 90212", "Santa Monica, CA 90405", "Placerville, CO 81430 " , "Lake Buena Vista, FL 32830", "Santa Monica, CA 90411", " New York, NY 100", " Chicago, IL 60611"   };   
    bool isTrip(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }  
};



class Trip_view{
    public:
        float total_dist=0;
        void text_time(){
            int hr1= (rand() % 24) ;
            int mn= 1+(rand() % 59) ;
            int hr2=hr1+1;
            int mn2= (rand() % mn) ;
            cout<<"Driver:  Pickup time: "<<hr1<<":"<<mn<<endl;
            cout<<"Driver:  Destination reach time: "<<hr2<<":"<<mn2<<endl;
        };
        void text_address(string pickup_address, string final_address, float distance){
            cout<<"Driver:  '"<<pickup_address<<"-->"<<final_address<<endl<<"Driver:    Distance "<<distance<<"km"<<endl;
        }

        

};

class Trip_controller{
    Trip object;
    Trip_view view;
    public:
        string final_address(){
            string name;
            int jr;
            jr= (rand() % 13) ;
            name=(object.pickup[jr]);
            return name;
        }
        string pickup_address(){
            string name;
            int jr;
            jr= (rand() % 13) ;
            name=(object.pickup[jr]);
            return name;
        }
        int total_dist=view.total_dist;

        float distance(){
            int jr; float dist;
            jr= 1+(rand() % 36) ;
            dist=jr/1.456; //create random int then divide it by rd(float) to make it float;
            total_dist+=dist;
            return dist;
        }
        float dist(){
            return distance();
        }
        void text_address(){
            view.text_address(pickup_address(), final_address(), dist());
        }
        void text_time(){
            view.text_time();
        }
};