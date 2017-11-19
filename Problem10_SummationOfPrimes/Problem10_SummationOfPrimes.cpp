// Project Euler: Problem 10
// Summation of primes
// Created by: Kajal Damji Gada | Created on: 19th Nov, 2017

#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>

std::vector<long long int> func_sum_of_primes(long long int maxNum)
{
    // Variables
    bool primeNum[maxNum+1];
    std::memset(primeNum, true, maxNum+1);
    
    std::vector <long long int> sumArr;
    long long int sum = 0;    
    
    sumArr.push_back(sum);
    sumArr.push_back(sum);
    
    // Loop through each number
    for (long long int outInd = 2; outInd <= maxNum; ++outInd)
    {
        // If prime, set all its multiple as 0
        if (primeNum[outInd] == 1)
        {
            sum = sum + outInd;
            for (long long int numInd = outInd*2; numInd <= maxNum; numInd = numInd + outInd)
            {
                primeNum[numInd] = 0;
            }
        }
        
        // Add sum to sum array
        sumArr.push_back(sum);
    }
    
    return sumArr;
    
}

int main()
{
    // Variables
    int numOfTestCase = 0;
    long long int num, maxNum = 0;
    
    // Input: number of test cases
    std::cin >> numOfTestCase;
    long long int numArr[numOfTestCase];
    
    // Input: number - for sum of primes
    for (int testCaseInd =0; testCaseInd < numOfTestCase; ++testCaseInd)
    {
        std::cin >> num;  
        maxNum = std::max(num,maxNum);
        numArr[testCaseInd] = num;
    }
    
    // Compute sum for all number upto max num
    std::vector <long long int> sumArr(maxNum+1);
    sumArr = func_sum_of_primes(maxNum);
    
    // Output: sum of primes for given input number
    for (int testCaseInd = 0; testCaseInd < numOfTestCase; ++testCaseInd)
    {
        num = numArr[testCaseInd];
        std::cout << sumArr[num] << std::endl;
    }
    
    return 0;
}
