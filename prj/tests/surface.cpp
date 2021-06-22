//doctests for Surface class//

#include "../tests/doctest/doctest.h"
#include "surface.hh"


TEST_CASE("metoda setname i getname")
{
    double arg[]={1,2,3};
  Vector3D v(arg);
  std::string r="name2";
  Surface c(v,10);
  c.setname(r);

  CHECK(c.getname()=="name2" );
}