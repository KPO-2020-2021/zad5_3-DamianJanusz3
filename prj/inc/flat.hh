#pragma once


/*!
 * \file
 * \brief Definicja klasy Flat
 * 
 * Plik zawiera definicję klasy Flat 
 */


#include "solid.hh" 
#include "obstacles.hh"

/*!
 * Flat dziedziczy po klasie Solid
 * zawiera dodatkowe pola: środek podstawy i typ.
 */
class Flat: public Solid, public Obstacles {

protected:

//std::string type="Płaskowyż";
   
public:

/*! 
* Konstruktor parametryczny klasy Flat
*/
Flat(int nr,Vector3D mid=Vector3D(),Vector3D dimenn=Vector3D());  

/*! 
* Metoda dostępowa, zwraca typ obiektu
*/
virtual std::string gettype() override {return type;}

virtual Vector3D getmid() /*const*/ override {return mid;}

virtual std::string getname() override {return name;}

};