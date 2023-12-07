#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double BMW(int service, int days, int washing) {
     double price = 0;
     if(service == 1){
          price += 500;
     }
     if(days >= 1) {
          price *= (1-0.5);
     }
     if(washing == 1) {
          price += 170;
     }
     return price * days;
}
double Mercedes(int service, int days, int washing) {
     double price = 0;
     if(service == 1) {
          price += 780;
     }
     if(days >= 1) {
          price *= (2-0.7);
     }
     if(washing == 1) {
          price += 190;
     }
     return price * days;
}
double Togg(int service, int days, int washing) {
     double price = 0;
     if(service == 1) {
          price += 200;
     }
     if(days >= 1) {
          price *= (1-0.4);
     }
     if(washing == 1) {
          price += 90;
     }
     return price * days;
}
int main () {
     int price;
     int service, days, washing, cars, comfirm;
     double carsp1, carsp2, carsp3;
     cout << "Do you wanna service? (1-Yes 2-No)\n";
     cin >> service;
     cout << "Would you like washing service? (1-Yes 2-No)\n";
     cin >> washing;
     cout << "How many days is the rental period?\n";
     cin >> days;
     cout << "Which car would you like to rent? (1-BMW 2-Mercedes 3-Togg)\n";
     cin >> cars;
     if(cars == 1 || cars == 2 || cars == 3){
          carsp1 = BMW(service, days, washing);
          carsp2 = Mercedes(service, days, washing);
          carsp3 = Togg(service, days, washing);
          int min = carsp1;
          if(carsp2 < carsp1) {
               min = carsp2;
          }
          else if(carsp3 < carsp1) {
               min = carsp3;
          }
          cout << "Your total cost will be: " << fixed << setprecision(3) << min << '\n';
          cout << "Do you comfirm?: (1-Yes 2-No)\n";
          cin >> comfirm;
          if(comfirm == 1) {
               cout << "Your car will be recived tomorrow. Thanks for your purchase\n";
          }
          else if (comfirm == 2){
               cout << "Thanks for visiting. Have a nice day.\n";
          }
          else {
               cout << "İnvalid choice.\n";
               return 0;
          }
     }
     else{
          cout << "Invalid choice!\n";
          return 0;
     }
     return 0;
}
