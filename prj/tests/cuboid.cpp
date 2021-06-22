//doctests for Cuboid class//

#include "../tests/doctest/doctest.h"
#include "cuboid.hh"

TEST_CASE("metody setname i getname")
{
  double tab[3]={25,25,25};
  Vector3D mid(tab); 
  Cuboid f(mid,60,60,60,"../datasets/cuboid.dat"); 
  std::string n="name1";
  f.setname(n);


  CHECK(f.getname()=="name1");
}

TEST_CASE("metody setmid i getmid")
{
  double tab[3]={25,25,25}; double tab1[3]={5,5,5};
  Vector3D mid(tab); Vector3D d(tab1); Vector3D i(tab1);
  Cuboid f(mid,60,60,60,"../datasets/cuboid.dat");
  
  f.setmid(d);

  CHECK(f.getmid()==i);
}


TEST_CASE("metoda move")
{
  double tab[3]={25,25,25}; double tab1[3]={10,10,10}; 
  double tab2[]={35,35,35};
  Vector3D mid(tab); Vector3D d(tab1); Vector3D i(tab2);
  Cuboid f(mid,60,60,60,"../datasets/cuboid.dat");
  
  f.move(d);

  CHECK(f.getmid()==i);
}

TEST_CASE("metoda translate")
{
  double tab[3]={25,25,25}; double tab1[3][3]={{0,-1,0},{1,0,0},{0,0,1}}; 
  double tab2[3]={-25,25,25};  
  Vector3D mid(tab); Vector3D d(tab2); 
  Matrix3x3 g(tab1);
  Cuboid f(mid,60,60,60,"../datasets/cuboid.dat");
  
  f.translate(g);

  CHECK(f.getmid()==d);
}