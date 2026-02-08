#include <iostream>
#include <cmath>
using namespace std;

double panelwattperSi = 1; //placeholder value
double sunpos = 0; //90 is sunrise 270 is sunset 0 is mid day
double pannelrot = 0; //the rot for the panel 0 is facing up 90 is the side
int pannelface = 2; //1 is north 2 is east 3 is south 4 is west

void pm() { //math system
    int output = sunpos - pannelrot;
    double foutput = output * M_PI / 180;
    cout << cos(foutput); // effet


}

void pmoutput() { //print for cleaner scripts for me

}

int main(){
    cout << "worms" << endl; //worms is a hello world for me
    pm();

}  
