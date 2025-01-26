#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    cout <<"Please enter the temperature followed by a space and the unit (C or F): "
         << endl;
    double temp;
    char unit;
    cin >> temp >> unit ;

    cout.precision(5);
    if(unit == 'C' || unit == 'c'){
        cout << "The temperature in centigrade is " << temp << " C" << endl;
        cout << "The temperture in fahreheit is " << (temp*9/5.0+32) << " F." << endl;
    } else if(unit == 'F' || unit == 'f'){
        cout << "The temperature in fahreheit is " << temp << " F" << endl;
        cout << "The temperture in centigrade is " << ((temp-32)*5/9.0) << " C." << endl;
    } else{
        cout << " You entered an invalid temperture." <<endl;
        return 1;
    }
    cin.ignore(1000,'\n');
    cout << "Enter any key to exit." << endl;
    cin.get();
    return 0;
}