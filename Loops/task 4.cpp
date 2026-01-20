//Program for Break Keyword in Loops

#include <iostream>
#include <string>
using namespace std;
int main (){

    string response ;

    while ( true ) {
        cout << " Do you want more tea ( type 'stop' to end ) : " ;
        getline ( cin , response );

        if ( response == "stop" ) {
            //exit the loop 
            break;
        }
        cout << " Here is your another cup of tea ! " << endl;
    }


    cout << " Thank you ! Visit Again ! " << endl;

    return 0;
   
}