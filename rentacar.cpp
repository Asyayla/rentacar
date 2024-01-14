#include <iostream>
using namespace std;
int main () {
int a, b, cars;
bool occupied[3][20]={false};
do{
     cout << "Which car do you wanna rent:(1-BMW 2-BENZ 3-TESLA)\n";
     cin >> cars;
     cout << "Enter a start day:\n";
     cin >> a;
     cout << "Enter a end day:\n";
     cin >> b;
if(a>b) {
     cout << "Start day cannot bigger than end day!\n";
}
if(a<1 || a>30 || b<1 || b>30) {
     cout << "Enter a range day.\n";
}
else { 
for(int i=a; i<=b; i++) {
if(occupied[cars-1][i]) { 
     if(cars==1) {
          cout << "This car is occupied for " << i << " day\n";
     }
     if(cars==2) {
          cout << "This car is occupied for " << i << " day\n";
     }
     if(cars==3) {
          cout <<"This car is occupied for " << i << " day\n";
     }
}
else {
     occupied[cars-1][i]=true;
     cout << "Thanks for visiting...\n";
}
}
}
}while(true);
     return 0;
}
