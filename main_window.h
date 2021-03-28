#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

#include "dcdc_component.h"

class Main_Window : public QMainWindow
{
    Q_OBJECT
public:
    explicit Main_Window(QWidget *parent = nullptr);

private:
    DCDC_Component *newComponent;

signals:

};

#endif // MAIN_WINDOW_H
