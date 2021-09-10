# Credit Card Validator

This project uses Luhn's Algorithm, also known as Modulus 10 Algorithm to 
determine whether or not a credit card number entered by the user via the
command line is valid or not. Luhn's Algorithm was developed by Hans Peter Luhn while he was a 
researcher at IBM. The algorithm works as described below:

1. Multiply the digits from the back, starting from the second-to-last. Skip one number, double the next until you’re now on the first number. 

        4003600000000014

        1 x 2 + 0 x 2 + 0 x 2 + 0 x 2 + 0 x 2 + 6 x 2 + 0 x 2 + 4 x 2

2. Now, we have product digits for all doubled digits, e.g. the product digit of 1 × 2 is 2. However,  the product digit of 6 × 2 will be 1 + 2 (derived from its product '12') because 12 is higher than 10. Add all the derived product digits together. 

        = 2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 = 13

3. The sum derived should be added to the sum of the digits that weren’t doubled. 

        13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20

4. If the last digit in the total is 0, then the set of numbers is valid.

        The last digit in 20 is 0. So, the Visa number is correct.

The code was written using C++ and run in Visual Studio Code IDE, but should be 
able to be run in any environment. Unit testing was done using GoogleTest.