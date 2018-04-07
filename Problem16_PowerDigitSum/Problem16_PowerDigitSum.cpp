/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include<vector>

// Display Results
void func_displayVector( std::vector<int> vec)
{
    for (int digitInd = 0; digitInd < vec.size(); ++digitInd)
    {
        if (digitInd < (vec.size()-1))
        {
            std::cout << vec[digitInd];
        }
        else
        {
            std::cout << vec[digitInd] << std::endl;
        }
    }
}

int main()
{
    // Variables
    int baseNum = 2, expNum = 1000, carryValue = 0, tempProd = 0;
    std::vector<int> digits;
    
    // Compute size (number of digits) for final answer
    int numOfDigits = 1 + (expNum * log10(baseNum));
    std::cout << "Number of digits: " << numOfDigits << std::endl;
    
    // Create a vector with each number representing each digit.
    // Initialize all values to zeros except last one.
    for (int digitInd = 0; digitInd < numOfDigits; ++digitInd)
    {
        digits.push_back(0); 
    }
    
    digits[numOfDigits-1] = 1;
    
    
    // Multiply base number expNum times.
    for (int mulCount = 0; mulCount < expNum; ++mulCount)
    {
        carryValue = 0;
        for (int digitInd = numOfDigits-1; digitInd >= 0; --digitInd)
        {
            
            // Multiply each digit with base number and add carry
            tempProd = digits[digitInd] * baseNum;
            tempProd = tempProd + carryValue;
            
            // if less than 10, put as is.
            // else add units place and carry rest over.
            if (tempProd < 10)
            {
                digits[digitInd] = tempProd;
                carryValue = 0;
            }
            else
            {
                digits[digitInd] = tempProd%10;
                carryValue = tempProd/10;
            }
            
        }
        
        /*std::cout << "--------------------------" << std::endl;
        std::cout << "Loop: " << mulCount << std::endl;
        func_displayVector( digits);*/
        
    }
    
    // Display Results
    //func_displayVector(digits);
    
    // Compute sum of all digits
    long long int sum = 0;
    
    for (int digitInd = 0; digitInd < numOfDigits; ++digitInd)
    {
        sum = sum + digits[digitInd];
    }
    
    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}
