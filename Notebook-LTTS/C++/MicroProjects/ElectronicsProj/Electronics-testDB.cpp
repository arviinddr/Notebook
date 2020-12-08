#include "Electronics.h"
#include "ElectronicsDevices.h"
#include "ElectronicsDB.h"
#include <gtest/gtest.h>
#include<iostream>
#include<pthread.h>
#include<semaphore.h>
#include<list>
#include<iterator>
#include<cstdint>

pthread_mutex_t m1=PTHREAD_MUTEX_INITIALIZER;
sem_t s1;
ElectronicsDB electronics;

void* efun1(void* pv)
{
        pthread_mutex_lock(&m1);
        electronics.addDevice(1,"Transformer","09/2018","11/2020",150,"Single phase","VPL26");
        electronics.addDevice(2,"Fuse","10/2020","09/2023",75,"Low resistance resistor","3NA78");
        electronics.addDevice(3,"Relay","09/2018","11/2020",250,"Machine Tool Relay","ALQ109");
        electronics.addDevice(4,"Switches","09/2018","11/2020",125,"SPST","4PIN");
        electronics.addDevice(5,"Motors","09/2018","11/2020",299,"AC servo motor,","2400RPM");
        electronics.addDevice(6,"Microcontroller","09/2018","11/2020",450,"PIC","AT89S52");
        pthread_mutex_unlock(&m1);
        sem_post(&s1);
}

void* efun2(void* pv)
{
        sem_wait(&s1);
        pthread_mutex_lock(&m1);
        std::cout<<"\n";
        std::cout<<"The Owner added :"<<electronics.getAll()<<" Devices\n";
        std::cout<<"\n";
        pthread_mutex_unlock(&m1);
}

namespace
{
class ElectronicsDevicesTest : public ::testing::Test
{
protected:
  void SetUp()
  {

  }
  void TearDown() {}
};

TEST_F(ElectronicsDevicesTest, AddDeviceTest)
{
    pthread_t pt1,pt2;
    sem_init(&s1,0,0);
    pthread_create(&pt1,NULL,efun1,NULL);
    pthread_create(&pt2,NULL,efun2,NULL);
    pthread_join(pt1,NULL);
    pthread_join(pt2,NULL);
    electronics.addDevice(7,"Circuit Breakers","09/2018","11/2020",116,"Electrical switch","TR11CX");
    EXPECT_EQ(7, electronics.getAll());
    sem_destroy(&s1);
    pthread_mutex_destroy(&m1);
}

TEST_F(ElectronicsDevicesTest, RemoveDeviceTest)
{
  electronics.removedevice("Microcontroller");
  EXPECT_EQ(6, electronics.getAll());
}

TEST_F(ElectronicsDevicesTest, CountTest)
{
  EXPECT_EQ(6, electronics.getAll());
}

TEST_F(ElectronicsDevicesTest, AnotherTest)
{
  electronics.addDevice(8,"Transistors","09/2018","11/2020",270,"NPN and PNP","BC639");
  electronics.addDevice(9,"Integrated Circuits","09/2018","11/2020",319,"SMD","TLC5925");
  EXPECT_EQ(8, electronics.getAll());
}
}
