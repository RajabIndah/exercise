#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
int daysUntilExpiration;
switch (daysUntilExpiration = rand() % 12) 
{
case 0: cout << "Your subscription has expired" << endl; break;
case 1: cout << "Your subscription expires within a day!" << endl <<"Renew now and save 20%" << endl; break;
case 2: cout << "Your subscription expires in 2 days." << endl <<"Renew now and save 10%" << endl; break;
case 3: cout << "Your subscription expires in 3 days." << endl <<"Renew now and save 10%" << endl; break;
case 4: cout << "Your subscription expires in 4 days." << endl <<"Renew now and save 10%" << endl; break;
case 5: cout << "Your subscription expires in 5 days." << endl <<"Renew now and save 10%" << endl; break;
case 6: cout << "Your subscription will expire soon." << endl <<"Renew now!" << endl; break;
case 7: cout << "Your subscription will expire soon." << endl <<"Renew now!" << endl; break;
case 8: cout << "Your subscription will expire soon." << endl <<"Renew now!" << endl; break;
case 9: cout << "Your subscription will expire soon." << endl <<"Renew now!" << endl; break;
case 10: cout << "Your subscription will expire soon." << endl <<"Renew now!" << endl; break;
case 11: cout << "You have an active subscription" << endl; break;
}
return 0;
}