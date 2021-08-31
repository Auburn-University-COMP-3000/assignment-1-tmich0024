#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int cel, fah;
    cel = 100;
    fah = 32+(9/5.0)*cel;
    
    if (cel != fah){
        do{
            cel -= 1;
            fah = 32+(9/5.0)*cel;

        } while (cel != fah);
    }
    cout << cel << " Celsius equals " << fah << " Fahremheit";

    return 0;
}