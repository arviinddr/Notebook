
#include "Electronics.h"
#include <string>


Electronics::Electronics():Device_ID(0),Device_Name(""),MFG_Date(""),EXP_Date(""),Product_Price(0.0){}

Electronics::Electronics(int Device_ID, std::string Device_Name,std::string MFG_Date,std::string EXP_Date, double Product_Price) : Device_ID(Device_ID),Device_Name(Device_Name),MFG_Date(MFG_Date),EXP_Date(EXP_Date),Product_Price(Product_Price) {}

int main()
{
  return 0;
}
