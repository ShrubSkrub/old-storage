#include <iostream>
using namespace std;
int main() {
    cout << "~ Sean Duarte - 3/04/18 ~" << endl;  // Name and date

    int height = 0, feet = 0, inches = 0;

    cout << "How many feet and how many inches tall are you?" << endl;
    cin >> feet >> inches;  //Take input

    height = feet * 12 + inches;  //Perform operation

    cout << "You are " << height << " inches tall." << endl;

    return 0;  // End program
}
