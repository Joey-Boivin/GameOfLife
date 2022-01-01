#include <QApplication>
#include "GOLMainWindow.h"

int main (int argc, char **argv){
    QApplication app(argc, argv);
    GOLMainWindow* myMainWindow = new GOLMainWindow();
    myMainWindow->show();
    return app.exec();
}
