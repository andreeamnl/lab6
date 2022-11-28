
#pragma once
#include "iostream"
#include "Route.h"

using namespace std;

class Trip: public Route{
    private:
        string pickup[13]={"Mun. Chișinău, bd. Ștefan cel Mare și Sfînt nr. 200", "Mun. Chișinău, str. Mihail Sadoveanu, nr. 24/1", "1828 Courtney Avenue Los Angeles, CA 90046", "80033 Sunset Boulevard #88 Los Angeles, CA 90046","12711 Ventura Boulevard #40", "Mun. Chișinău, str. Kiev, nr. 3", "Beverly Hills, CA 90212", "Santa Monica, CA 90405", "Placerville, CO 81430 " , "Lake Buena Vista, FL 32830", "Santa Monica, CA 90411", " New York, NY 100", " Chicago, IL 60611"   };   
    public:
        float total_dist=0;
        string pickup_address(){
            int jr;
            string name;
            jr= (rand() % 13) ;
            name=(pickup[jr]);
            return name;
        }
        string final_address(){
            string name;
            int jr;
            jr= (rand() % 13) ;
            name=(pickup[jr]);
            return name;
        }
        
        float distance(){
            int jr; float dist;
            jr= 1+(rand() % 36) ;
            dist=jr/1.456; //create random int then divide it by rd(float) to make it float;
            total_dist+=dist;
            return dist;
        }
        
        void text_address(){
            
            cout<<"Driver:  '"<<pickup_address()<<"-->"<<final_address()<<endl<<"Driver:    Distance "<<distance()<<"km"<<endl;
        }
        
        float dist(){
            return distance();
        }
        
        void text_time(){
            int hr1= (rand() % 24) ;
            int mn= 1+(rand() % 59) ;
            int hr2=hr1+1;
            int mn2= (rand() % mn) ;
            cout<<"Driver:  Pickup time: "<<hr1<<":"<<mn<<endl;
            cout<<"Driver:  Destination reach time: "<<hr2<<":"<<mn2<<endl;
        }
    
};
