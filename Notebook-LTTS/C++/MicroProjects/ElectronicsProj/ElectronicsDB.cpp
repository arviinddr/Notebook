#include "ElectronicsDevices.h"
#include "Electronics.h"
#include "ElectronicsDB.h"
#include <string>
#include <list>
#include <iterator>
#include <thread>
#include <semaphore.h>
#include <iostream>

void ElectronicsDB::addDevice(int Device_ID, std::string Device_Name,std::string MFG_Date,std::string EXP_Date, double Product_Price, std::string type,std::string variants)
{
    st.push_back(ElectronicsDevices(Device_ID,Device_Name,MFG_Date,EXP_Date,Product_Price,type,variants));
}

void ElectronicsDB::removedevice(std::string Device_Name)
{
    std::list<ElectronicsDevices> :: iterator iter;
    for(iter=st.begin();iter!=st.end();iter++)
    {
        if(iter->getName()== Device_Name)
        {
           st.erase(iter);
           break;
        }
    }
}

int ElectronicsDB::getAll()
{
          return st.size();
}
