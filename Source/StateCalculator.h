#ifndef SOURCE_H
#define SOURCE_H
/**
 * \file   StateCalculator.h
 * \brief  File that contains prototypes of functions that will be used to calculate the next state
 * \author Joey Boivin
 */

#include "vector"

namespace GOL {
void calculateNextState(std::vector<std::vector<bool>> &p_currentStateBoard);
}

#endif // SOURCE_H
