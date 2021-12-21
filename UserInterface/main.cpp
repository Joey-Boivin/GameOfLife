#include <QApplication>
#include "GOLMainWindow.h"

int main (int argc, char **argv){
    QApplication app(argc, argv);
    GOLMainWIndow* myMainWindow = new GOLMainWIndow();
    myMainWindow->show();
    return app.exec();
}
