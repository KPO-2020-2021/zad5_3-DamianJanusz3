/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Cuboid
 */
#include "cuboid.hh"

 /*! 
* Konstruktor parametryczny klasy Cuboid.      
* \param[in]  - mid -środek bryły, 
* \param[in]  - x -wspólrzędna po osi x, 
* \param[in]  - y -wspólrzędna po osi y,
* \param[in]  - z -wspólrzędna po osi z,
* \param[in]  - name -nazwa,
* wpisuje do kontenera wszystkie wierzchołki prostopadłościanu
*/
Cuboid::Cuboid(Vector3D mid, double x, double y, double z, std::string name) {

double tab[]={x,y,z};
dimen= Vector3D(tab);
   this->name=name;
    this->mid=mid;
   Vector3D vertex;

   vertex[0]=mid[0]-(x/2);
   vertex[1]=mid[1]+(y/2);
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]-(x/2);
   vertex[1]=mid[1]+(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]+(x/2);
   vertex[1]=mid[1]+(y/2);
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]+(x/2);
   vertex[1]=mid[1]+(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]+(x/2);
   vertex[1]=mid[1]-(y/2);
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]+(x/2);
   vertex[1]=mid[1]-(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]-(x/2);
   vertex[1]=mid[1]-(y/2);
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]-(x/2);
   vertex[1]=mid[1]-(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);
} 

