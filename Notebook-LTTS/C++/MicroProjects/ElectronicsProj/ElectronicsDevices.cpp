#include <string>
#include "Electronics.h"
#include "ElectronicsDevices.h"

ElectronicsDevices::ElectronicsDevices():Electronics(),type(""),
    variants(""){}

ElectronicsDevices::ElectronicsDevices(int Device_ID, std::string Device_Name,std::string MFG_Date,std::string EXP_Date,double Product_Price,std::string type,std::string variants):
    Electronics(Device_ID,Device_Name,MFG_Date,EXP_Date,Product_Price),type(type),variants(variants)
{

}

int ElectronicsDevices::getID()
{
    return Device_ID;
}

std::string ElectronicsDevices::getType()
{
    return type;
}

std::string ElectronicsDevices::getName()
{
    return Device_Name;
}

double ElectronicsDevices::getPrice()
{
    return Product_Price;
}
