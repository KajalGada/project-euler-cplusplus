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
    
    int numOfTestCase;
    long long int numToTest;
    
    std::cin >> numOfTestCase;
    
    for (int eachTestCase = 0; eachTestCase < numOfTestCase; eachTestCase++)
    {
        std::cin >> numToTest;
        
        long long int num1 = 1, num2 = 1;
        long long int sumNum = 0, sumEvenNum = 0;
        
        do
        {            
            
            if (sumNum%2 == 0)
            {
                //std::cout << sumNum << std::endl;
                sumEvenNum = sumEvenNum + sumNum;
            }
            
            num1 = num2;
            num2 = sumNum;
            sumNum = num1 + num2;
            
        } while(sumNum < numToTest);
        
        std::cout << sumEvenNum << std::endl;                        
        
    }

        
    return 0;
}
