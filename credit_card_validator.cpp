/**
 * This program determines whether the user-input 
 * credit card number is valid or not, and returns 
 * an output statement accordingly. 
 *
 * @credit_card_validator.cpp 
 * 
 * @author Nirmal Patel
 * @version 1.0 
 **/

#include <iostream>
#include <string>
using namespace std; 

int main() { 
    //Prompt the user to enter the credit card number they want to have validated
    //and store the value in long long int credit_card
    cout << "Please enter the credit card number you would like to validate: "; 
    long long int credit_card {}; 
    cin >> credit_card; 

    //Find the length of the credit card, then loop over the card starting from the 
    //second to last digit, multiplying each value by 2. 


    //Step 5- Take the sum and modulo 10, if it has a remainder the credit/debit card is invalid
    //Step 6- Return whether the credit card is valid or not 

}