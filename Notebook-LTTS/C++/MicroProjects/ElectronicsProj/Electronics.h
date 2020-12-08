#include <string>
#pragma once


class Electronics
{
    public:
        int Device_ID;
        std::string Device_Name,MFG_Date,EXP_Date;
        double Product_Price;

    public:
        Electronics();
        Electronics(int Device_ID, std::string Device_Name,std::string MFG_Date,std::string EXP_Date, double Product_Price);
        virtual double getPrice()=0;


};


