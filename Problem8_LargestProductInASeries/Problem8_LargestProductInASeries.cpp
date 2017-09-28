// Project Euler - Problem 8: Largest Product In A Series
// Find the thirteen adjacent digits in the 1000-digit number that have the greatest product.
// More information - https://projecteuler.net/problem=6
// Input: Number of Test Cases, Number of Digits, Number of consecutive digits for product, Number
// Eg: 1 \n 5 2 12543
// >> 20
// Created By: Kajal Damji Gada
// Date Created: 27th September, 2017

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

int main()
{
    // VARIABLES
    int numOfTestCase, numOfDigits, numOfConsecutiveDigits, currentDigit;
    long long int maxProduct, currentProduct;
    bool debugFlag = 0;
    
    // Take number of test case as input
    std::cin >> numOfTestCase;
    
    // Loop through each test case
    for (int testCaseInd = 0; testCaseInd < numOfTestCase; testCaseInd++)
    {
        
        // Load number of digits in input and number of consecutive digit for product
        std::cin >> numOfDigits >> numOfConsecutiveDigits;        
        
        // For enter/ new line character
        currentDigit = getchar();
        
        // Parameters
        std::vector<int> vectorOfConsecutiveDigits(numOfConsecutiveDigits,0);        
        maxProduct = 0;
        
        // Loop through each digit
        for (int digitInd = 0; digitInd < numOfDigits; digitInd++)
        {
            // Load each digit
            currentDigit = getchar();
            // Convert to number
            currentDigit = currentDigit - 48;                        
            
            if (debugFlag == 1)
            {
                std::cout << currentDigit << std::endl;            
            }            
                        
            // Compute current product
            currentProduct = 1; 
            for (int consecutiveDigitInd = 0; consecutiveDigitInd < numOfConsecutiveDigits-1; consecutiveDigitInd++)
            {
                vectorOfConsecutiveDigits[consecutiveDigitInd] = vectorOfConsecutiveDigits[consecutiveDigitInd+1];
                currentProduct = currentProduct * vectorOfConsecutiveDigits[consecutiveDigitInd];
            }
            
            vectorOfConsecutiveDigits[numOfConsecutiveDigits-1] = currentDigit;
            currentProduct = currentProduct * vectorOfConsecutiveDigits[numOfConsecutiveDigits-1];
            
            maxProduct = std::max(maxProduct,currentProduct);
            
            if (debugFlag == 1)
            {
                std::cout << maxProduct << std::endl;
            }
            
        }                
        
        std::cout << maxProduct << std::endl;
        
    }    
}
