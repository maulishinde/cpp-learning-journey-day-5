#include <iostream>
using namespace std;
int main(){

    int age, marks;

    cout << " Enter your age ";
    cin >> age;
    cout << " Enter your marks ";
    cin >> marks;
    
    if ( age >= 18 && marks >= 60 ){
        cout << " Student is eligible " << endl;
    }
    else{
        cout << " Student is not eligible " << endl;
    }
}