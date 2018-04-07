// Project Euler: Problem 15
// Author: Kajal Damji Gada
// Date Created: 5th April, 2018

#include<iostream>
#include<vector>

int main()
{
    
    // Variables
    int gridSize = 20;
    std::vector<std::vector<long long int>> gridRoute;
    
    // Initialize all values to zero except right and bottom edge. 
    // Initialize right and bottom edge to 1.
    for (int r = 0; r <= gridSize; ++r)
    {
        
        //std::cout << "r= " << r << std::endl;
        
        std::vector<long long int> gridRow;
        
        for (int c = 0; c <= gridSize; ++c)
        {
            if (c < gridSize && r < gridSize)
            {
                gridRow.push_back(0);
            }
            else
            {
                gridRow.push_back(1);
            }
        }
        
        gridRoute.push_back(gridRow);
    }
    
    // Compute route to corner
    for (int r = (gridSize-1); r >= 0; --r)
    {
        for (int c = (gridSize-1); c >= 0; --c)
        {
            gridRoute[r][c] = gridRoute[r][c+1] + gridRoute[r+1][c];
        }
    }
    
    std::cout << gridRoute[0][0] << std::endl;
    
    // Display Final grid route options
    /*for (int r = 0; r <= gridSize; ++r)
    {
        for (int c = 0; c <= gridSize; ++c)
        {
            if (c < gridSize)
            {
                std::cout << gridRoute[r][c] << " ";
            }
            else
            {
                std::cout << gridRoute[r][c] << std::endl;
            }
        }
    }*/
    
    
    return 0;
}
