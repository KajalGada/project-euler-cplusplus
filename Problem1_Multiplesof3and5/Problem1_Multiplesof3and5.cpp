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

//using namespace std;


int main(){
    
    // Variables
    int numOfTestCase;
    long long int num, sumOfMultiple = 0;
    
    // Input: number of test cases
    std::cin >> numOfTestCase;
    
    // Load each test case
    for(int testCaseNum = 0; testCaseNum < numOfTestCase; testCaseNum++)
    {
        
        std::cin >> num;
        
        long long int multipleOfThree = (num-1)/3;
        long long int multipleOfFive = (num-1)/5;
        long long int multipleOfFifteen = (num-1)/15;
        
        sumOfMultiple = (3*multipleOfThree*(multipleOfThree+1))/2;
        sumOfMultiple = sumOfMultiple + ((5*multipleOfFive*(multipleOfFive+1))/2);
        sumOfMultiple = sumOfMultiple - ((15*multipleOfFifteen*(multipleOfFifteen+1))/2);
         
        std::cout << sumOfMultiple << std::endl;
            
    }
    return 0;
}
