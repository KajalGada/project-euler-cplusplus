// Project Euler #9: Special Pythagorean triplet
// Kajal Damji Gada | Created: 24th October, 2017

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    

// Variables
int numOfTestCase;
long long int maxSumNum, maxProductNum, triProduct;
long long int triOne, triTwo, triThree;     //Pythagorean Triplets

// Input: Number of test cases
std::cin >> numOfTestCase;

// Loop through each test case
for (int eachTestCase = 0; eachTestCase < numOfTestCase; eachTestCase++)
{
    // Input: Number which would be the maximum sum of pythagorean triplets
    std::cin >> maxSumNum;
    
    // Parameters
    bool outerLoop = true, innerLoop = true;
    maxProductNum = -1;
    
    for (long long int triOne = 1; triOne < (maxSumNum - 1); triOne++)
    {
        triTwo = ( (maxSumNum*maxSumNum) - (2*maxSumNum*triOne) ) / ( 2*(maxSumNum - triOne) );
        triThree = maxSumNum - triOne - triTwo;
        
        //std::cout << triOne << ' ' << triTwo << ' ' << triThree << std::endl;
        
        if ( (triOne > 0) && (triTwo > 0) && (triThree > 0) )
        {
            if ( (triThree*triThree) == ( (triOne*triOne) + (triTwo*triTwo) ) )
            {
                triProduct = triOne * triTwo * triThree;
                maxProductNum = std::max(maxProductNum,triProduct);
            }
        }
        
    }
    
    /*while (outerLoop == true)
    {
        // Start with smallest numbers
        triOne = triOne + 1;
        triTwo = 1;
        
        innerLoop = true;
        
        // Check all combinations of second triplet till value of first triplet
        while (innerLoop == true)
        {
            // Find third number in triplet
            triThree = std::sqrt( (triOne*triOne) + (triTwo*triTwo) );
            
            // Check if it is equal to sum of number given
            if (triOne + triTwo + triThree == maxSumNum)
            {
                // Find max product
                triProduct = triOne * triTwo * triThree;
                maxProductNum = std::max(maxProductNum,triProduct);
            }
            
            // Increment by one
            if (triTwo == triOne)
            {
                innerLoop = false;
            } else
            {
                triTwo = triTwo + 1;
            }
        }
        
        if (triOne == (maxSumNum - 2) )
        {
            outerLoop = false;
        }
                
    }*/
    
    std::cout << maxProductNum << std::endl;
            
}

}
