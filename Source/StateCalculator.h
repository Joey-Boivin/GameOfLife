#ifndef SOURCE_H
#define SOURCE_H
/**
 * \file   StateCalculator.h
 * \brief  File that contains prototypes of functions that will be used to calculate the next state
 * \author Joey Boivin
 */

#include "array"

const int MAX_SIZE = 15;
namespace GOL {
void calculateNextState(std::array<std::array<bool, MAX_SIZE+1>, MAX_SIZE+1> &p_currentStateBoard);
int neighbourTotal(std::array<std::array<bool, MAX_SIZE+1>, MAX_SIZE+1> &p_currentStateBoard, int posX, int posY);
}

#endif // SOURCE_H
