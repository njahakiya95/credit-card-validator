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

using namespace std; 

//General outline 
//Determine if the entered credit card length is valid or not
//Take every other digit starting from back and multiply by 2
//If any result is greater than 10 add the two numbers 
//Add the new numbers with the remaining numbers you skipped over 
//Take sum and perform modulo 10. If the result is even, the credit
//card is valid 