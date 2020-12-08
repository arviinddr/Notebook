#include<iostream>
#include<list>
#include"contact.h"
#include"address.h"
#include<algorithm>
   void Address::addContact(std::string name1,std::string name2,std::string prnum,std::string alnum)
   {
       contacts.push_back(contact(name1,name2,prnum,alnum));
   }
   void  Address::displayAll()
   {

auto var =std::for_each(contacts.begin(),contacts.end(),[=] (contact& r1)
{ return  r1.display();}
);

/*

       std::list<contact>::iterator iter;
   for(iter=contacts.begin();iter!=contacts.end();++iter)
       iter->display();
   }*/
   }
   void  Address::removeContactBypnum(std::string pnum) //by id
   {


auto pos=std::find_if(contacts.begin(),contacts.end(),[=] (contact& r1)
{ return  (r1.getprimaryno() == pnum) ;}
);
    //cout<<pos->getId();
    if(&(*pos)!=NULL)
    contacts.erase(pos);
    


/*
       std::list<contact>::iterator iter;
       for(iter=contacts.begin();iter!=contacts.end();++iter)
        {
            if(iter->getprimaryno()==pnum)
                break;
        }
      if(iter!=contacts.end())
        contacts.erase(iter);*/
   }
   contact*  Address::findContactBypnum(std::string pnum)
   {
auto var =std::find_if(contacts.begin(),contacts.end(),[=] (contact& r1)
{ return ((r1.getprimaryno()==pnum));}
);
if(&(*var)!= NULL)
  return &(*var);
else 
return NULL;
/*
       std::list<contact>::iterator iter;
  for(iter=contacts.begin();iter!=contacts.end();++iter)
   {
    if(iter->getprimaryno()==pnum)
        return &(*iter);
   }
  return NULL;  //nullptr*/
   }
   contact*  Address::findContactWithMatchname(std::string name1,std::string name2)//by firstname & lastname
   {
auto var =std::find_if(contacts.begin(),contacts.end(),[=] (contact& r1)
{ return ((r1.getfirstname()==name1)|| (r1.getlastname()==name2));}
);
if(&(*var)!= NULL)
  return &(*var);
else 
return NULL;

/*
std::list<contact>::iterator iter;
   for(iter=contacts.begin();iter!=contacts.end();++iter)
       {
       if(((iter->getfirstname()).compare(name1)) || ((iter->getlastname()).compare(name2) ) )
         return &(*iter);
       }
return NULL;*/
   }
   void  Address::updateContactdetails(std::string name1,std::string name2,std::string prno)
   {
       std::list<contact>::iterator iter;
       for(iter=contacts.begin();iter!=contacts.end();++iter)
        {
            if(iter->getprimaryno()==prno)
            {
               iter->setfirstname(name1);
                iter->setlastname(name2) ;
            }
        }
   } 
   //int   Address::countAll(){return contacts.size();}
