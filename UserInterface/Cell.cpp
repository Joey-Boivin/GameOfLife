#include "Cell.h"

Cell::Cell(bool isAlive): m_isAlive(isAlive) { };

bool Cell::isAlive(){
    return m_isAlive;
}

void Cell::setIsAlive(bool p_newState){
    m_isAlive = p_newState;
}
