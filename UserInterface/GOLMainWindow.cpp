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

    const QSize btnSize = QSize(50,50);


    for (int i(0); i < 5; i++){
        for (int j(0); j< 5; j++){
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
    m_mainLayout->addLayout(m_footerLayout);
    m_centralWidget->setLayout(m_mainLayout);

}

void GOLMainWindow::nextButtonClicked(){

        for (int index=0; index < m_gridLayout->count(); index++){
            QLayoutItem * item = m_gridLayout->itemAt(index);
            if(dynamic_cast<QWidgetItem *>(item)){
                QWidget* wCell = item->widget();
                Cell* cell = dynamic_cast<Cell*>(wCell);
            }
        }
}

