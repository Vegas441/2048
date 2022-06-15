/**
 * @file main.cpp
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
#include <time.h>

#include "grid.h"
#include "renderGrid.h"

int main(int argc, char *argv[]) {

    srand(time(NULL));

    grid_t grid;

    renderGrid(grid);
}
