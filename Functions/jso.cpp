#include <iostream>
#include <string>
using namespace std;
int main (){

    int cups ;
    cout << "Enter number of cups of tea: ";
    cin >> cups;

    //while loop 

    while (cups > 0 && cups <= 10) {
        cout << "Serving cups of tea \n" << cups << " remaining" << endl;
        cups--;
    }
    if (cups > 10) {
        cout << "We can serve maximum 10 cups of tea only!" << endl;
    }
    else if (cups <= 0) {
        cout << "Invalid number of cups!" << endl;
    }
    else {
        
    }
    cout << "All cups served!" << endl;

    cout << "Thank You for Visiting Us!" << endl; 

    return 0;
}