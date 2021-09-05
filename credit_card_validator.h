#ifndef CREDIT_CARD_VALIDATOR_H // include guard
#define CREDIT_CARD_VALIDATOR_H

#include <iostream>
#include <string>

void validate_card(const std::string card_number) {
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

    //Convert the card number from string to int by subtracting its ASCII equivalent 
    for (int i = card_length - 1; i >= 0; i = i -2) {
        odd_sum += card_number[i] - 48; 
    }
    
    //Total_sum is the summation of both the above operations 
    int total_sum = even_sum + odd_sum; 

    //Output result of Luhn's Algorithm
    std::cout << (total_sum % 10 == 0 ? "This credit card is valid!" : "This credit card is invalid!") << std::endl; 
}
#endif /*CREDIT_CARD_VALIDATOR*/