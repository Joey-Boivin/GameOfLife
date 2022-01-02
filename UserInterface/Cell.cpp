/**
 * \file   Cell.cpp
 * \brief  File that contains the implementation of the Cell class. Derived from QPushButton
 * \author Joey Boivin
 * \date January 2 2022
 */

#include "Cell.h"

/**
 * \brief Constructor for the Cell class
 */

Cell::Cell(bool isAlive): m_isAlive(isAlive) { } ;

/**
 * \brief Getter for the isAlive attribute
 * \return A boolean value that represents whether the cell is alive or not
 */

bool Cell::isAlive() const{
    return m_isAlive;
}

/**
 * \brief Setter for the isAlive attribute
 * \param[in] A boolean value changing that represents whether the cell is alive or not
 */

void Cell::setIsAlive(bool p_newState){
    if (p_newState){

    setStyleSheet("background-color:black");

    }else{

        setStyleSheet("background-color:white");

    }
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

