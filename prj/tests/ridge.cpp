//doctests for Ridge class//

#include "../tests/doctest/doctest.h"
#include "peak.hh"
#include "../inc/lacze_do_gnuplota.hh"

TEST_CASE("metoda get type")
{
  double tab[3]={25,25,50};
  Vector3D mid(tab); 

  PzG::LaczeDoGNUPlota Lacze1;
  
  double tab2[3]={100,100,100};
  Vector3D dim(tab2);
  int nr=4;
  Peak r(Lacze1,nr, mid,dim); 
  


  CHECK(r.gettype()=="Góra ze szczytem"); 
}


TEST_CASE("metoda get mid")
{
  double tab[3]={25,25,50};
  Vector3D mid(tab); 

  PzG::LaczeDoGNUPlota Lacze1;
  
  double tab2[3]={100,100,100};
  Vector3D dim(tab2);
  int nr=4;
  Peak r(Lacze1,nr, mid,dim); 
  


  CHECK(r.getmid()==mid); 
}


TEST_CASE("metoda get name")
{
  double tab[3]={25,25,50};
  Vector3D mid(tab); 

  PzG::LaczeDoGNUPlota Lacze1;
  
  double tab2[3]={100,100,100};
  Vector3D dim(tab2);
  int nr=4;
  Peak r(Lacze1,nr, mid,dim); 
  


  CHECK(r.getname()=="../datasets/pmountain4.dat"); 
}

TEST_CASE("metoda get oradius")
{
  double tab[3]={25,25,50};
  Vector3D mid(tab); 

  PzG::LaczeDoGNUPlota Lacze1;
  
  double tab2[3]={100,100,100};
  Vector3D dim(tab2);
  int nr=4;
  Peak r(Lacze1,nr, mid,dim); 
  


  CHECK(r.getoradius()==60); 
}



TEST_CASE("metoda istherecolision")
{
  double tab[3]={25,25,50};
  Vector3D mid(tab); 

  PzG::LaczeDoGNUPlota Lacze1;
  
  double tab2[3]={100,100,100};
  Vector3D dim(tab2);
  int nr=4;
  Peak r(Lacze1,nr, mid,dim); 

  double tab3[3]={45,45,50};
  Vector3D mid3(tab3); 
  double orad=50;


  CHECK(r.istherecolision(orad, mid3)==true); 
}


