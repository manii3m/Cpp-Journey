#include <iostream>
#include <string>
using namespace std;
int main (){
    
    int orders;
    double pricePerCup = 5 , totalPrice , discount ;

    cout << " Enter the Number of TeaCups you Orders : ";
    cin >> orders ;

    totalPrice = orders * pricePerCup ;

    if ( orders > 20 ){
        discount = 0.2 ;
    }
    else if ( orders >= 10 && orders < 20){
        discount = 0.1 ;
    }
    else{
        discount = 0.0 ;
    }
 
    totalPrice -= totalPrice * discount ;

    cout << " Total Bill after Discount is : " << totalPrice << endl ;



    return 0;
}