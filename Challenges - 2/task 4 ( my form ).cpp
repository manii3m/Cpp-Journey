//Challenge: Write a program that lets the user select a tea type from a menu.
//Use a switch statement to display the price based on the selected tea:

//Green Tea: $2
//Black Tea: $3
//Oolong Tea: $4

#include <iostream>
#include <string>
using namespace std;
int main (){
    
    

    cout << "Here is Your Menu for Tea: \n";
    cout << " 1. Green Tea  (Price 2$)\n";
    cout << " 2. Black Tea (Price 3$)\n";
    cout << " 3. Oolong Tea (Price 4$)\n";

    int choices;
    cout << " Enter your Choice in Numbers : \n";
    cin >> choices;

    if (choices == 1){
        cout << " You have selected Green Tea ( Price 2$ ) \n";
    }
    else if (choices == 2){
        cout << " You have selected Black Tea ( Price 3$ ) \n";
    }
    else if (choices == 3){
        cout << " You have selected Oolong Tea ( Price 4$ ) \n";
    }
    else {
        cout << " Invalid Choice \n";
    }

    int Orders;
    cout << " How many Orders you want : \n";
    cin >> Orders;

    int total;
    if (choices == 1){
        total = Orders * 2;
        cout << " Your Total Bill is : " << total << "$ \n";
    }
    else if (choices == 2){
        total = Orders * 3;
        cout << " Your Total Bill is : " << total << "$ \n";
    }
    else if (choices == 3){
        total = Orders * 4;
        cout << " Your Total Bill is : " << total << "$ \n";
    }

    cout << " Thank You for Visiting Our Tea Shop \n";
    return 0;
}