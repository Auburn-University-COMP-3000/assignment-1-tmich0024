#include <iostream>

using namespace std;

int main(){

    int seconds;
    cout << "Enter a time in seconds:"<< endl;

    cin >> seconds;
    cout << "An object in freefall for " << seconds << " seconds will fall "<< 0.5*32*seconds*seconds << " feet.";

    return 0;
}