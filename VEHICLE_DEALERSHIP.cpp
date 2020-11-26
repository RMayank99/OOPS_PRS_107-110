#include <iostream>
#include<list>
#include<algorithm>
#include<stdlib.h>
#include<conio.h>

using namespace std;
class allout;
class customer{
 private:
    string cus_name;
    long long int phone_number;

 public:

     long int budget;
     int input;

    void assign_info(){
        cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
        cout<<"         ENTER CUSTOMER NAME : ";cin>>cus_name;
        cout<<"         ENTER CUSTOMER'S 10 DIGIT PHONE NUMBER : ";cin>>phone_number;
        cout<<"         ENTER CUSTOMER BUDGET : ";cin>>budget;
        cout<<"         ENTER 1 FOR NEW CAR AND 2 FOR SECOND HAND CAR : ";cin>>input;
        cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
    }

    friend class allout;

};

customer cus;

class car{
    public:
    string company_name;
    string name;
    string fuel_type;
    string color;
    int model_number;
    int price;

    virtual void introduction(){
        cout<<"                        WELCOME TO SHERU AUTOMOBILES "<<endl<<endl;
    }
    
    friend class allout;
};

class HATCHBACK : public car , customer{

    public:
 
    void make_HATCHBACK( string c_n , string n , string f_t , string c , int m_n , int p){
        company_name=c_n;
        name=n;
        fuel_type=f_t;
        color=c;
        model_number=m_n;
        price=p;
    }

    void introduction(){
        cout<<"                        WELCOME TO HATCHBACK SECTION "<<endl;
    }

    friend class allout;

};

/*list <HATCHBACK> l1*/HATCHBACK hb[8];

class SEDAN : public car , customer{

        public:
        //static int SEDAN_COUNT;

        //SEDAN(){
            //SEDAN_COUNT++;
        //}//
        void make_SEDAN( string c_n , string n , string f_t , string c , int m_n , int p ){
            company_name=c_n;
            name=n;
            fuel_type=f_t;
            color=c;
            model_number=m_n;
            price=p;
        }

        void introduction(){
        cout<<"                        WELCOME TO SEDAN SECTION "<<endl;
    }

    // void show(){
      //cout<<endl<<endl<<"         TOTAL SEDANS IN INVENTORY ARE : "<<SEDAN_COUNT;
    //}

    friend class allout;

};

/*list <SEDAN> l2;*/SEDAN s[8];

class COMPACT_SUV : public car , customer {

        public:
        //static int COMPACT_SUV_COUNT;
        void make_COMPACT_SUV( string c_n , string n , string f_t , string c , int m_n , int p ){
           company_name=c_n;
           name=n;
           fuel_type=f_t;
           color=c;
           model_number=m_n;
           price=p;
        }

        void introduction(){
        cout<<"                        WELCOME TO COMPACT SUVS SECTION "<<endl;
    }
     //void show(){
      //cout<<endl<<endl<<"         TOTAL COMPACT SUVS IN INVENTORY ARE : "<<COMPACT_SUV_COUNT;
    //}

    friend class allout;

};

/*list <COMPACT_SUV> l3;*/COMPACT_SUV cs[8];

class SUV : public car , customer {

        public:
        //static int SUV_COUNT;

        //SUV(){
            //UV_COUNT++;
        //}
        void make_SUV( string c_n , string n , string f_t , string c , int m_n , int p ){
           company_name=c_n;
           name=n;
           fuel_type=f_t;
           color=c;
           model_number=m_n;
           price=p;
        }
       void introduction(){
        cout<<"                        WELCOME TO SUVS SECTION "<<endl;
    }
     //void show(){
      //cout<<endl<<endl<<"         TOTAL SUVS IN INVENTORY ARE : "<<SUV_COUNT;
      //cout<<"-----------------------------------------------------------------------------------------";
    //}

    friend class allout;

};

/*list <SUV> l4*/;SUV su[8];

/*int HATCHBACK :: HATCHBACK_COUNT=0;
int SEDAN :: SEDAN_COUNT=0;
int COMPACT_SUV :: COMPACT_SUV_COUNT=0;
int SUV :: SUV_COUNT=0;*/

class allout{

private:
       string cmpnynm;
       string nmcar;
       string fltyp;


    public:
        //allout xyz;
        HATCHBACK H;SEDAN SD;COMPACT_SUV CCSS;SUV SVU;

