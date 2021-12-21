#include <QApplication>
#include <QPushButton>

int main (int argc, char **argv){
    QApplication app(argc, argv);
    QPushButton* myButton = new QPushButton;
    myButton->show();
    return app.exec();
}
