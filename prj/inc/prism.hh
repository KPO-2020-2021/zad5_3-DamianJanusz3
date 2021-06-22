#pragma once

/*!
 * \file
 * \brief Definicja klasy Prism
 * 
 * Plik zawiera definicję klasy Prism
 */

#include "solid.hh"

/*!
 * Prism dziedziczy po Solid
 */
class Prism: public Solid {
    //Vector3D mid;
   // std::string name;
    public:
/*! 
* Konstruktor parametryczny klasy Prism
*/
Prism (Vector3D mid=Vector3D(),double z=10, double radius=25,std::string name= "../datasets/prism.dat");

//void setmid (Vector3D mid) {this->mid=mid;}

//Vector3D getmid() const {return mid;}
};