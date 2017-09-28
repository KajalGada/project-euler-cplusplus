// Project Euler - Problem 7: 10001st prime
// What is the 10001st prime number?
// More information - https://projecteuler.net/problem=7
// Input: Number of Test Cases, Natural number (n)
// Output: nth Prime number
// Example: 1 \n 10001
// >> 104743
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
#include <time.h>

int main()
{    
    
    // VARIABLES
    long long int numOfTestCase, nthPrimeNum, nthPrimeNumLimit, primeNumTest;    
    bool primeNumFlag, dispTimeFlag = 0;        
    
    // Variables to store prime number
    std::set<int> primeNumSet;
    std::set<int>::iterator it;
        
    // Add first prime number 2.
    primeNumSet.insert(2);
    it=primeNumSet.begin();
        
    // Test number to be prime or not        
    nthPrimeNum = 1;
    primeNumTest = 3;
    
    // Take number of test cases as input
    std::cin >> numOfTestCase;    
    
    // Loop through each test case
    for (int testCaseInd = 0; testCaseInd < numOfTestCase; testCaseInd++)
    {
        // Take the nth number of prime number to be found as input
        std::cin >> nthPrimeNumLimit;                
        
        // Keep iterating to next prime number until nth prime number
        while (nthPrimeNum < nthPrimeNumLimit)
        {
            
            // Assume it is prime number
            primeNumFlag = 1;            
            it=primeNumSet.begin();
            
            // Loop through existing prime number list to find
            // factors (if any) for number being tested                    
            while (pow(*it,2) <= primeNumTest)
            {
                if (primeNumTest%*it == 0)
                {
                    primeNumFlag = 0;
                    break;
                }
                
                it++;
            }
            
            // If prime number, add to set
            if (primeNumFlag == 1)
            {
                //std::cout << "Prime num: " << primeNumTest << std::endl;
                primeNumSet.insert(primeNumTest);
                nthPrimeNum = nthPrimeNum + 1;
            }
            
            // Go to next odd number for testing prime number or not
            primeNumTest = primeNumTest + 2;            
            
        }
        
        // Display nth prime number
        //it = primeNumSet.end();
        //it--;
        it = primeNumSet.begin();
        std::advance(it, nthPrimeNumLimit-1);
        std::cout << *it << std::endl;         

    }
}
