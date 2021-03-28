#include "dcdc_component.h"

DCDC_Component::DCDC_Component()
{
    settings();
}

void DCDC_Component::settings()
{
    settingsWindow = new QWidget();
    settingsBox = new QGroupBox("Settings");
    informationBox = new QGroupBox("Informations");

}
