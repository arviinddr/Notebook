#include <string>
#include "Electronics.h"
#pragma once

class ElectronicsDevices : public Electronics {

private :
    std::string type,variants;

public :

    ElectronicsDevices();
    ElectronicsDevices(int,std::string,std::string, std::string,double, std::string, std::string);
    int getID();
    std::string getType();
    std::string getName();
    double getPrice();
};
