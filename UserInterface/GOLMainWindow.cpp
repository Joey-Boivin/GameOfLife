#include <array>
#include "GOLMainWindow.h"
#include "Cell.h"
#include "../Source/StateCalculator.h"


GOLMainWindow::GOLMainWindow()
{
    setWindowTitle("Conway's Game Of Life. A solution by Joey Boivin.");

    m_centralWidget = new QWidget;
    m_mainLayout = new QVBoxLayout;
    m_gridLayout = new QGridLayout;
    m_footerLayout = new QHBoxLayout;

    m_nextButton = new QPushButton("Next");
    QObject::connect(m_nextButton, SIGNAL(clicked()), this, SLOT(nextButtonClicked()));

    const QSize btnSize = QSize(30,30);


    for (int i(0); i < BOARD_SIZE; i++){
        for (int j(0); j< BOARD_SIZE; j++){
            Cell* cell = new Cell();
            cell->setFixedSize(btnSize);
            m_gridLayout->addWidget(cell, i, j);
            QObject::connect(cell, SIGNAL(clicked()), cell, SLOT(cellClicked()));
        }
    }

    m_gridLayout->setSpacing(0);
    setCentralWidget(m_centralWidget);
    m_mainLayout->addLayout(m_gridLayout);
    m_footerLayout->addWidget(m_nextButton);
    m_footerLayout->setAlignment(Qt::AlignRight);
    m_mainLayout->addLayout(m_footerLayout);
    m_centralWidget->setLayout(m_mainLayout);

}

void GOLMainWindow::nextButtonClicked(){

        std::array<std::array<bool, BOARD_SIZE+2>, BOARD_SIZE+2> currentStateBoard = {};

        for (int i=0; i < m_gridLayout->count(); i++){
            for (int j=0; j < m_gridLayout->count(); j++){
            QLayoutItem * item = m_gridLayout->itemAtPosition(i,j);
            if(dynamic_cast<QWidgetItem *>(item)){
                QWidget* wCell = item->widget();
                Cell* cell = dynamic_cast<Cell*>(wCell);
                 if (cell->isAlive()){
                    currentStateBoard[i+1][j+1] = true;
                 }

            }
        }
   }
    GOL::calculateNextState(currentStateBoard);
    for (int i=0; i < m_gridLayout->count(); i++){
        for (int j=0; j < m_gridLayout->count(); j++){
        QLayoutItem * item = m_gridLayout->itemAtPosition(i,j);
        if(dynamic_cast<QWidgetItem *>(item)){
            QWidget* wCell = item->widget();
            Cell* cell = dynamic_cast<Cell*>(wCell);
             if (currentStateBoard[i+1][j+1]){

                 cell->setIsAlive(true);
             }else{
                 cell->setIsAlive(false);
             }

        }
    }
}
}
