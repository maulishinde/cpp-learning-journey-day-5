#include <iostream>
using namespace std;
int main (){
    int num1, num2, num3;
    cout << " Enter the num1 ";
    cin >> num1;
    cout << " Enter the num2 ";
    cin >> num2;
    cout << " Enter the num3 ";
    cin >> num3;
    if ( num1 > num2 && num2 < num3 ){
        cout << " Num1 is large " << endl;
    }
    else if ( num2 > num1 && num2 > num3 ){
        cout << " Num2 is large " << endl;
    }
    else{
        cout << " The number is zero " << endl;
    }
    return 0;
}