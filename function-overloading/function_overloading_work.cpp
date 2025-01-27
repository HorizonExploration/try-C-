#include <iostream>
#include <cmath>

using namespace std;

int compute(int in1)
{
    return in1*in1;
}
int compute(int in1, int in2)
{
    return in1*in2;
}
int compute(int in1, int in2, int in3)
{
    return in1+in2+in3;
}
int main()
{
    int numParams;
    cout << "Enter the number of parameters (1, 2, or 3): ";
    cin >> numParams;

    if (numParams == 1) {
        int a;
        cout << "Enter one integer: ";
        cin >> a;
        cout << "Result: " << compute(a) << endl;
    } else if (numParams == 2) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << compute(a, b) << endl;
    } else if (numParams == 3) {
        int a, b, c;
        cout << "Enter three integers: ";
        cin >> a >> b >> c;
        cout << "Result: " << compute(a, b, c) << endl;
    } else {
        cout << "Invalid number of parameters. Please enter 1, 2, or 3." << endl;
    }

    return 0;

}