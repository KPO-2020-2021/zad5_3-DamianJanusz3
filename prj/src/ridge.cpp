/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Ridge
 */

#include "ridge.hh"

/*! 
* Konstruktor parametryczny klasy Ridge.      
* \param[in]  - mid -środek bryły, 
* \param[in]  - x -wspólrzędna po osi x, 
* \param[in]  - y -wspólrzędna po osi y,
* \param[in]  - z -wspólrzędna po osi z,
* \param[in]  - name -nazwa,
* wpisuje do kontenera wszystkie wierzchołki góry z granią
*/
Ridge::Ridge(PzG::LaczeDoGNUPlota  &Lacze, int nr,Vector3D mid,Vector3D dimenn /*double x, double y, double z, std::string name*/):Obstacles(Lacze) { 
double x=dimenn[0], y=dimenn[1], z=dimenn[2];
    double tab[]={x,y,z};
    
    double tab3[]={x/2,0,0};
    dimen=Vector3D(tab);
    
    Vector3D mov2(tab3);
    this->name="../datasets/rmountain"+std::to_string(nr)+".dat";
    this->type="Góra z granią";
    Vector3D vertex;

    vertex[0]=mid[0]+(x/2);
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

   vertex[0]=mid[0]+(x/2);
   vertex[1]=mid[1]-(y/2);
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]-(x/2);
   vertex[1]=mid[1]-(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);

    this->mid=mid+mov2;

    Lacze.DodajNazwePliku(this->getname().c_str(), PzG::RR_Ciagly, 2);
    this->save();
}


