#include "Electronics.h"
#include "ElectronicsDevices.h"
#include "ElectronicsDB.h"
#include <gtest/gtest.h>

namespace {

class ElectronicsTest : public ::testing::Test
{
protected:
  void SetUp()
  {
    ptr = new ElectronicsDevices(1,"Transformer","09/2018","11/2020",20.00,"Single phase","VPL26");
  }
  void TearDown()
  {
    delete ptr;
  }
  Electronics *ptr;
};

TEST_F(ElectronicsTest, DefaultConstructor)
{
  ElectronicsDevices ft;
  EXPECT_EQ(0, ft.getID());
  EXPECT_EQ(0, ft.getType().length());
  EXPECT_EQ(0, ft.getPrice());
}

TEST_F(ElectronicsTest, ParameterizedConstructor)
{
  ElectronicsDevices *fptr = dynamic_cast<ElectronicsDevices*>(ptr);
  EXPECT_EQ( 1, fptr->getID());
  EXPECT_STREQ("Single phase", fptr->getType().c_str());
  EXPECT_STREQ("Transformer", fptr->getName().c_str());
  EXPECT_EQ(20.00, fptr->getPrice());
}

TEST_F(ElectronicsTest, AnotherTest)
{
  ElectronicsDevices ft(2,"Fuse","10/2020","09/2023",15.00,"Low resistance resistor","3NA78");
  Electronics *pt = &ft;
  EXPECT_EQ( 2, ft.getID());
  EXPECT_STREQ("Low resistance resistor", ft.getType().c_str());
  EXPECT_STREQ("Fuse", ft.getName().c_str());
  EXPECT_EQ(15.00, ft.getPrice());
}
}
