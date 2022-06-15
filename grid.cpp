/**
 * @file grid.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdlib.h>
#include <iostream>
#include <random>
#include "grid.h"

grid_t::grid_t() {

    for(int i = 0; i < GRID_SIZE; i++) {
        for(int j = 0; j < GRID_SIZE; j++) {
            gridValues[i][j] = 0;
        }
    }

    SCORE = 0;
    STATUS = START;

    grid.newNumber();
}

void grid_t::newNumber() {

    int i,j;

    do {
        i = rand() % (GRID_SIZE-1);
        j = rand() % (GRID_SIZE-1);
        std::cout << i << " " << j << std::endl;
    } while (gridValues[i][j] != 0);


    int newNumber = rand()*100 <= CHANCE_OF_4 ? 4 : 2;

    gridValues[i][j] = newNumber;
}

void grid_t::checkGrid() {

    // Check for win
    for(int i = 0; i < GRID_SIZE; i++) {
        for(int j = 0; j < GRID_SIZE; j++) {
            if(gridValues[i][j] == 2048) {
                STATUS = WON;
                return;
            }
        }
    }
    
    // Check for empty spaces
    bool possible = false;
    for(int i = 0; i < GRID_SIZE; i++) {
        for(int j = 0; j < GRID_SIZE; j++) {
            if(gridValues[i][j] == 0) {
                possible = true;
                return;
            }
        }
    }

    // If no empty spaces are left, we check if another move can be made 
    for(int i = 0; i < GRID_SIZE; i++) {
        for(int j = 0; j < GRID_SIZE; j++) {

            if(j + 1 < GRID_SIZE) {
                if(gridValues[i][j] == gridValues[i][j+1]) {
                    possible = true;
                    return;
                }
            }

            if(i + 1 < GRID_SIZE) {
                if(gridValues[i][j] == gridValues[i+1][j]) {
                    possible = true;
                    return;
                }
            }
        }
    }


    if(!possible) STATUS = LOST;


}

void grid_t::swipeLeft() {

}

void grid_t::swipeRight() {
    
}

void grid_t::swipeUp() {
    
}

void grid_t::swipeDown() {
    
}