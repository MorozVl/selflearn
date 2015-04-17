#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

#define SHOW(x) cout << #x << " = " << x << endl ;


int main()
{
   int month, day;
   cout << "Welcome to your weather programm" << endl;
   cin >> month >> day;
   srand (month*day);
   int prediction;
   char ans;
   cout << "Weather for today: " << endl;
   do{
       prediction = rand() % 3;
       switch (prediction) {
        case 0:
           cout << "The day will be sunny!" << endl;
           break;
        case 1:
           cout << "The day will by cloddy" << endl;
           break;
        case 2:
           cout << "The day will by stormy" << endl;
           break;
        default:
           cout <<  "the Weather programm is not funcionaly";
           break;
       }
       cout << "Want the weather for the next day?: ";
       cin >> ans;
   } while (ans == 'y'|| ans == 'Y');
   cout << "that's it from your 24 hour weather programm. \n";

   return 0;
}

