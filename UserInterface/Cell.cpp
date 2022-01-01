#include "Cell.h"

Cell::Cell(bool isAlive): m_isAlive(isAlive) { } ;

bool Cell::isAlive() const{
    return m_isAlive;
}

void Cell::setIsAlive(bool p_newState){
    m_isAlive = p_newState;
}

void Cell::cellClicked(){
    m_isAlive = !m_isAlive;

    if (m_isAlive){

    setStyleSheet("background-color:black");

    }else{

        setStyleSheet("background-color:white");

    }
}

