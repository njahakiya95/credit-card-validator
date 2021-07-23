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

void validate_card(const string card_number) {
    //Find the length of the credit card 
    int card_length = card_number.length(); 

    //Even_sum holds the value of the even digit summation
    int even_sum {}; 

    //Odd_sum holds the value of the odd digit summation 
    int odd_sum {}; 

    //Loop over card_number and multiply every even digit by 2. 
    //If the result is over 10, add both digits. Take the sum of
    //all of the numbers 
    for (int i = card_length - 2; i >= 0; i = i -2) {
        int doubled_value = (card_number[i] - 48) * 2; 
        if (doubled_value > 9) {
            doubled_value = (doubled_value / 10) + (doubled_value % 10); 
        }
        even_sum += doubled_value; 
    }

    for (int i = card_length - 1; i >= 0; i = i -2) {
        odd_sum += card_number[i] - 48; 
    }
    
    //Total_sum is the summation of both the above operations 
    int total_sum = even_sum + odd_sum; 

    //Output result of Luhn's Algorithm
    cout << (total_sum % 10 == 0 ? "This credit card is valid!" : "This credit card is invalid!") << endl; 
}      

int main(){
    //Prompt the user to enter a credit card number and store the value in card_number
    cout << "Enter the credit card number you would like to validate: " << "\n"; 
    string card_number {}; 
    cin >> card_number; 

    //
    validate_card(card_number); 
}