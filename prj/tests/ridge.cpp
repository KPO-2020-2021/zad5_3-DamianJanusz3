//doctests for Ridge class//

#include "../tests/doctest/doctest.h"
#include "ridge.hh"

TEST_CASE("metoda get type")
{
  double tab[3]={25,25,50};
  Vector3D mid(tab); 
  double x=100, y=100, z=100;
  std::string n="name1";
  Ridge r(mid,x,y,z,n);


  CHECK(r.gettype()=="Góra z granią");
}