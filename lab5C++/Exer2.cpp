#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{   srand(time(NULL));
    int daysUntilExpiration = rand()%11+1;
    switch(daysUntilExpiration){
    case 0:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        cout<<"Your subscription expires in "<< daysUntilExpiration <<" Renew now and save 10%"<<endl;
        cout<<"Your subscription has expired"<<endl;
        break;
    case 1:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        cout<<"Your subscription expires in "<< daysUntilExpiration <<" Renew now and save 10%"<<endl;
        cout<<"Your subscription expires within a day Renew now and save 20%"<<endl;
        break;
    case 2:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        cout<<"Your subscription expires in "<< daysUntilExpiration <<" Renew now and save 10%"<<endl;
        break;
    case 3:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        cout<<"Your subscription expires in "<< daysUntilExpiration <<" Renew now and save 10%"<<endl;
        break;
    case 4:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        cout<<"Your subscription expires in "<< daysUntilExpiration <<" Renew now and save 10%"<<endl;
        break;
    case 5:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        cout<<"Your subscription expires in "<< daysUntilExpiration <<" Renew now and save 10%"<<endl;
        break;
    case 6:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        break;
    case 7:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        break;
    case 8:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        break;
    case 9:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        break;
    case 10:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        break;
    case 11:
        cout<<"You have an active subscription "<<endl;
        break;
    }
    return 0;
}