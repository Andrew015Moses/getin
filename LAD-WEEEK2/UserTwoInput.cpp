#include <iostream>
using namespace std;

int main () {
    int x , y;
    int sum ;


    cout << "Type a number: ";// type a number and press enter
    cin >> x ;//Get user input from the keyboard


    cout <<"Type another number: " ; // type a number and press enter
    cin >> y ; //Get user input from the keyboard 
 
    sum = x + y ; // the addition of x and y
    cout << "the sum is :  " << sum ;
    
    return 0;
}