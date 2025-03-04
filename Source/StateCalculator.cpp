/**
 * \file   StateCalculator.cpp
 * \brief  File that contains the implementations of functions that will be used to calculate the next state
 * \author Joey Boivin
 * \date January 2 2022
 */

#include "StateCalculator.h"

using namespace std;

namespace GOL {
    /**
     * \brief Function that calculates the next state of the board
     * \param[in] p_currentStateBoard, a 2d array of boolean values. These boolean values are true if the cells are alive
     */
    void calculateNextState(array<array<bool, BOARD_SIZE+2>, BOARD_SIZE+2> &p_currentBoard){

        array<array<bool, BOARD_SIZE+2>, BOARD_SIZE+2> nextBoard = {};



        for (int i(1); i < BOARD_SIZE+1; i++){
            for (int j(1); j< BOARD_SIZE+1; j++){
                int total = neighbourTotal(p_currentBoard, i, j);
                if(p_currentBoard[i][j]){
                    if (total == 2 || total == 3){
                        nextBoard[i][j] = true;
                    }
                }else{

                    if (total == 3){
                        nextBoard[i][j] = true;
                    }
                }
        }
}
        p_currentBoard = nextBoard;


    }

    /**
     * \brief Function that calculates the total value of a cell's neighbourhood
     * \param[in] p_currentStateBoard, a 2d array of boolean values
     * \param[in] posX, the X position
     * \param[in] posY, the Y position
     */
    int neighbourTotal(array<array<bool, BOARD_SIZE+2>, BOARD_SIZE+2> &p_currentBoard, int p_posX, int p_posY){

        int total {0};

        total += p_currentBoard[p_posX][p_posY+1];
        total += p_currentBoard[p_posX+1][p_posY];
        total += p_currentBoard[p_posX+1][p_posY+1];
        total += p_currentBoard[p_posX][p_posY-1];
        total += p_currentBoard[p_posX-1][p_posY];
        total += p_currentBoard[p_posX-1][p_posY-1];
        total += p_currentBoard[p_posX+1][p_posY-1];
        total += p_currentBoard[p_posX-1][p_posY+1];

        return total;

    }
}
