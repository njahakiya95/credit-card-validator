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
#include "credit_card_validator.h"
using namespace std; 

//Driver code
int main(){
    //Prompt the user to enter a credit card number and store the value in card_number
    cout << "Enter the credit card number you would like to validate: " << "\n"; 
    string card_number {}; 
    cin >> card_number; 

    //Run user input number through validate_card function
    validate_card(card_number); 
}