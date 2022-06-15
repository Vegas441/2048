/**
 * @file grid.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef GRID_H
#define GRID_H

#define GRID_SIZE 4 
#define CHANCE_OF_4 10

/**
 * @brief 
 * 
 */
enum game_status_t {
    START,
    IN_PROGRESS,
    WON,
    LOST
};

/**
 * @brief 
 * 
 */
class grid_t {

    public:

    unsigned int SCORE;
    game_status_t STATUS;

    unsigned int gridValues[GRID_SIZE][GRID_SIZE];     

    /**
     * @brief Construct a new grid t object
     * 
     */
    grid_t();

    /**
     * @brief Generates new number on grid after swipe 
     * 
     */
    void newNumber();

    /**
     * @brief Checks if another swipe is possible or if 2048 has been reached
     * 
     */
    void checkGrid();

    void swipeLeft();

    void swipeRight();

    void swipeUp();

    void swipeDown();

};

#endif