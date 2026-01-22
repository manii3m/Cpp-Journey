//Program for Continue Keyword in Loops

#include <iostream>
#include <string>
using namespace std;
int main (){

    string TeaTypes[5] = { "Oolong Tea", "Black Tea", "Green Tea", "White Tea", "Herbal Tea" };
    
    for  (int i = 0 ; i < 5 ; i ++){

        if ( TeaTypes[i] == "Green Tea") {
            cout << " Sorry, we are out of Green Tea. " << endl;
            continue;
        }

        cout << " Brewing your " << TeaTypes[i]  << " ..." << endl;
    }
    
    return 0;
   
}