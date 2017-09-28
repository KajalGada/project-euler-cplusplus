// Project Euler - Problem 6: Sum Square Difference
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
// More information - https://projecteuler.net/problem=6
// Input: Number of Test Cases, Natural number
// Eg: 1 \n 100
// Created By: Kajal Damji Gada
// Date Created: 25th September, 2017

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
    long long int numOfTestCase, testNum, sumOfSquares, squareOfSum, sumSquareDiff;
    
    // Take number of test cases as input
    std::cin >> numOfTestCase;
    
    // Loop through each test case
    for (int testCaseInd = 0; testCaseInd < numOfTestCase; testCaseInd++)
    {
        // Take number to test as input
        std::cin >> testNum;
        
        // Compute sum of squares
        sumOfSquares = (testNum * (testNum+1) * ((2*testNum) + 1))/6;
        
        // Compute square of sum
        squareOfSum = ((testNum * (testNum+1))/2) * ((testNum * (testNum+1))/2);
        
        // Compute difference
        sumSquareDiff = squareOfSum - sumOfSquares;
        
        // Display difference between sum squares as output
        std::cout << sumSquareDiff << std::endl;
    }
    
    return 0;
    
}
