#ifndef DCDC_COMPONENT_H
#define DCDC_COMPONENT_H

#include <QObject>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include <QWindow>

class DCDC_Component : public QObject
{
    Q_OBJECT

private:
    //---Variables---//
    QString name;
    QString refComponent;
    QString cie;
    QString type = "DCDC";
    QString signalControl;

    int current_Max;
    float voltageIN;
    float voltageOUT;
    float currentIN;
    float currentOUT;
    float powerIN;
    float powerOUT;
    float efficiency;
    float powerDissipation;

    QWidget parent(QObject);
    QList<QObject> children;

    //---Functions---//
    void display();
    void settings();

    //---Graphics Variables---//
    QWidget     *settingsWindow;
    QGroupBox   *settingsBox;
    QGroupBox   *informationBox;


public:
    DCDC_Component();
};

#endif // DCDC_COMPONENT_H
