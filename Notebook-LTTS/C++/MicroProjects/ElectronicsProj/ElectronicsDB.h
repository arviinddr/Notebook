#include<string>
#include<cstdint>
#include "Electronics.h"
#include "ElectronicsDevices.h"
#pragma once
#include <list>
#include <iterator>
#pragma once

class ElectronicsDB :  public ElectronicsDevices {

public :

std::list <ElectronicsDevices> st;

public :

    void addDevice(int ,std::string,std::string,std::string,double,std::string,std::string);
    void removedevice(std::string);
    ElectronicsDevices* findDeviceById(int);
    int getAll();

};