        void who_is_this(car &cars){
           cars.introduction();
        }

    void cars_in_budget_for_new(customer cus){

          //for hatchback
          if(cus.budget < 580000){
            cout<<endl<<endl<<"          -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-";
            cout<<endl<<endl<<"                 MINIMUM BUDGET SHOULD BE 580000 TO BUY A NEW CAR "<<endl;
            cout<<endl<<"          -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-";

          }
          else{int cnt=1;
          cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
          cout<<"                  CARS AUTO MATCHED ARE "<<endl;
          cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
          who_is_this(H);cout<<endl<<endl;
          for(int i=0;i<8;i++){

          if(cus.budget >= hb[i].price){

            cout<<" "<<cnt<<"                   "<<hb[i].company_name<<"'S "<<hb[i].name<<" IN "<<hb[i].fuel_type<<endl;
            cnt++;
               }
          }
          cout<<endl<<endl;who_is_this(SD);cout<<endl<<endl;
          for(int i=0;i<8;i++){

          if(cus.budget >= s[i].price){

            cout<<" "<<cnt<<"                   "<<s[i].company_name<<"'S "<<s[i].name<<" IN "<<s[i].fuel_type<<endl;
            cnt++;
             }
          }
            cout<<endl<<endl;who_is_this(CCSS);cout<<endl<<endl;
          for(int i=0;i<8;i++){

          if(cus.budget >= cs[i].price){

            cout<<" "<<cnt<<"                   "<<cs[i].company_name<<"'S "<<cs[i].name<<" IN "<<cs[i].fuel_type<<endl;
            cnt++;
             }
          }
           cout<<endl<<endl;who_is_this(SVU);cout<<endl<<endl;
          for(int i=0;i<8;i++){

          if(cus.budget >= su[i].price){

            cout<<" "<<cnt<<"                   "<<su[i].company_name<<"'S "<<su[i].name<<" IN "<<su[i].fuel_type<<endl;
            cnt++;
             }
          }
          }
  }

     void cars_in_budget_for_old(customer cus){

          if(cus.budget < 232000){
            cout<<endl<<endl<<"          -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-";
            cout<<endl<<endl<<"                 MINIMUM BUDGET SHOULD BE 348000 TO BUY A SECOND HAND CAR "<<endl;
            cout<<endl<<"          -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-";
          }
          else{int cnt=1;
          cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
          cout<<"                  CARS AUTO MATCHED ARE "<<endl;
          cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
          who_is_this(H);cout<<endl<<endl;
          for(int i=0;i<8;i++){
          if(cus.budget >= hb[i].price - (hb[i].price*60)/100 ){

            cout<<" "<<cnt<<"                   "<<hb[i].company_name<<"'S "<<hb[i].name<<" IN "<<hb[i].fuel_type<<endl;
            cnt++;
               }
          }
          cout<<endl<<endl;who_is_this(SD);cout<<endl<<endl;
          for(int i=0;i<8;i++){
          if(cus.budget >= s[i].price - (s[i].price*60)/100 ){

            cout<<" "<<cnt<<"                   "<<s[i].company_name<<"'S "<<s[i].name<<" IN "<<s[i].fuel_type<<endl;
            cnt++;
             }
          }
          cout<<endl<<endl;who_is_this(CCSS);cout<<endl<<endl;
          for(int i=0;i<8;i++){
          if(cus.budget >= cs[i].price - (cs[i].price*60)/100 ){

            cout<<" "<<cnt<<"                   "<<cs[i].company_name<<"'S "<<cs[i].name<<" IN "<<cs[i].fuel_type<<endl;
            cnt++;
             }
          }
          cout<<endl<<endl;who_is_this(SVU);cout<<endl<<endl;
          for(int i=0;i<8;i++){
          if(cus.budget >= su[i].price - (su[i].price*60)/100) {

            cout<<" "<<cnt<<"                   "<<su[i].company_name<<"'S "<<su[i].name<<" IN "<<su[i].fuel_type<<endl;
            cnt++;
             }
          }
          }
}

