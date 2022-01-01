#include "GOLMainWindow.h"
#include "Cell.h"
#include "../Source/StateCalculator.h"

GOLMainWIndow::GOLMainWIndow()
{
    setWindowTitle("Conway's Game Of Life. A solution by Joey Boivin.");

    QWidget* m_centralWidget = new QWidget;
    QVBoxLayout* m_mainLayout = new QVBoxLayout;
    QGridLayout* m_gridLayout = new QGridLayout;
    QHBoxLayout* m_footerLayout = new QHBoxLayout;

    QPushButton* m_nextButton = new QPushButton("Next");

    const QSize btnSize = QSize(50,50);

    for (int i(0); i < 5; i++){
        for (int j(0); j< 5; j++){
            Cell* cell = new Cell();
            cell->setFixedSize(btnSize);
            m_gridLayout->addWidget(cell, i, j);
            //QObject::connect(cell, SIGNAL(clicked()), cell, SLOT(cellClicked()));
        }
    }

    m_gridLayout->setSpacing(0);
    setCentralWidget(m_centralWidget);
    m_mainLayout->addLayout(m_gridLayout);
    m_footerLayout->addWidget(m_nextButton);
    m_mainLayout->addLayout(m_footerLayout);
    m_centralWidget->setLayout(m_mainLayout);

}




