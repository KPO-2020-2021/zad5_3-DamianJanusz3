#pragma once

/*!
 * \file
 * \brief Definicja klasy Cuboid
 * 
 * Plik zawiera definicję klasy Cuboid
 */


#include "solid.hh"

/*!
 * Cuboid dziedziczy po klasie Solid
 */
class Cuboid: public Solid {
   
   
public:

/*! 
* Konstruktor parametryczny klasy Cuboid
*/
Cuboid(Vector3D mid=Vector3D(), double x=60, double y=60, double z=60, std::string name="../datasets/cuboid.dat");           

};



