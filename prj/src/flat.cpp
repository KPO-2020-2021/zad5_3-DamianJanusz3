/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Flat
 */

#include "flat.hh" 
#include <algorithm>

/*! 
* Konstruktor parametryczny klasy Flat.      
* \param[in]  - mid -środek bryły, 
* \param[in]  - nr - numer bryły
* \param[in]  - Lacze - łącze do gnuplota
* \param[in]  - dimen - wektor wymiarów
* wpisuje do kontenera wszystkie wierzchołki płaskowyżu, dodaje nazwę pliku do gnuplota
*/
Flat::Flat(PzG::LaczeDoGNUPlota  &Lacze ,int nr,Vector3D mid,Vector3D dimenn):Obstacles(Lacze) { 
double x=dimenn[0], y=dimenn[1], z=dimenn[2];
this->oradius=std::max(x,y)+20;

    double tab[]={x,y,z};
    
    dimen=Vector3D(tab);
    
    this->name="../datasets/fmountain"+std::to_string(nr)+".dat";
    this->type="Płaskowyż";
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

    Lacze.DodajNazwePliku(this->getname().c_str(), PzG::RR_Ciagly, 2);
    this->save();
}

