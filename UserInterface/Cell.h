/**
 * \file   Cell.h
 * \brief  File that contains prototype of a Cell object. Derived from QPushButton
 * \author Joey Boivin
 * \date January 2 2022
 */

#ifndef CELL_H
#define CELL_H

#include <QPushButton>

class Cell : public QPushButton
{

    Q_OBJECT

public:

    Cell(bool isAlive = false);
    bool isAlive() const;
    void setIsAlive(bool p_newState);

private slots:

    void cellClicked();

private:

    bool m_isAlive;

};

#endif // CELL_H
