/**
 * \file   StateCalculator.cpp
 * \brief  File that contains the implementations of functions that will be used to calculate the next state
 * \author Joey Boivin
 */

#include "StateCalculator.h"

using namespace std;

namespace GOL {
    /**
     * \brief Function that calculates the next state of the board
     * \param[in] p_currentStateBoard, a 2d array of boolean values. These boolean values are true if the cells are alive
     */
    void calculateNextState(array<array<bool, SIZE+2>, SIZE+2> &p_currentStateBoard){

        array<array<bool, SIZE+2>, SIZE+2> nextStateBoard = {};

        for (int i(1); i < SIZE-1; i++) {
            for (int j(1); j< SIZE-1; j++){
                 int total = neighbourTotal(p_currentStateBoard, i, j);
                 if(p_currentStateBoard[i][j]){
                     if (total == 2 || total == 3){
                         nextStateBoard[i][j] = true;
                     }else{
                         if(total==3){
                             nextStateBoard[i][j] = true;
                         }
                     }
                 }

            }
        }
        p_currentStateBoard = nextStateBoard;


    }

    /**
     * \brief Function that calculates the total value of a cell's neighbourhood
     * \param[in] p_currentStateBoard, a 2d array of boolean values
     * \param[in] posX, the X position
     * \param[in] posY, the Y position
     */
    int neighbourTotal(array<array<bool, SIZE+1>, SIZE+1> &p_currentStateBoard, int p_posX, int p_posY){

        int total {0};

        total += p_currentStateBoard[p_posX][p_posY+1];
        total += p_currentStateBoard[p_posX+1][p_posY];
        total += p_currentStateBoard[p_posX+1][p_posY+1];
        total += p_currentStateBoard[p_posX][p_posY-1];
        total += p_currentStateBoard[p_posX-1][p_posY];
        total += p_currentStateBoard[p_posX-1][p_posY-1];
        total += p_currentStateBoard[p_posX+1][p_posY-1];
        total += p_currentStateBoard[p_posX-1][p_posY+1];

        return total;

    }
}
