#ifndef GOLMAINWINDOW_H
#define GOLMAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>

class GOLMainWIndow : public QMainWindow
{

    Q_OBJECT

public:
    GOLMainWIndow();

//private slots:
//    void cellClicked();

private:
    QWidget* m_centralWidget;
    QGridLayout* m_gridLayout;
    QVBoxLayout* m_mainLayout;
    QHBoxLayout* m_footerLayout;

    QPushButton* m_nextButton;

};

#endif // GOLMAINWINDOW_H
