#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter your number ";
    cin >> number;

    if ( number % 2 == 0 ){
        cout << " The number is even " << endl;
    }
    else {
        cout << "The number is not even " << endl;
    }
    return 0;
}