    void buy_car_new(customer &cus){
       cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
       cout<<"                ENTER COMPANY'S NAME : ";cin>>cmpnynm;
       cout<<"                ENTER NAME OF CAR : ";cin>>nmcar;
       cout<<"                ENTER FUEL TYPE OF CAR : ";cin>>fltyp;
       cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;

         bool y=false;

         try{
             for(int i=0;i<8;i++){
          if(cmpnynm == hb[i].company_name && nmcar == hb[i].name && fltyp == hb[i].fuel_type ) {
             system("cls");
             system("COLOR F2");
             y=true;
             cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<endl<<endl<<"                    CONGRATULATIONS "<<cus.cus_name<<" "<<hb[i].company_name<<"'S "<<hb[i].name<<" BOUGHT AT PRICE OF "<<hb[i].price<<endl;
                cus.budget = cus.budget - hb[i].price;
                cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            }
          }

          for(int i=0;i<8;i++){
          if(cmpnynm == s[i].company_name && nmcar == s[i].name && fltyp == s[i].fuel_type ) {
             system("cls");
             system("COLOR F2");
             y=true;
             cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<endl<<endl<<"                    CONGRATULATIONS "<<cus.cus_name<<" "<<s[i].company_name<<"'S "<<s[i].name<<" BOUGHT AT PRICE OF "<<s[i].price<<endl;
                cus.budget = cus.budget - s[i].price;
                cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            }
          }

           for(int i=0;i<8;i++){
          if(cmpnynm == cs[i].company_name && nmcar == cs[i].name && fltyp == cs[i].fuel_type ) {
             system("cls");
             system("COLOR F2");
             y=true;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<endl<<endl<<"                   CONGRATULATIONS "<<cus.cus_name<<" "<<cs[i].company_name<<"'S "<<cs[i].name<<" BOUGHT AT PRICE OF "<<cs[i].price<<endl;
                cus.budget = cus.budget - cs[i].price;
                cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            }
          }

           for(int i=0;i<8;i++){
          if(cmpnynm == su[i].company_name && nmcar == su[i].name && fltyp == su[i].fuel_type ) {
               system("cls");
               system("COLOR F2");
               y=true;
               cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<endl<<endl<<"                  CONGRATULATIONS "<<cus.cus_name<<" "<<su[i].company_name<<"'S "<<su[i].name<<" BOUGHT AT PRICE OF "<<su[i].price<<endl;
                cus.budget = cus.budget - su[i].price;
                cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            }
            if(y == false)
                throw 10;
          }


        }

        catch(int e){

           cout<<endl<<"          YOU ENTERED WRONG DETAILS , PLEASE ENTER AGAIN "<<endl;
           buy_car_new(cus);
        }

          //cout<<endl<<endl<<"          YOU ENTERED WRONG DETAILS , ENTER AGAIN"<<endl<<endl;
          //buy_car_new(cus);


    }

    void buy_car_old(customer &cus){
       cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
       cout<<"                ENTER COMPANY'S NAME : ";cin>>cmpnynm;
       cout<<"                ENTER NAME OF CAR : ";cin>>nmcar;
       cout<<"                ENTER FUEL TYPE OF CAR : ";cin>>fltyp;
       cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;

        bool y=false;

        try{
            for(int i=0;i<8;i++){
          if(cmpnynm == hb[i].company_name && nmcar == hb[i].name && fltyp == hb[i].fuel_type ) {
            system("cls");
            system("COLOR F2");
             y=true;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<endl<<endl<<"                    CONGRATULATIONS "<<cus.cus_name<<" "<<hb[i].company_name<<"'S "<<hb[i].name<<" BOUGHT AT PRICE OF "<<hb[i].price - (hb[i].price*60)/100<<endl;

                cus.budget = cus.budget - (hb[i].price - (hb[i].price*60)/100);
                cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            }
          }

          for(int i=0;i<8;i++){
          if(cmpnynm == s[i].company_name && nmcar == s[i].name && fltyp == s[i].fuel_type ) {
            system("cls");
            system("COLOR F2");
             y=true;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<endl<<endl<<"                   CONGRATULATIONS "<<cus.cus_name<<" "<<s[i].company_name<<"'S "<<s[i].name<<" BOUGHT AT PRICE OF "<<s[i].price - (s[i].price*60)/100<<endl;
                cus.budget = cus.budget - (s[i].price - (s[i].price*60)/100);
                cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            }
          }

           for(int i=0;i<8;i++){
          if(cmpnynm == cs[i].company_name && nmcar == cs[i].name && fltyp == cs[i].fuel_type ) {
            system("cls");
            system("COLOR F2");
             y=true;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<endl<<endl<<"                    CONGRATULATIONS "<<cus.cus_name<<" "<<cs[i].company_name<<"'S "<<cs[i].name<<" BOUGHT AT PRICE OF "<<cs[i].price - (cs[i].price*60)/100<<endl;
                cus.budget = cus.budget - (cs[i].price - (cs[i].price*60)/100);
                cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            }
          }

           for(int i=0;i<8;i++){
          if(cmpnynm == su[i].company_name && nmcar == su[i].name && fltyp == su[i].fuel_type ) {
              system("cls");
              system("COLOR F2");
               y=true;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<endl<<endl<<"                    CONGRATULATIONS "<<cus.cus_name<<" "<<su[i].company_name<<"'S "<<su[i].name<<" BOUGHT AT PRICE OF "<<su[i].price - (su[i].price*60)/100<<endl;
                cus.budget = cus.budget - (su[i].price - (su[i].price*60)/100);
                cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            }
          }

          if(y==false)
                throw 10;
        }

        catch(int e){

           cout<<endl<<"          YOU ENTERED WRONG DETAILS , PLEASE ENTER AGAIN "<<endl;
           buy_car_old(cus);
        }

          //cout<<endl<<endl<<"          YOU ENTERED WRONG DETAILS , PLEASE ENTER AGAIN"<<endl<<endl;
          //buy_car_old(cus);
    }

