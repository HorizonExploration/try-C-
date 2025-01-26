#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char answer;
    cout << "你是臭皮皮吗 ?"
         << "(Y|N)" << endl;
    cin >> answer;
    if(answer == 'Y' || answer == 'y'){
        cout << "原来你就是那个大臭屁啊." << endl;
    }else if(answer == 'N' || answer == 'n'){
        cout << "那谁是大臭屁啊."
             <<endl;
    }else{
        cout << "That's not a valid answer." << endl;
    }
    cin.get();

    cout << "enter any key to exit." << endl;
    cin.get();
    return 0;
}