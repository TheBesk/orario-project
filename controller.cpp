#include "controller.h"

controller::controller()
{

}

controller::~controller()
{
    if(model)
        delete model;
}
