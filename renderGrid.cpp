/**
 * @file renderGrid.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include "renderGrid.h"
#include "grid.h"

using std::cout, std::endl;

void renderGrid(grid_t grid) {

    for(int i = 0; i < GRID_SIZE; i++) {
        cout << "    | ";
        for(int j = 0; j < GRID_SIZE; j++) {
            cout << grid.gridValues[i][j] << " | ";
        }
        cout << "\n";
    }
    cout << "----------------------------" << endl;
    cout << "SCORE: " << grid.SCORE << endl;

}

