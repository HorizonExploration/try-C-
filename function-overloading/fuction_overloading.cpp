#include <iostream>
#include <cmath>

using namespace std;

void converttemperature(double intemp,char unit);
void converttemperature(int intemp,char unit);

int main()
{
    char unit;

   cout << "Please enter a number of double temperature followed by a unit (C or F): "
        << "XX.X C or XX.X F" << endl;
    double intempdouble;
    cin >> intempdouble >> unit;
    converttemperature(intempdouble,unit);

    cout << "Please enter a number of int temperature followed by a unit (C or F): "
         << "XX C or XX F" << endl;
    int tempint;
    cin >> tempint >> unit;
    converttemperature(tempint,unit);

    cin.ignore(100,'\n');
    cout <<"Press any key to exit" << endl;
    cin.get();

    return 0;
}

void converttemperature(double intemp,char unit)
{
    switch(unit)
    {
        case 'C':
        case 'c':
            cout << intemp << ".C" << " == " << (intemp * 9.0/5.0+32) << ".F" << endl;
            break;
        case 'F':
        case 'f':
            cout << intemp << ".F" << " == " << (intemp - 32) *5.0/9.0 << ".C" << endl;
            break;
        default:
            cout << "Invalid unit!" << endl;    
            break;      
    }
}
void converttemperature(int intemp,char unit)
{
    switch(unit)
    {
        case 'C':
        case 'c':
            cout << intemp << ".C" << " == " << (intemp * 9.0/5.0+32) << ".F" << endl;
            break;
        case 'F':
        case 'f':
            cout << intemp << ".F" << " == " << (intemp - 32) *5.0/9.0 << ".C" << endl;
            break;
        default:
            cout << "Invalid unit!" << endl;
            break;
    }
}