    void money_left(customer cus){
          cout<<endl<<endl<<"          -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-";
          cout<<endl<<endl<<"                       YOUR MONEY LEFT IS :-> "<<cus.budget<<endl;
          cout<<endl<<"          -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-";
    }
};

/*void show_cars_in_inventory(car &m){
  m.show();
}*/

int main()
{
      //HATCHBACK hb[8];

      hb[0].make_HATCHBACK("HYUNDAI","I20 3RD GEN","PETROL","WHITE",2020,650000);
      hb[1].make_HATCHBACK("HYUNDAI","I20-ASTRA 3RD GEN","DIESEL","BLACK",2020,745000);

      hb[2].make_HATCHBACK("HONDA","WR-V","PETROL","LIGHT GREY",2018,580000);
      hb[3].make_HATCHBACK("HONDA","WR-V","DIESEL","WHITE",2018,640000);

      hb[4].make_HATCHBACK("TATA","ALTROZ","PETROL","GOLDEN",2019,650000);
      hb[5].make_HATCHBACK("TATA","ALTROZ","DIESEL","GOLDEN",2019,730000);

      hb[6].make_HATCHBACK("MARUTI-SUZUKI","BALENO","PETROL","RED",2017,600000);
      hb[7].make_HATCHBACK("MARUTI-SUZUKI","BALENO","DIESEL","BLACK",2017,670000);

      /*l1.push_back(hb1a);l1.push_back(hb1b);l1.push_back(hb2a);l1.push_back(hb2b);
      l1.push_back(hb3a);l1.push_back(hb3b);l1.push_back(hb4a);l1.push_back(hb4b);*/

      //SEDAN s[8];

      s[0].make_SEDAN("HYUNDAI","VERNA","PETROL","WHITE",2019,900000);
      s[1].make_SEDAN("HYUNDAI","VERNA","DIESEL","BLACK",2019,1000000);

      s[2].make_SEDAN("HONDA","CITY","PETROL","WHITE",2019,930000);
      s[3].make_SEDAN("HONDA","CITY","DIESEL","BLACK",2019,1090000);

      s[4].make_SEDAN("TATA","TIGOR","PETROL","WHITE",2019,880000);
      s[5].make_SEDAN("TATA","TIGOR","DIESEL","WHITE",2019,960000);

      s[6].make_SEDAN("MARUTI-SUZUKI","SWIFT DIZIRE","PETROL","WHITE",2019,890000);
      s[7].make_SEDAN("MARUTI-SUZUKI","SWIFT DIZIRE","DIESEL","WHITE",2019,960000);

      //l2.push_back(s1a);l2.push_back(s1b);l2.push_back(s2a);l2.push_back(s2b);
      //l2.push_back(s3a);l2.push_back(s3b);l2.push_back(s4a);l2.push_back(s4b);

      //COMPACT_SUV cs[8];

      cs[0].make_COMPACT_SUV("HYNDAI","VENNUE","PETROL","WHITE",2019,900000);
      cs[1].make_COMPACT_SUV("HYNDAI","VENNUE","DIESEL","BLACK",2019,970000);

      cs[2].make_COMPACT_SUV("KIA","SONET","PETROL","BLACK",2019,920000);
      cs[3].make_COMPACT_SUV("KIA","SONET","DIESEL","WHITE",2019,990000);

      cs[4].make_COMPACT_SUV("TATA","NEXON","PETROL","BLACK AND WHITE",2020,880000);
      cs[5].make_COMPACT_SUV("TATA","NEXON","DIESEL","BLACK AND WHITE",2020,960000);

      cs[6].make_COMPACT_SUV("MARUTI-SUZUKI","BREEZA","PETROL","WHITE",2020,860000);
      cs[7].make_COMPACT_SUV("MARUTI-SUZUKI","BREEZA","DIESEL","WHITE",2020,935000);

      //l3.push_back(cs1a);l3.push_back(cs1b);l3.push_back(cs2a);l3.push_back(cs2b);
      //l3.push_back(cs3a);l3.push_back(cs3b);l3.push_back(cs4a);l3.push_back(cs4b);

      //SUV su[8];

      su[0].make_SUV("HYUNDAI","CRETA","PETROL","BLACK",2020,1300000);
      su[1].make_SUV("HYUNDAI","CRETA","DIESEL","WHITE",2020,1380000);

      su[2].make_SUV("KIA","SELTOS","PETROL","LIGHT GREY",2019,1250000);
      su[3].make_SUV("KIA","SELTOS","DIESEL","WHITE",2019,1350000);

      su[4].make_SUV("TATA","HARRIER","PETROL","WHITE",2019,1250000);
      su[5].make_SUV("TATA","HARRIER","DIESEL","WHITE",2019,1330000);

      su[6].make_SUV("MAHINDRA","SCORPIO","PETROL","BLACK",2017,1370000);
      su[7].make_SUV("MAHINDRA","SCORPIO","DIESEL","BLACK",2017,1455000);

      /*l4.push_back(su1a);l4.push_back(su2b);l4.push_back(su2a);l4.push_back(su1b);
      l4.push_back(su3a);l4.push_back(su3b);l4.push_back(su4a);l4.push_back(su4b);*/


      allout all;

      int choice1;

    do{
            system("cls");
            system("COLOR F0");
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<"                           WELCOME TO SHERU AUTOMOBILES MAIN MENU   "<<endl;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl;
            cout<<endl<<"                                   1. ENTER YOUR(CUSTOMER) DETAILS AND REQUIREMENTS "<<endl<<endl;
            cout<<"                                   2. SEE SELECTED CARS FITTING IN YOUR BUDGET "<<endl<<endl;
            cout<<"                                   3. BUY YOUR CAR "<<endl<<endl;
            cout<<"                                   4. MONEY LEFT "<<endl<<endl;
            cout<<"                                   5. EXIT "<<endl<<endl;
            cout<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;
            cout<<endl<<"      Enter your choice for MAIN MENU : ";
            cin>>choice1;

            switch(choice1){

            case 1 : {
                        system("cls");
                        system("COLOR B0");
                        cus.assign_info();
                        break;
                     }

            case 2 : {
                       system("cls");
                       system("COLOR B0");
                       if(cus.input==1){
                        all.cars_in_budget_for_new(cus);getch();break;
                       }
                       else{
                        all.cars_in_budget_for_old(cus);getch();break;}

                    }
          case 3 :  {
                      system("cls");
                      system("COLOR B0");
                      if(cus.input==1){
                      all.buy_car_new(cus);getch();break;}
                      else
                        {all.buy_car_old(cus);getch();break;}

                    }
         case 4 :  {
                     system("cls");
                     system("COLOR B0");
                     all.money_left(cus);getch();
                     break;
                   }
         /*case 5 :  {
                       system("cls");
                       system("COLOR B0");
                       HATCHBACK H;SEDAN SD;COMPACT_SUV CCSS;SUV SVU;
                       show_cars_in_inventory(H);
                       show_cars_in_inventory(SD);
                       show_cars_in_inventory(CCSS);
                       show_cars_in_inventory(SVU);getch();
                   }*/
            }

    }while(choice1!=5);

    return 0;
}
