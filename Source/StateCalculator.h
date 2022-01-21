/**
 * \file   StateCalculator.h
 * \brief  File that contains prototypes of functions that will be used to calculate the next state
 * \author Joey Boivin
 * \date January 2 2022
 */

#ifndef STATECALCULATOR_H
#define STATECALCULATOR_H

#include <array>

const int BOARD_SIZE = 20;

namespace GOL {

void calculateNextState(std::array<std::array<bool, BOARD_SIZE+2>, BOARD_SIZE+2> &p_currentBoard);
int neighbourTotal(std::array<std::array<bool, BOARD_SIZE+2>, BOARD_SIZE+2> &p_currentBoard, int p_posX, int p_posY);

}

#endif // STATECALCULATOR_H
