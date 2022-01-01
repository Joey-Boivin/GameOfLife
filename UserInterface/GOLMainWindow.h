#ifndef GOLMAINWINDOW_H
#define GOLMAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include "Cell.h"

class GOLMainWindow : public QMainWindow
{

    Q_OBJECT

public:
    GOLMainWindow();


private slots:
    void nextButtonClicked();

private:
    QWidget* m_centralWidget;
    QGridLayout* m_gridLayout;
    QVBoxLayout* m_mainLayout;
    QHBoxLayout* m_footerLayout;

    QPushButton* m_nextButton;
};

#endif // GOLMAINWINDOW_H
