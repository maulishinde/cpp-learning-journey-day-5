#include <iostream>
using namespace std;
int main (){
     
    int num1 , num2;

    cout << " Enter the num1 ";
    cin >> num1;
    cout << " Enter the num2 ";
    cin >> num2;

    if ( num1 > num2 ){
        cout << " The number is true " << endl;
    }
    else if ( num1 < num2 ){
        cout << " The number is false " << endl;
    }
    else{
        cout << "The number is not available " << endl;
    }
    return 0;
}