/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Peak
 */

#include "peak.hh"

/*! 
* Konstruktor parametryczny klasy Peak.      
* \param[in]  - mid -środek bryły, 
* \param[in]  - x -wspólrzędna po osi x, 
* \param[in]  - y -wspólrzędna po osi y,
* \param[in]  - z -wspólrzędna po osi z,
* \param[in]  - name -nazwa,
* wpisuje do kontenera wszystkie wierzchołki góry ze szczytem
*/
Peak::Peak(int nr,Vector3D mid,Vector3D dimenn) { 
double x=dimenn[0], y=dimenn[1], z=dimenn[2];
    double tab[]={x,y,z};
    
    dimen=Vector3D(tab);
    
    this->name="../datasets/pmountain"+std::to_string(nr)+".dat";
    this->type="Góra ze szczytem";
    this->mid=mid;
    Vector3D vertex;

   vertex[0]=mid[0];
   vertex[1]=mid[1];
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]-(x/2);
   vertex[1]=mid[1]+(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0];
   vertex[1]=mid[1];
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]+(x/2);
   vertex[1]=mid[1]+(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0];
   vertex[1]=mid[1];
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]+(x/2);
   vertex[1]=mid[1]-(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0];
   vertex[1]=mid[1];
   vertex[2]=mid[2]+(z/2);
   vert.push_back(vertex);

   vertex[0]=mid[0]-(x/2);
   vertex[1]=mid[1]-(y/2);
   vertex[2]=mid[2]-(z/2);
   vert.push_back(vertex);

    Lacze.DodajNazwePliku(this->getname().c_str(), PzG::RR_Ciagly, 2);
    this->save();
}



