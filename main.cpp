#include <QApplication>
#include <QtWidgets>
#include "main_window.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Main_Window fenetre;

    fenetre.showMaximized();
    fenetre.show();

    return app.exec();
}
