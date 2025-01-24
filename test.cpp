#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int result=0;
    char ch;
    cout <<"Please enter a text:"<< endl;
    while(cin.peek()!='\n'){
        cout << (ch = cin.get());
    }
    return 0;
}