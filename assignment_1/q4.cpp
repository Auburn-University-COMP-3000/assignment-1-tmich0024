#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int weight, radius, cube;
    cout << "Input weight of the sphere in pounds.";
    cin >> weight;

    cout << "Input radius of the sphere in feet.";
    cin >> radius;

    cube = radius*radius*radius;
    if (4/3.0*M_PI*cube*62.4 >= weight){
        cout << "The sphere will float in water.";
    } else{
        cout << "The sphere will sink in water.";
    }
    return 0; 

}
    