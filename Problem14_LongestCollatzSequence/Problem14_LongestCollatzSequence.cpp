#include <iostream>
#include <vector>
#include<algorithm>

int main()
{
    
    // Variables
    long long int maxNum = 1000000, currentNum = 0, startingNum = 0;
    //int maxNum = 10;
    std::vector<long long int> seqSize;
    int currentSeqSize = 0, longestSeqSize = 1;
    
    // Sequence size for num = 0 and num = 1
    seqSize.push_back(0);
    seqSize.push_back(1);
    
    // Loop through each number between 2 and maxNumn
    for (long long int num = 2; num <= maxNum; ++num)
    {
        // reset sequence size to zero for each num 
        currentSeqSize = 0;
        currentNum = num;
        
        while(currentNum > 1 && currentNum > (num-1) )
        {
            ++currentSeqSize;
            
            // if even
            if (currentNum%2 == 0)
            {
                currentNum = currentNum/2;
            }
            // if odd
            else
            {
                currentNum = (3*currentNum) + 1;
            }
        }
        
        // Add computed sequence size in vector
        currentSeqSize = currentSeqSize + seqSize[currentNum];
        seqSize.push_back(currentSeqSize);
        
        // Check for longest sequence size and update it. 
        // Also update the starting number that creates longest sequence.
        if (currentSeqSize > longestSeqSize)
        {
            longestSeqSize = currentSeqSize;
            startingNum = num;
        }
        
    }
    
    std::cout << "Longest sequence size is " << longestSeqSize
              << " and the starting number is " << startingNum << std::endl;
    
    return 0;
}
