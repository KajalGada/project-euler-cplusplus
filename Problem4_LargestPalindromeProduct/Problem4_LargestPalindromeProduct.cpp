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

using namespace std;

int main()
{
    
    std::set<long long int> setOfPalindromeNumber;
    
    int numOfTestCase;
    long long int limitPalindromeNumber;
    long long int numProduct;
    long long int maxPalindromeNumber = 0;
    std::string numProductString, numProductStringReverse;    
    bool palindromeFlag = 0;
    
    for (int Num1 = 999; Num1 > 99; Num1--)
    {
        for (int Num2 = 999; Num2 > 99; Num2--)
        {
            numProduct = Num1 * Num2; 
            numProductString = to_string(numProduct);                                
            numProductStringReverse = numProductString;
            std::reverse(std::begin(numProductStringReverse),std::end(numProductStringReverse));        
            
            if (numProductString == numProductStringReverse)
            {
                setOfPalindromeNumber.insert(numProduct);
            }
        }
    }
    
    
    std::cin >> numOfTestCase;
    
    for (int indTestCase = 0; indTestCase < numOfTestCase; indTestCase++)
    {
        
        std::cin >> limitPalindromeNumber;                        
        maxPalindromeNumber = *(--setOfPalindromeNumber.lower_bound(limitPalindromeNumber));
        std::cout << maxPalindromeNumber << std::endl;
    }
            
    return 0;
}

