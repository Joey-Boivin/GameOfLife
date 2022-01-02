/**
 * \file main.cpp
 * \author Joey Boivin
 * \brief Main application file
 * \date January 2 2022
 */


#include <QApplication>
#include "GOLMainWindow.h"

int main (int argc, char **argv){
    QApplication app(argc, argv);
    GOLMainWindow* myMainWindow = new GOLMainWindow();
    myMainWindow->show();
    return app.exec();
}
