#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "orario.h"
#include "view.h"
#include <QObject>

class controller
{
public:
    controller();
    ~controller();
private:
    orario *model;
    view *gui;
};

#endif // CONTROLLER_H
